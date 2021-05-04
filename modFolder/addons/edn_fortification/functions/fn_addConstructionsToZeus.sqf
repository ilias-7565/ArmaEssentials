_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_units = [_this,1,[],[[]]] call BIS_fnc_param;
_activated = [_this,2,true,[true]] call BIS_fnc_param;
waituntil {!(isNil "edn_fortification_zeus_array")};

if (_activated && !isDedicated) then 
{
	_which = _logic getVariable "which";
	
	if (_which == "all") then
	{
		edn_fortification_zeus_array = allCurators;
	} 
	else
	{
		_curators = [];
		{
			if (_x call bis_fnc_isCurator && !(_x in _curators)) then {_curators = _curators + [_x];};
		} foreach (synchronizedobjects _logic);
		
		edn_fortification_zeus_array = edn_fortification_zeus_array + _curators;
	};
	
};
true
