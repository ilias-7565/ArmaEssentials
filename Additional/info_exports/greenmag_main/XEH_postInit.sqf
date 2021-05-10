#include "script_component.hpp"

[
    QEGVAR(core,box),
    "CONTAINER",
    LSTRING(unpack),
    nil,
    QPATHTOF(data\unpack.paa),
    {true},
    {
        params ["_unit", "_container", "_item", "_slot", "_params"];
        [_unit, [_item], false] call FUNC(unpack);
    },
    true,
    []
] call CBA_fnc_addItemContextMenuOption;
