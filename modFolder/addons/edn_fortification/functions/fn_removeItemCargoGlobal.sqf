private ["_container","_array","_type","_count"];
_container = _this select 0;
_array = _this select 1;
_type = _array select 0;
_count = _array select 1;

_originalOldItems = itemCargo _container;
_oldItems = + _originalOldItems;

clearItemCargoGlobal _container;

{
	if (_x == _type and _count > 0) then
	{
		_count = _count - 1;
	}
	else
	{
		_container addItemCargoGlobal [_x, 1];
	};
}
foreach _oldItems;
