params[["_object", objNull]];

if (isNull _object) exitWith { false };

private ["_position"];
_position = [0, 0, 0];
		
if (surfaceIsWater (getpos _object)) then { _position = (getposASL _object); } else { _position = (getposATL _object); };

private _array = [
	(typeof _object),
	_position,
	(getdir _object),
	(getDammage _object),
	(getWeaponCargo _object),
	(getMagazineCargo _object),
	(getItemCargo _object),
	(getBackpackCargo _object),
	(simulationEnabled _object)
];

_array
