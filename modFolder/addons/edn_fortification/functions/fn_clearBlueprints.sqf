_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_activated = [_this,2,true,[true]] call BIS_fnc_param;
waituntil {!(isNil "edn_fortification_array")};

edn_fortification_array = [];