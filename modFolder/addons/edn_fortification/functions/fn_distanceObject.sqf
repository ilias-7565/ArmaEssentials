_distanceValue = _this select 0;
_distance = EDN_Fortification_object getVariable "edn_fortification_additionalDistance";
_distance = _distance + _distanceValue;
if(_distance < -1) then { _distance = -1; };
if(_distance > 5) then { _distance = 5; };
EDN_Fortification_object setVariable ["edn_fortification_additionalDistance",_distance,false];