#include "script_component.hpp"
params ["_target", "_player", "_params"];

private _allBelts = [];
{
    if (QGVARMAIN(beltlinked) in _X) then {
        _allBelts pushBackUnique (([configFile >> "CfgWeapons" >> _X, true] call BIS_fnc_returnParents) select 1);
    };
} forEach (items _player);
_allBelts sort false;

private _GMActions = [];
{
    private _childs = {
        params ["_target", "_player", "_params"];
        [_player, _params select 0] call FUNC(createBeltLayer);
    };

    private _actionTop = [
        format [
            "%1_%2_%3",
            "primBeltLayer",
            _X,
            (count _GMActions)
        ], //give ace action a unique varname
        format [
            " %1",
            (getText (configFile >> "CfgWeapons" >> _X >> "displayName")) //mag name
        ], //set the text shown to the player
        (getText (configFile >> "CfgWeapons" >> _X >> "picture")), //set the mag which is will be refilled as action picture
        {},
        {true},
        _childs,
        [_X]
    ] call ace_interact_menu_fnc_createAction;
    _GMActions pushBack [_actionTop, [], _player]; // New action, it's children, and the action's target
} forEach _allBelts;
_GMActions
