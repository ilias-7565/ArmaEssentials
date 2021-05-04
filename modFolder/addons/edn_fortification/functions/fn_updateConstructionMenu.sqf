_id = _this select 0;
_kind = _this select 1; 

if (_kind == "Categorie") then
{
	lbClear 1501;
	
	edn_fortification_categorieId = _id;
	
	{
		if (!(_forEachIndex == 0)) then 
		{
			_type = _x select 0;
			_name = getText (configFile >> "CfgVehicles" >> _type >> "displayName");
			lbAdd [1501, _name];
		};
	}
	foreach (edn_fortification_array select _id);
};
if (_kind == "Classname") then
{
	lbClear 1502;

	edn_fortification_classnameId = _id;
	
	{
		_type = _x select 0;
		_count = _x select 1;
		_itemcount = 0;
		_string = "FAILED";
		
		if (edn_fortification_inventoryHolder == player) then
		{
			{
				if(_x == _type) then {_itemcount = _itemcount + 1};
			} foreach Items player;
		}
		else
		{
			_array = getItemCargo edn_fortification_inventoryHolder;
			{
				if(_x == _type) then {_itemcount = ((_array select 1) select _forEachIndex)};
			} foreach (_array select 0);
		};

		_name = getText (configFile >> "CfgWeapons" >> _type >> "displayName");
		_string = format ["%1:     %3 / %2",_name,_count,_itemcount];
		lbAdd [1502, _string];
	}
	foreach (((edn_fortification_array select edn_fortification_categorieId) select (_id + 1)) select 1);
	
	_type = (((edn_fortification_array select edn_fortification_categorieId) select (_id + 1)) select 0);
	
	_object = _type createVehicleLocal [0,0,0];
	_bbr = boundingBoxReal _object;
	deleteVehicle _object;
	
	_p1 = _bbr select 0;
	_p2 = _bbr select 1;
	_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
	_maxLength = abs ((_p2 select 1) - (_p1 select 1));
	_diagonalSize = sqrt (_maxWidth * _maxWidth + _maxLength * _maxLength);
	
	if(_diagonalSize < 2.5) then {_diagonalSize = 2.5;};
	
	_model = getText (configFile >> "CfgVehicles" >> _type >> "model");
	_display = uiNamespace getVariable "edn_fortification_display";
	_ctrl = _display displayCtrl 1503;
	_ctrl ctrlSetModel _model;
	_ctrl ctrlSetPosition [0.7, _diagonalSize, 0.7];
	_ctrl ctrlCommit 0.01;
};
true
