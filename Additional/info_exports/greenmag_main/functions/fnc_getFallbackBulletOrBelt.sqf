#include "script_component.hpp"
params ["_ID"];
if (_ID in GVAR(FallbackBelts)) then {
    //Belt
    false
} else {
    //Mag
    true
};
