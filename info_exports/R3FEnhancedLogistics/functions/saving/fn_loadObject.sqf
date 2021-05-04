params [["_array", []]];

if(_array isEqualTo []) exitWith {objNull};

private _object = createVehicle [(_array select 0), (_array select 1), [], 0, "NONE"];
if (count _array > 8) then { _object enableSimulation (_array select 8);};

if (surfaceIsWater (_array select 1)) then { _object setPosASL (_array select 1); } else { _object setPosATL (_array select 1); };
_object setdir (_array select 2);
_object setdamage (_array select 3);

private _items = (_array select 4) select 0;
private _count = (_array select 4) select 1;
{
	_object addWeaponCargoGlobal [_x, _count select _foreachindex];
}foreach _items;

_items = (_array select 5) select 0;
_count = (_array select 5) select 1;
{
	_object addMagazineCargoGlobal [_x, _count select _foreachindex];
}foreach _items;

_items = (_array select 6) select 0;
_count = (_array select 6) select 1;
{
	_object addItemCargoGlobal [_x, _count select _foreachindex];
}foreach _items;

_items = (_array select 7) select 0;
_count = (_array select 7) select 1;
{
	_object addBackpackCargoGlobal [_x, _count select _foreachindex];
	
}foreach _items;

_object;