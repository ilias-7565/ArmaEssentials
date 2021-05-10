#include "script_component.hpp"
/*
Name: MIL_GM_fnc_createUnloadAction
Author: [W] Miller
Use: Setup for the GreenMag Action.

Parameter(s):
	0:
		UNIT - player

	1:
		Array - Magazine to refill

	2:
		ARRAY - Other Magazines.

Returns: BOOL
*/
//getVars
params ["_player", "_params"];
_params params ["_currBeltItem"];

private _usedAmmo = "";
private _currMagAmmo = (getNumber (configFile >> "CfgWeapons" >> _currBeltItem >> QGVARMAIN(bullets)));
private _hasSpeedloader = false;
private _mag_canSpeedload = false;

//already running?
if (_player getVariable [QGVARMAIN(running), false]) exitWith {hintSilent format ["%1", LLSTRING(hint_running)]; false};

//check if unit has enough ammo of needed type
//get needed Ammo
if (GVAR(CBAS_simpleGM)) then {
    _usedAmmo = (getText (configFile >> "CfgWeapons" >> _currBeltItem >> QGVARMAIN(basicammo)));
} else {
    _usedAmmo = (getText (configFile >> "CfgWeapons" >> _currBeltItem >> QGVARMAIN(ammo)));
};
//kill script when no ammo type is found
if (_usedAmmo == "") exitWith {hintSilent format ["%1", LLSTRING(hint_error_unload)]};

private ["_actionTime", "_handlerTime"];
[true, false] call FUNC(calcTime);

_player setVariable [QGVARMAIN(running), true];

private _currActionID = [
    _player,
    (LLSTRING(unloadAction)),
    QPATHTOF(data\reload_small.paa),
    QPATHTOF(data\reload_small_pre.paa),
    "alive _this",
    "alive _caller",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _caller action ['SwitchWeapon', _caller, _caller, 900];
        GVAR(ctrlvar) = false;
        GVAR(newAmmo) = 0;

        [
            {
                [
                    {
                        GVAR(newAmmo) = GVAR(newAmmo) + 1;
                        playSound "ace_magazinerepack_soundRoundFinished";
                    },
                    (_this select 0),
                    [],
                    {},
                    {},
                    {true},
                    {GVAR(ctrlvar)}
                ] call CBA_fnc_createPerFrameHandlerObject;
            },
            [(_arguments select 1)],
            (_arguments select 1)
        ] call CBA_fnc_waitAndExecute;
    },
    {},
    {
    params ["_target", "_caller", "_actionId", "_arguments"];
    _arguments params ["_currBeltItem", "_handlerTime", "_usedAmmo", "_currMagAmmo"];

    GVAR(ctrlvar) = true;
    private _leftoverAmmo = [];

    _caller removeItem _currBeltItem;
    	if ((_currMagAmmo - GVAR(newAmmo)) > 0) then {
            _caller addItem (format [
                "%1_%2_%3",
                QGVARMAIN(beltlinked),
                (getText (configFile >> "CfgWeapons" >> _currBeltItem >> QGVARMAIN(typeName))),
                (_currMagAmmo - GVAR(newAmmo))
            ]);
        };

        //playSound "ace_magazinerepack_soundMagazineFinished";

        //add Ammo to inventory
        for "_A" from 1 to GVAR(newAmmo) do {
            if (_caller canAdd _usedAmmo) then {
                _caller addItem _usedAmmo;
            } else {
                _leftoverAmmo pushBack _usedAmmo;
            };
        };

        //if player could not fit all ammo, drop remaining on ground
        if ((count _leftoverAmmo) > 0) then {
            private _ground = "GroundWeaponHolder" createVehicle (position _caller);
            _ground addItemCargoGlobal [_usedAmmo, (count _leftoverAmmo)];
        };

        //reset Vars
        _caller setVariable [QGVARMAIN(running), false];
        _caller setVariable [QGVARMAIN(currActionID), nil];

        true
    },
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_currBeltItem", "_handlerTime", "_usedAmmo", "_currMagAmmo"];

        GVAR(ctrlvar) = true;
        private _leftoverAmmo = [];

        _caller removeItem _currBeltItem;
        if ((_currMagAmmo - GVAR(newAmmo)) > 0) then {
            _caller addItem (format [
                "%1_%2_%3",
                QGVARMAIN(beltlinked),
                (getText (configFile >> "CfgWeapons" >> _currBeltItem >> QGVARMAIN(typeName))),
                (_currMagAmmo - GVAR(newAmmo))
            ]);
        };

        //playSound "ace_magazinerepack_soundMagazineFinished";

        //add Ammo to inventory
        for "_A" from 1 to GVAR(newAmmo) do {
            if (_caller canAdd _usedAmmo) then {
                _caller addItem _usedAmmo;
            } else {
                _leftoverAmmo pushBack _usedAmmo;
            };
        };

        //if player could not fit all ammo, drop remaining on ground
        if ((count _leftoverAmmo) > 0) then {
            private _ground = "GroundWeaponHolder" createVehicle (position _caller);
            _ground addItemCargoGlobal [_usedAmmo, (count _leftoverAmmo)];
        };

        //remove Action when interrupted
        [_caller, _caller getVariable QGVARMAIN(currActionID)] call BIS_fnc_holdActionRemove;

        //reset Vars
        _caller setVariable [QGVARMAIN(running), false];
        _caller setVariable [QGVARMAIN(currActionID), nil];

        true
    },
    [_currBeltItem, _handlerTime, _usedAmmo, _currMagAmmo],
    _actionTime,
    100000,
    true,
    false
] call BIS_fnc_holdActionAdd;
_player setVariable [QGVARMAIN(currActionID), _currActionID];

true
