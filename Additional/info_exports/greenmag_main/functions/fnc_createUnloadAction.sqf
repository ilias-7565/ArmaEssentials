#include "script_component.hpp"
/*
Name: MIL_GM_fnc_createUnloadAction
Author: [W] Miller
Use: Setup for the GreenMag Action.

Parameter(s):
	0:
		UNIT - player

	1:
		Array - Magazine to refill

	2:
		ARRAY - Other Magazines.

Returns: BOOL
*/
//getVars
params ["_player", "_params"];
_params params ["_currMag", "_GMmags"];
_currMag params ["_currMagID", "_currMagAmmo"];

private _GMmagsDone = [];
private _usedAmmo = "";

//already running?
if (_player getVariable [QGVARMAIN(running), false]) exitWith {hintSilent format ["%1", LLSTRING(hint_running)]; false};

//check if unit has enough ammo of needed type
//get needed Ammo
if (GVAR(CBAS_simpleGM)) then {
	_usedAmmo = (getText (configFile >> "CfgMagazines" >> _currMagID >> QGVARMAIN(basicammo)));
} else {
	_usedAmmo = (getText (configFile >> "CfgMagazines" >> _currMagID >> QGVARMAIN(ammo)));
};
//No ammotype found. Maybe the magazine is just not properly supported. Check if we can find some info in the classname and have a base ammotype for it.
if (_usedAmmo == "") then {[_currMagID] call FUNC(getFallbackAmmotype)};
//kill script when no ammo type is found
if (_usedAmmo == "") exitWith {hintSilent format ["%1", LLSTRING(hint_error_unload)]};

//clear GMMags array from unimportant mags
_GMmags deleteAt (_GMmags find _currMag);
{
	if ((_X select 0) == _currMagID) then {_GMmagsDone pushBack _X};
} forEach _GMmags;

//add empty mags
private _MagArray = (magazinesAmmoCargo uniformContainer _player);
_MagArray append (magazinesAmmoCargo vestContainer _player);
_MagArray append (magazinesAmmoCargo backpackContainer _player);

{if (((_X select 0) == _currMagID) && ((_X select 1) == 0)) then {_GMmagsDone pushBack _X};} forEach _MagArray;

private ["_actionTime", "_handlerTime"];
[true, false] call FUNC(calcTime);

_player setVariable [QGVARMAIN(running), true];

private _currActionID = [
	_player,
	(LLSTRING(unloadAction)),
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
		private _leftoverAmmo = [];

		_GMmagsDone pushBack [_currMagID, 0];

		_caller removeMagazines _currMagID;
		{_caller addMagazine _X} forEach _GMmagsDone;

		//playSound "ace_magazinerepack_soundMagazineFinished";

		//add Ammo to inventory
		for "_A" from 1 to GVAR(newAmmo) do {
			if (_caller canAdd _usedAmmo) then {
				_caller addItem _usedAmmo;
			} else {
				_leftoverAmmo pushBack _usedAmmo;
			};
		};

		//if player could not fit all ammo, drop remaining on ground
		if ((count _leftoverAmmo) > 0) then {
			private _ground = "GroundWeaponHolder" createVehicle (position _caller);
			_ground addItemCargoGlobal [_usedAmmo, (count _leftoverAmmo)];
		};

		//reset Vars
		_caller setVariable [QGVARMAIN(running), false];
		_caller setVariable [QGVARMAIN(currActionID), nil];

		true
	},
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		_arguments params ["_currMag", "_GMmagsDone", "_usedAmmo"];
		_currMag params ["_currMagID", "_currMagAmmo"];

		GVAR(ctrlvar) = true;
		private _leftoverAmmo = [];

		_GMmagsDone pushBack [_currMagID, (_currMagAmmo - GVAR(newAmmo))];

		_caller removeMagazines _currMagID;
		{_caller addMagazine _X} forEach _GMmagsDone;

		//add Ammo to inventory
		for "_A" from 1 to GVAR(newAmmo) do {
			if (_caller canAdd _usedAmmo) then {
				_caller addItem _usedAmmo;
			} else {
				_leftoverAmmo pushBack _usedAmmo;
			};
		};

		//if player could not fit all ammo, drop remaining on ground
		if ((count _leftoverAmmo) > 0) then {
			private _ground = "GroundWeaponHolder" createVehicle (position _caller);
			_ground addItemCargoGlobal [_usedAmmo, (count _leftoverAmmo)];
		};

		//remove Action when interrupted
		[_caller, _caller getVariable QGVARMAIN(currActionID)] call BIS_fnc_holdActionRemove;

		//reset Vars
		_caller setVariable [QGVARMAIN(running), false];
		_caller setVariable [QGVARMAIN(currActionID), nil];

		true
	},
	[_currMag, _GMmagsDone, _usedAmmo, _handlerTime],
	_actionTime, //add 1 second for the first "prepairing" loop and 0.2 seconds "safety"
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
