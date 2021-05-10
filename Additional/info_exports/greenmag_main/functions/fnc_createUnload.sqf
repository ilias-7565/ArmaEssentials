#include "script_component.hpp"
/*
Name: fn_createUnload.sqf
Author: [W] Miller
Use: creates Children for Greenmag functions

Parameter(s):
	0:
		VEHICLE - player

	1:
		UNIT - player

	2:
		ARRAY - params

Returns: BOOL
*/

params ["_target", "_player", "_params"];
private ["_actionsUnpack", "_GMmagsTODO", "_typeArray"];

//create Array with all Magazines
private _MagArray = (magazinesAmmoCargo uniformContainer _player);
_MagArray append (magazinesAmmoCargo vestContainer _player);
_MagArray append (magazinesAmmoCargo backpackContainer _player);

//filter full mags, grenades, etc...
private _GMmags = [];
private _MagtypeArray = [];
{
	_typeArray = (_X select 0) call BIS_fnc_itemType;
	if
	(
		((_X select 1) != 0) && //mag is not empty
		((_typeArray select 0) == "Magazine") && //object is a mag (filter)
		(((_typeArray select 1) == "Bullet") || ((_typeArray select 1) == "ShotgunShell")) /*&&
		((getNumber (configFile >> "CfgMagazines" >> (_X select 0) >> QGVARMAIN(needBelt))) == 0) //object is not a belt
		*/
	)
	then
	{
		_GMmags pushBack _X;
		_MagtypeArray pushBackUnique (_X select 0);
	};
} forEach _MagArray;

_GMmags sort true;
_MagtypeArray sort true;

// Add children to the action
private _GMActions = [];

{
	private _currType = _X;
	_currUsed = _GMmags select {(_X select 0) == _currType};

	if ((round GVAR(CBAS_maxMags)) == 0) then
	{
    	_GMmagsTODO = _currUsed;
	}
	else
	{
		_GMmagsTODO  = _currUsed select [0, ((round GVAR(CBAS_maxMags)) min (count _currUsed))];
	};

	private _childs =
	{
		params ["_target", "_player", "_params"];
		_params params ["_GMmagsTODO", "_GMmags"];
		private _actions = [];
		{
			private _childStatement =
			{
				params ["_target", "_player", "_params"];
				if (((getNumber (configFile >> "CfgMagazines" >> ((_params select 0) select 0) >> QGVARMAIN(needBelt))) == 0)) then {
					if ([((_params select 0) select 0)] call FUNC(getFallbackBulletOrBelt)) then {
						[_player, _params] call FUNC(createUnloadAction)
					} else {
						[_player, _params] call FUNC(createUnloadActionBelt)
					};
				} else {
					[_player, _params] call FUNC(createUnloadActionBelt)
				};
			};

			private _action =
			[
				format [
					"%1_%2",
					(_X select 0),
					(count _actions)
				], //give ace action a unique varname
				format [
					"[%1/%2]",
					(_X select 1), //current Ammocount
					(getNumber (configFile >> "CfgMagazines" >> (_X select 0) >> "count")) //max ammocount
				], //set the text shown to the player
				(getText (configFile >> "CfgMagazines" >> (_X select 0) >> "picture")), //set the mag which is will be refilled as action picture
				_childStatement,
				{true},
				{},
				[_X, _GMmags]
			] call ace_interact_menu_fnc_createAction;
			_actions pushBack [_action, [], _player]; // New action, it's children, and the action's target
		} forEach _GMmagsTODO;

		_actions
	};

	private _actionTop =
	[
		format [
			"%1_%2",
			_X,
			(count _GMActions)
		], //give ace action a unique varname
		format [
			"%1",
			(getText (configFile >> "CfgMagazines" >> _X >> "displayName")) //mag name
		], //set the text shown to the player
		(getText (configFile >> "CfgMagazines" >> _X >> "picture")), //set the mag which is will be refilled as action picture
		{},
		{true},
		_childs,
		[_GMmagsTODO, _GMmags]
	] call ace_interact_menu_fnc_createAction;
	_GMActions pushBack [_actionTop, [], _player]; // New action, it's children, and the action's target
} forEach _MagtypeArray;

/*
 *
 * create Unload for Belt Items
 *
 */

private _allBelts = [];
{
    if (QGVARMAIN(beltlinked) in _X) then {
        private _coreBeltItem = (([configFile >> "CfgWeapons" >> _X, true] call BIS_fnc_returnParents) select 1);
        if ( !(_coreBeltItem in GVAR(NO_UNLOAD_COREBELTS_ARR)) ) then {
            _allBelts pushBackUnique _coreBeltItem;
        };
    };
} forEach (items _player);
_allBelts sort true;

{
    private _childs =
	{
		params ["_target", "_player", "_params"];
		_params params ["_GMmagsTODO", "_GMmags"];
		private _actions = [];
        private _allBeltsSec = (items _player) select {_X isKindOf [_params select 0, configFile >> "CfgWeapons"]};
        _allBeltsSec sort true;

        if ((round GVAR(CBAS_maxMags)) != 0) then {
            _allBeltsSec  = _allBeltsSec select [0, ((round GVAR(CBAS_maxMags)) min (count _allBeltsSec))];
        };

		{
			private _childStatement =
			{
				params ["_target", "_player", "_params"];
				[_player, _params] call FUNC(createUnloadActionBeltItem)
			};

			private _action =
			[
				format [
					"%1_%2",
					_X,
					(count _actions)
				], //give ace action a unique varname
				format [
					"[%1]",
					(getNumber (configFile >> "CfgWeapons" >> _X >> QGVARMAIN(bullets))) //max ammocount
				], //set the text shown to the player
				(getText (configFile >> "CfgWeapons" >> _X >> "picture")), //set the mag which is will be refilled as action picture
				_childStatement,
				{true},
				{},
				[_X]
			] call ace_interact_menu_fnc_createAction;
			_actions pushBack [_action, [], _player]; // New action, it's children, and the action's target
		} forEach _allBeltsSec;

		_actions
	};

    private _actionTop = [
        format [
            "%1_%2_%3",
            "unloadBeltItem",
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


//return children
_GMActions
