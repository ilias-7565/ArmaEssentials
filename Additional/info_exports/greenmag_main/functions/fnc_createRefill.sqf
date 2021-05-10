#include "script_component.hpp"
/*
Name: fn_createRefil.sqf
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

//create Array with all Magazines
private _MagArray = (magazinesAmmoCargo uniformContainer _player);
_MagArray append (magazinesAmmoCargo vestContainer _player);
_MagArray append (magazinesAmmoCargo backpackContainer _player);

//filter full mags, grenades, etc...
private _GMmags = [];
private _MagtypeArray = [];
private ["_typeArray"];
{
	_typeArray = (_X select 0) call BIS_fnc_itemType;
	if (
		((_X select 1) != (getNumber (configFile >> "CfgMagazines" >> (_X select 0) >> "count"))) && //mag is not full
		((_typeArray select 0) == "Magazine") && //object is a mag (filter)
		(((_typeArray select 1) == "Bullet") || ((_typeArray select 1) == "ShotgunShell")) //object is a mag (filter)
	) then {
		_GMmags pushBack _X;
		_MagtypeArray pushBackUnique (_X select 0);
	};
} forEach _MagArray;

_GMmags sort false;
_MagtypeArray sort true;

// Add children to the action
private _GMActions = [];
private ["_currType", "_childs", "_actionTop", "_actions", "_childStatement", "_action", "_GMmagsTODO"];
{
	_currType = _X;
	_currUsed = _GMmags select {(_X select 0) == _currType};

	if ((round GVAR(CBAS_maxMags)) == 0) then
	{
    	_GMmagsTODO = _currUsed;
	}
	else
	{
		_GMmagsTODO  = _currUsed select [0, ((round GVAR(CBAS_maxMags)) min (count _currUsed))];
	};

	private _childs = {
		params ["_target", "_player", "_params"];
		_params params ["_GMmagsTODO", "_GMmags"];
		_actions = [];
		{
			private _childStatement =
			{
				params ["_target", "_player", "_params"];
				if (((getNumber (configFile >> "CfgMagazines" >> ((_params select 0) select 0) >> QGVARMAIN(needBelt))) == 0)) then {
					if ([((_params select 0) select 0)] call FUNC(getFallbackBulletOrBelt)) then {
						[_player, _params] call FUNC(createFillAction)
					} else {
						[_player, _params] call FUNC(createFillActionBelt)
					};
				} else {
					[_player, _params] call FUNC(createFillActionBelt)
				}; //call refill FNC
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

	private _actionTop = [
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

//return children
_GMActions
