#include "script_component.hpp"

params ["_player", "_primBelt", "_coreItem"];

private _beltItems = (items _player) select {(_X isKindOf [_coreItem, configFile >> "CfgWeapons"]) && ((getNumber (configFile >> "CfgWeapons" >> _X >> QGVARMAIN(bullets))) != 200)};
_beltItems deleteAt (_beltItems find _primBelt);
_beltItems sort false;

private _GMActions2 = [];
{
	private _action = {
		params ["_target", "_player", "_params"];
		_params params ["_primBelt", "_coreItem", "_secondBelt"];

		_player removeItem _primBelt;
		_player removeItem _secondBelt;

		private _countPrim = getNumber (configFile >> "CfgWeapons" >> _primBelt >> QGVARMAIN(bullets));
		private _countSec = getNumber (configFile >> "CfgWeapons" >> _secondBelt >> QGVARMAIN(bullets));
		if (_countPrim + _countSec > 200) then {
			_player addItem format ["%1_%2", (getText (configFile >> "CfgWeapons" >> _coreItem >> QGVARMAIN(item))), 200];
			_player addItem format ["%1_%2", (getText (configFile >> "CfgWeapons" >> _coreItem >> QGVARMAIN(item))), (_countPrim + _countSec) - 200];
		} else {
			_player addItem format ["%1_%2", (getText (configFile >> "CfgWeapons" >> _coreItem >> QGVARMAIN(item))), (_countPrim + _countSec)];
		};
		playSound "ace_magazinerepack_soundMagazineFinished";
	};

	private _actionTop = [
		format [
			"%1_%2_%3",
			"SecondBeltLayer",
			_X,
			(count _GMActions2)
		], //give ace action a unique varname
		format [
			"%1 [%2]",
			LLSTRING(combinewith), //localized string
			(getNumber (configFile >> "CfgWeapons" >> _X >> QGVARMAIN(bullets))) //mag name
		], //set the text shown to the player
		(getText (configFile >> "CfgWeapons" >> _X >> "picture")), //set the mag which is will be refilled as action picture
		_action,
		{true},
		{},
		[_primBelt, _coreItem, _X]
	] call ace_interact_menu_fnc_createAction;
	_GMActions2 pushBack [_actionTop, [], _player]; // New action, it's children, and the action's target
} forEach _beltItems;
_GMActions2
