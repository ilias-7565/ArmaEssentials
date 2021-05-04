#include "script_component.hpp"
/*
 * Author: mharis001, 3Mydlo3
 * Heals the given unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call zen_common_fnc_healUnit
 *
 * Public: No
 */

params ["_unit"];

if (GVAR(aceMedical)) then {
    if (GVAR(aceMedicalTreatment)) then {
        ["ace_medical_treatment_fullHealLocal", _unit, _unit] call CBA_fnc_targetEvent;
    } else {
        ["ace_medical_treatmentAdvanced_fullHealLocal", [_unit, _unit], _unit] call CBA_fnc_targetEvent;
    };
} else {
    // BI's scripted revive system
    if ((missionNamespace getVariable ["bis_revive_mode", 0]) != 0) then {
        ["#rev", 1, _unit] call BIS_fnc_reviveOnState;
        _unit setVariable ["#rev", 1, true];
    } else {
        _unit setDamage 0;
    };
};
