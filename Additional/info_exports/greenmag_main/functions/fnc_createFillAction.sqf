#include "script_component.hpp"
/*
Name: fn_createFillAction.sqf
Author: [W] Miller
Use: Setup for the GreenMag Action.

Parameter(s):
	0:
		UNIT - player

	1:
		Array - Params

Returns: BOOL
*/
//getVars
params ["_player", "_params"];

//already running?
if (_player getVariable [QGVARMAIN(running), false]) exitWith {hintSilent format ["%1", LLSTRING(hint_running)]; false};

//get Variables
_params params ["_currMag", "_GMmags"];
_currMag params ["_currMagID", "_currMagAmmo"];

private ["_actionTime", "_handlerTime"];
private _currMagCap = getNumber (configFile >> "CfgMagazines" >> _currMagID >> "count");
private _hasSpeedloader = [_player, QEGVAR(item,speedloader)] call BIS_fnc_hasItem;
private _GMmagsDone = [];
private _ammoToFill = _currMagCap - _currMagAmmo;
private _mag_canSpeedload = (configFile >> "CfgMagazines" >> _currMagID >> QGVARMAIN(canSpeedload)) call BIS_fnc_getCfgDataBool;
private _usedAmmo = "";

//check if unit has enough ammo of needed type
if (GVAR(CBAS_simpleGM)) then {
	_usedAmmo = (getText (configFile >> "CfgMagazines" >> _currMagID >> QGVARMAIN(basicammo)));
} else {
	_usedAmmo = (getText (configFile >> "CfgMagazines" >> _currMagID >> QGVARMAIN(ammo)));
};
//No ammotype found. Maybe the magazine is just not properly supported. Check if we can find some info in the classname and have a base ammotype for it.
if (_usedAmmo == "") then {[_currMagID] call FUNC(getFallbackAmmotype)};
//kill script when no ammo type is found
if (_usedAmmo == "") exitWith {hintSilent format ["%1", LLSTRING(hint_error)]};

//check for count. If there is none, kill script. If to little, at least give a hint.
private _ammoInInventory = ({_X == _usedAmmo} count (items _player));
if (_ammoInInventory == 0) exitWith {hintSilent format ["%1", LLSTRING(hint_nojoy)]; false};
if (_ammoInInventory < _ammoToFill) then {hintSilent format ["%1", LLSTRING(hint_toolittle)]; false};

//clear GMMags array from unimportant mags
_GMmags deleteAt (_GMmags find _currMag);
{
	if ((_X select 0) == _currMagID) then {_GMmagsDone pushBack _X};
} forEach _GMmags;

//add full mags
private _MagArray = (magazinesAmmoCargo uniformContainer _player);
_MagArray append (magazinesAmmoCargo vestContainer _player);
_MagArray append (magazinesAmmoCargo backpackContainer _player);

//add full Mags of type to _GMmags
{
	if (
		((_X select 0) == _currMagID) &&
		((_X select 1) == (getNumber (configFile >> "CfgMagazines" >> (_X select 0) >> "count")))
	) then {
		_GMmagsDone pushBack _X
	};
} forEach _MagArray;

//calculate Time needed
private ["_actionTime", "_handlerTime"];
[true, true] call FUNC(calcTime);

_player setVariable [QGVARMAIN(running), true];

private _currActionID = [
	_player,
	LLSTRING(refillAction),
	QPATHTOF(data\reload_small.paa),
	QPATHTOF(data\reload_small_pre.paa),
	"alive _this",
	"alive _caller",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		GVAR(ctrlvar) = false;
		GVAR(newAmmo) = 0;
		_caller action ['SwitchWeapon', _caller, _caller, 900];

		[
			{
				[
					{
						GVAR(newAmmo) = GVAR(newAmmo) + 1;
						playSound "ace_magazinerepack_soundRoundFinished";
					},
					(_this select 0),
					[],
					{},
					{},
					{true},
					{GVAR(ctrlvar)}
				] call CBA_fnc_createPerFrameHandlerObject;
			},
			[(_arguments select 3)],
			(_arguments select 3)
		] call CBA_fnc_waitAndExecute;
	},
	{},
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		_arguments params ["_currMag", "_GMmagsDone", "_usedAmmo"];
		_currMag params ["_currMagID", "_currMagAmmo"];

		GVAR(ctrlvar) = true;

		GVAR(newAmmo) = GVAR(newAmmo) + _currMagAmmo;
		_GMmagsDone pushBack [_currMagID, GVAR(newAmmo)];

		_caller removeMagazines _currMagID;
		{_caller addMagazine _X;} forEach _GMmagsDone;

		playSound "ace_magazinerepack_soundMagazineFinished";

		//remove Ammo from inventory
		for "_A" from 1 to (GVAR(newAmmo) - _currMagAmmo) do {
			_caller removeItem _usedAmmo;
		};

		//reset Vars
		_caller setVariable [QGVARMAIN(running), false];
		_caller setVariable [QGVARMAIN(currActionID), nil];
		GVAR(newAmmo) = nil;

		true
	},
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		_arguments params ["_currMag", "_GMmagsDone", "_usedAmmo"];
		_currMag params ["_currMagID", "_currMagAmmo"];

		GVAR(ctrlvar) = true;

		GVAR(newAmmo) = GVAR(newAmmo) + _currMagAmmo;
		_GMmagsDone pushBack [_currMagID, GVAR(newAmmo)];

		_caller removeMagazines  _currMagID;
		{_caller addMagazine _X;} forEach _GMmagsDone;

		playSound "ace_magazinerepack_soundMagazineFinished";

		//remove Ammo from inventory
		for "_A" from 1 to (GVAR(newAmmo) - _currMagAmmo) do {
			_caller removeItem _usedAmmo;
		};

		//remove Action when interrupted
		[_caller, _caller getVariable QGVARMAIN(currActionID)] call BIS_fnc_holdActionRemove;

		//reset Vars
		_caller setVariable [QGVARMAIN(running), false];
		_caller setVariable [QGVARMAIN(currActionID), nil];
		GVAR(newAmmo) = nil;

		true
	},
	[_currMag, _GMmagsDone, _usedAmmo, _handlerTime],
	_actionTime,
	100000,
	true,
	false
] call BIS_fnc_holdActionAdd;
_player setVariable [QGVARMAIN(currActionID), _currActionID];

/*
[
	{
		if (!(isNil {(_this select 0) getVariable QGVARMAIN(currActionID)})) then
		{
			if ((_this select 0) != )
			[(_this select 0), (_this select 1)] call BIS_fnc_holdActionRemove;
			(_this select 0) setVariable [QGVARMAIN(running), false, true];
			(_this select 0) setVariable [QGVARMAIN(currActionID), nil, true];
		};
	},
	[_player, _currActionID],
	210
] call CBA_fnc_waitAndExecute;
*/

true
