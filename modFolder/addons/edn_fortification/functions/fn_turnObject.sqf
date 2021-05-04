_turnValue = _this select 0;
_dir = EDN_Fortification_object getVariable "edn_fortification_objectDir";
_dir = _dir + _turnValue;
if(_dir >= 360) then {_dir = _dir - 360;};
if(_dir < 0) then {_dir = _dir + 360;};
//EDN_Fortification_object setDir _dir;
EDN_Fortification_object setVariable ["edn_fortification_objectDir",_dir,false];