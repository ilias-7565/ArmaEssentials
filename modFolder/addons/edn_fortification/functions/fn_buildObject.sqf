_objectType = (((edn_fortification_array select edn_fortification_categorieId) select (edn_fortification_classnameId + 1)) select 0);

_couldBuild = true;

{
	_ressourcetype = _x select 0;
	_count = _x select 1;
	_itemcount = 0;
	_string = "FAILED";
	
	if (edn_fortification_inventoryHolder == player) then
	{
		{
			if(_x == _ressourcetype) then {_itemcount = _itemcount + 1};
		} foreach Items player;
		if(_itemcount < _count) then 
		{ 
			_couldBuild = false;
		};
	}
	else
	{
		_array = getItemCargo edn_fortification_inventoryHolder;
		{
			if(_x == _ressourcetype) then {_itemcount = ((_array select 1) select _forEachIndex)};
		} foreach (_array select 0);
		if(_itemcount < _count) then 
		{ 
			_couldBuild = false;
		};
	};
}
foreach (((edn_fortification_array select edn_fortification_categorieId) select (edn_fortification_classnameId + 1)) select 1);

if(_couldBuild) then
{
	if (edn_fortification_inventoryHolder == player) then
	{
		{	
			_ressourcetype = (_x select 0);
			_count = (_x select 1);
			while {_count > 0} do
			{
				player removeItem _ressourcetype;
				_count = _count - 1;
			};
		}
		foreach (((edn_fortification_array select edn_fortification_categorieId) select (edn_fortification_classnameId + 1)) select 1);
	}
	else
	{
		{
			[edn_fortification_inventoryHolder,_x] call edn_fnc_removeItemCargoGlobal;
		}
		foreach (((edn_fortification_array select edn_fortification_categorieId) select (edn_fortification_classnameId + 1)) select 1);
	};
	
	_object = _objectType createVehicle (getPos Player);
	
	clearItemCargoGlobal _object;
	clearMagazineCargoGlobal _object;
	clearWeaponCargoGlobal _object;
	clearBackpackCargoGlobal _object;
	
	[_object] call edn_fnc_moveObject;
}
else
{
	hint "You do not have enought ressources!";
};
true
