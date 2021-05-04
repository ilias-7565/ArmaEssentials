_return = false;

for "_i" from 0 to 4 do 
{
	_condition = false;
	switch (_i) do 
	{
		case 0: { if (!dialog) then { _condition = true; };};
		case 1: { if (!isNil "EDN_Fortification_object") then { _condition = true; };};
		case 2: { if (!isNil "EDN_Fortification_object") then { _condition = true; };};
		case 3: { if (!isNil "EDN_Fortification_object") then { _condition = true; };};
		case 4: { if (!isNil "EDN_Fortification_object") then { _condition = true; };};
		default { _condition = true };
	};
	
	if (((_this select 1) == ((EDN_FORTIFICATION_KEYBINDINGS select _i) select 0)) and (player == (vehicle player)) and _condition) then
	{
		_shiftOK=false;
		_ctrlOK=false;
		_altOK=false;
		if (_this select 2) then { if ((EDN_FORTIFICATION_KEYBINDINGS select _i) select 1) then {_shiftOK = true;}; }
		else { if !((EDN_FORTIFICATION_KEYBINDINGS select _i) select 1) then {_shiftOK = true;}; };
		
		if (_this select 3) then { if ((EDN_FORTIFICATION_KEYBINDINGS select _i) select 2) then {_ctrlOK = true;}; } 
		else { if !((EDN_FORTIFICATION_KEYBINDINGS select _i) select 2) then {_ctrlOK = true;}; };
		
		if (_this select 4) then { if ((EDN_FORTIFICATION_KEYBINDINGS select _i) select 3) then {_altOK = true;}; }
		else { if !((EDN_FORTIFICATION_KEYBINDINGS select _i) select 3) then {_altOK = true;}; };
		
		if(_shiftOK && _ctrlOK && _altOK) then
		{
			switch (_i) do 
			{
				case 0: { [] call edn_fnc_openFortificationMenu; _return = true;};		// Open Construction Menu
				case 1: { [5] call edn_fnc_turnObject; _return = true;};				// Turn 5° Left
				case 2: { [-5] call edn_fnc_turnObject; _return = true;};				// Turn 5° Right
				case 3: { [-0.05] call edn_fnc_distanceObject; _return = true;};		// Move 5cm towards you
				case 4: { [0.05] call edn_fnc_distanceObject; _return = true;};			// Move 5cm away from you
			};
		};
	};
};
if (_return) exitwith { true };
false
