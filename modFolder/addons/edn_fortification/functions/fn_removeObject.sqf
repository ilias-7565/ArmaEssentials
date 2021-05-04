_object = _this select 0;

_box = createVehicle ["groundweaponHolder", getPos player,[],0,""];
_box setPos (getPos _object);

{
	if (!(_classnameFound == -1)) then 
	{
		_place = (edn_fortification_array select _categorieFound) select _classnameFound;
		_place set [1,[_array]];
	}
	else
	{
		_place = edn_fortification_array select _categorieFound;
		_place set [count _place, [_classname,[_array]]];
	};
	
	{
		if (!(_foreachindex == 0)) then
		{
			if ((_x select 0) == typeOf _object) then
			{
				{
					_itemtype = (_x select 0);
					_counter = (_x select 1);
					_box addItemCargoGlobal [_itemtype,_counter];
				}
				foreach (_x select 1);
			};
		};
	}
	foreach _x;
}
foreach edn_fortification_array;

deleteVehicle _object;