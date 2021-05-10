#include "script_component.hpp"
/*
Name: MIL_GM_fnc_unpack
Author: [W] Miller
Use: Unpack ammunition

Parameter(s):
	0:
		UNIT - player

	1:
		STRING - Unpacked Ammopackage

	2:
		BOOL - Does the script need to remove the item

Returns: BOOL
*/

params ["_player", "_param", ["_doRemove", true]];
_param params ["_ammobox"];

//get which type of ammunition and how many we need
private _bullet = (getText (configFile >> "CfgWeapons" >> _ammobox >> QGVARMAIN(ammotype)));
private _amount = (getNumber (configFile >> "CfgWeapons" >> _ammobox >> QGVARMAIN(bullets)));
private _leftoverAmmo = [];

//remove Item if needed
if (_doRemove) then {
    _player removeItem _ammobox;
};

//add the correct amount of ammunition
for "_A" from 1 to _amount do {
	if (_player canAdd _bullet) then {
		_player addItem _bullet;
	} else {
		_leftoverAmmo pushBack _bullet;
	};
};

//if player could not fit all ammo, drop remaining on ground
if ((count _leftoverAmmo) > 0) then {
	private _ground = "GroundWeaponHolder" createVehicle (position _player);
	_ground addItemCargoGlobal [_bullet, (count _leftoverAmmo)];
};
false
