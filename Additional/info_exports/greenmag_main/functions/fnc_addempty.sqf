#include "script_component.hpp"
/*
Name: MIL_GM_fnc_addempty
Author: [W] Miller
Use: Gives players an empty magazine when reloading from empty.

Parameter(s): See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/Reloaded for documentation.

Returns: BOOL

Example function(s):
*/

params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];

if (!GVAR(CBAS_enable)) exitWith {};

private _magtype = _oldMagazine select 0;
if (isNil "_magtype") exitWith {};
if ((_oldMagazine select 1) > 0) exitWith {};

private _typeArray = _magtype call BIS_fnc_itemType;
if ((_typeArray select 0) != "Magazine") exitWith {};


if ((_typeArray select 1) == "Bullet" || (_typeArray select 1) == "ShotgunShell") then {
	_unit addMagazine [_magtype, 0];
};

//prevent Magazines from getting lost - Bugged
/*
private _MagArray = (magazinesAmmoCargo uniformContainer _unit);
_MagArray append (magazinesAmmoCargo vestContainer _unit);
_MagArray append (magazinesAmmoCargo backpackContainer _unit);
_MagArray append [[_magtype, _oldMagazine select 1]];

[
	{
		private _NewMagArray = (magazinesAmmoCargo uniformContainer _unit);
		_NewMagArray append (magazinesAmmoCargo vestContainer _unit);
		_NewMagArray append (magazinesAmmoCargo backpackContainer _unit);

		private _lostMags = _NewMagArray select {!(_X in (_this select 0))};

		if ((count _lostMags) > 0) then {
			{(_this select 1) addMagazine _X;} forEach _lostMags;
		};
	},
	[_MagArray, _unit],
	5
] call CBA_fnc_waitAndExecute;*/
