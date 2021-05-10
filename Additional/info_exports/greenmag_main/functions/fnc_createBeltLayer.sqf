#include "script_component.hpp"

params ["_player", "_beltType"];

private _allBeltsSec = (items _player) select {(_X isKindOf [_beltType, configFile >> "CfgWeapons"]) && ((getNumber (configFile >> "CfgWeapons" >> _X >> QGVARMAIN(bullets))) != 200)};
_allBeltsSec sort false;

private _GMActions1 = [];
{
    private _childs = {
        params ["_target", "_player", "_params"];
        [_player, _params select 1, _params select 0] call FUNC(createSecondBeltLayer);
    };

    private _actionTop =
    [
        format [
            "%1_%2_%3",
            "FirstBeltLayer",
            _X,
            (count _GMActions1)
        ], //give ace action a unique varname
        format [
            "%1 [%2]",
            LLSTRING(combine), //localized string
            (getNumber (configFile >> "CfgWeapons" >> _X >> QGVARMAIN(bullets))) //mag name
        ], //set the text shown to the player
        (getText (configFile >> "CfgWeapons" >> _X >> "picture")), //set the mag which is will be refilled as action picture
        {},
        {true},
        _childs,
        [_beltType, _X]
    ] call ace_interact_menu_fnc_createAction;
    _GMActions1 pushBack [_actionTop, [], _player]; // New action, it's children, and the action's target
} forEach _allBeltsSec;
_GMActions1
