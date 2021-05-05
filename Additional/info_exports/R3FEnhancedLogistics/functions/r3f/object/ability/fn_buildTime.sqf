private ["_time"];

params [["_object", objNull]];

if (isNull _object) exitWith {0};

_class_heritage = [_object] call AdvLog_fnc_getObjectHeritage;


_time = 0;
{
	_idx = R3F_LOG_classes_build_costs find _x;

	if (_idx != -1) then
	{
		_time = (R3F_LOG_CFG_build_time select _idx) select 1;
	};

} forEach _class_heritage;

_time