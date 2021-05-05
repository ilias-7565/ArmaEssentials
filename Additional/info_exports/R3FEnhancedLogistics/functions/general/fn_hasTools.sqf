params [_unit];
private ["_items"];

_items = items _unit;

if ("ToolKit" in _items && "AdvLog_PowerDrill" in _items && ADVLOG_allowDestroy) then
{
  true
};

false
