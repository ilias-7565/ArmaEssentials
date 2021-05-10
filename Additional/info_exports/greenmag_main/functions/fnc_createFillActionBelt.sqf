#include "script_component.hpp"
/*
Name: fn_createFillActionBelt.sqf
Author: [W] Miller
Use: Setup for the GreenMag Action.

Parameter(s):
	0:
		UNIT - Player

	1:
		Array - Params

Returns: BOOL
*/
params ["_player", "_params"];

//already running?
if (_player getVariable [QGVARMAIN(running), false]) exitWith {hintSilent format ["%1", LLSTRING(hint_running)]; false};

//getVars
_params params ["_currMag", "_GMmags"];
_currMag params ["_currMagID", "_currMagAmmo"];

private ["_neededBeltType", "_usedBelt", "_currActionID"];
private _currMagCap = getNumber (configFile >> "CfgMagazines" >> _currMagID >> "count");
private _GMmagsDone = [];
private _ammoToFill = _currMagCap - _currMagAmmo;
private _usedAmmo = "";

//check if unit has enough ammo of needed type
if (GVAR(CBAS_simpleGM)) then
{
	_usedAmmo = (getText (configFile >> "CfgMagazines" >> _currMagID >> QGVARMAIN(basicammo)));
}
else
{
	_usedAmmo = (getText (configFile >> "CfgMagazines" >> _currMagID >> QGVARMAIN(ammo)));
};
//No ammotype found. Maybe the magazine is just not properly supported. Check if we can find some info in the classname and have a base ammotype for it.
if (_usedAmmo == "" || "ammo" in _usedAmmo) then {[_currMagID] call FUNC(getFallbackAmmotypeBelt)};
//kill script when no ammo type is found
if (_usedAmmo == "") exitWith {hintSilent format ["%1", _usedAmmo/*LLSTRING(hint_error)*/]; false};

//create config name for needed Belts
private _allBelts = [];
{
	if (_usedAmmo in _X) then {
		_allBelts pushBackUnique (getNumber (configFile >> "CfgWeapons" >> _X >> QGVARMAIN(bullets)));
	};
} forEach (items _player);

//check for count. If there is none, kill script. If to little, at least give a hint.
if ((count _allBelts) == 0) exitWith {hintSilent format ["%1", LLSTRING(hint_nojoy_mg)]; false};
_allBelts sort false;

if ((_allBelts select 0) < _ammoToFill) then {hintSilent format ["%1", LLSTRING(hint_toolittle_mg)]; false};
if (_ammoToFill in _allBelts) then {
	_usedBelt = [_ammoToFill, format ["%1_%2", _usedAmmo, _ammoToFill]];
} else {
	_usedBelt = [_allBelts select 0, format ["%1_%2", _usedAmmo, _allBelts select 0]];
};
//clear GMMags array from unimportant mags
_GMmags deleteAt (_GMmags find _currMag);
{
	if ((_X select 0) == _currMagID) then {_GMmagsDone pushBack _X};
} forEach _GMmags;

//add full mags
private _MagArray = (magazinesAmmoCargo uniformContainer _player);
_MagArray append (magazinesAmmoCargo vestContainer _player);
_MagArray append (magazinesAmmoCargo backpackContainer _player);

//add full Mags of type to _GMmagsDone
{if (((_X select 0) == _currMagID) && ((_X select 1) == (getNumber (configFile >> "CfgMagazines" >> (_X select 0) >> "count")))) then {_GMmagsDone pushBack _X};} forEach _MagArray;

private ["_actionTime"];
[false, true] call FUNC(calcTime);

_player setVariable [QGVARMAIN(running), true];

_currActionID = [
	_player,
	(LLSTRING(refillAction)),
	QPATHTOF(data\reload_small.paa),
	QPATHTOF(data\reload_small_pre.paa),
	"alive _this",
	"alive _caller",
	{
		params ["_target", "_caller"];
		_caller action ['SwitchWeapon', _caller, _caller, 900];
	},
	{},
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		_arguments params ["_currMag", "_currMagCap", "_GMmagsDone", "_usedAmmo", "_ammoToFill", "_usedBelt"];
		_currMag params ["_currMagID", "_currMagAmmo"];
		_usedBelt params ["_usedBeltCount", "_usedBeltID"];

		private ["_newAmmo", "_work"];

		if (_usedBeltCount < _ammoToFill) then {
			_newAmmo = _currMagAmmo + _usedBeltCount;
			_work = false;
		} else {
			_newAmmo = _currMagCap;
			_work = true;
		};
		_GMmagsDone pushBack [_currMagID, _newAmmo];

		_caller removeMagazines _currMagID;
		{_caller addMagazine _X} forEach _GMmagsDone;

		playSound "ace_magazinerepack_soundMagazineFinished";

		//remove Ammo from inventory
		_caller removeItem _usedBeltID;
		if (_work) then {
			_caller addItem format ["%1_%2", _usedAmmo, (_usedBeltCount - _ammoToFill)];
		};

		//reset Vars
		_caller setVariable [QGVARMAIN(running), false];
		_caller setVariable [QGVARMAIN(currActionID), nil];

		true
	},
	{
		params ["_target", "_caller", "_actionId", "_arguments"];

		//remove Action when interrupted
		[_caller, _caller getVariable QGVARMAIN(currActionID)] call BIS_fnc_holdActionRemove;

		//reset Vars
		_caller setVariable [QGVARMAIN(running), false];
		_caller setVariable [QGVARMAIN(currActionID), nil];

		true
	},
	[_currMag, _currMagCap, _GMmagsDone, _usedAmmo, _ammoToFill, _usedBelt],
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
