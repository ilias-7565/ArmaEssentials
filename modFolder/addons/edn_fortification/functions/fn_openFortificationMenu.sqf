_cursorTarget = cursorTarget;

_dialog = createDialog "edn_fortification_dialogMenu";
setMousePosition [0.5,0.5];
waitUntil {dialog};

if (EDN_Fortification_alignToGround) then {ctrlSetText [1503, "align to horizon"]};

if (isNull _cursorTarget) then
{
	ctrlEnable [1500, false];
	ctrlEnable [1501, false];
	ctrlEnable [1502, false];
}
else
{
	if (!isNull attachedTo _cursorTarget) then
	{
		ctrlEnable [1501, false];
		ctrlEnable [1502, false];
	};
	if (!(_cursorTarget iskindOf "Man")) then
	{
		_countmagazines = count (magazineCargo cursorTarget);
		_countitems = count (itemCargo cursorTarget);
		_countweapons = count (weaponCargo cursorTarget);

		if ((_countmagazines == 0) and (_countitems == 0) and (_countweapons == 0)) then { ctrlEnable [1500, false]; };
		
		_type = typeof _cursorTarget;
		_classnameFound = false;
		{
			for "_i" from 1 to ((count _x) - 1) do
			{
				if (_type == (_x select _i) select 0) then
				{
					_classnameFound = true;
					_i = ((count _x) - 1);
				};
			};
		}
		foreach edn_fortification_array;
		if (!(_classnameFound)) then 
		{
			ctrlEnable [1501, false];
			ctrlEnable [1502, false];
		};
	}
	else
	{
		ctrlEnable [1500, false];
		ctrlEnable [1501, false];
		ctrlEnable [1502, false];
	};
};
