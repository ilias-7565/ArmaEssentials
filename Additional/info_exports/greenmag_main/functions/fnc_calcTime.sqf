#include "script_component.hpp"
/*
 *
 */
params ["_isMag", "_loading"];

if (_isMag) then {
    //Magazine
    //calculate time per bullet for player
    private _timePB = 1 * (player getVariable [QGVAR(MagSkillCoef), 1]);

    _actionTime = if (_loading) then {
        if (_ammoInInventory >= _ammoToFill) then {_ammoToFill} else {_ammoInInventory}
    } else {
        _currMagAmmo
    };
    _handlerTime = _timePB;
    if (_hasSpeedloader && _mag_canSpeedload && _loading) then {
        _actionTime = _actionTime * 0.5;
        _handlerTime = _handlerTime * 0.5;
    };
    _actionTime = _actionTime * _timePB + _handlerTime * 0.5
} else {
    //Belt
    _actionTime = if (_loading) then {
        (ceil (_ammoToFill / 6.66666666)) max 10;
    } else {
        (ceil (_currMagAmmo / 6.66666666)) max 8;
    };
    _actionTime  = _actionTime * (player getVariable [QGVAR(BeltSkillCoef), 1])
};
