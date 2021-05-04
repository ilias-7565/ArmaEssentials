EDN_Fortification_object = _this select 0;

_bbr = boundingBoxReal EDN_Fortification_object;
_p1 = _bbr select 0;
_p2 = _bbr select 1;
_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
_maxLength = abs ((_p2 select 1) - (_p1 select 1));
_maxHeight = abs ((_p2 select 2) - (_p1 select 2));
_maxSize = 0;
if (_maxWidth >= _maxLength) then {_maxSize = _maxWidth} else {_maxSize = _maxLength};
_distance = (_maxSize / 2) + 1;

//Disable all Collisions with the Object
[[EDN_Fortification_object,"Disable"],"edn_fnc_updateCollisions",true,false,true] call BIS_fnc_MP;

//Attach the new Object to the player. The distance to the player is calculated with the Object sizes
EDN_Fortification_object attachTo [player,[0, _distance,1.45]];
EDN_Fortification_object setVariable ["edn_fortification_distance",_distance,false];
EDN_Fortification_object setVariable ["edn_fortification_additionalDistance",0,false];
EDN_Fortification_object setVariable ["edn_fortification_objectDir",0,false];

//add Action for detach object and break the while loop
player addAction ["Detach Object",{detach (_this select 3); player removeAction (_this select 2)},EDN_Fortification_object];

// While the Object is attached to the Player update the Positions.
[] spawn {
	_direction = 0;
	_high = 1.45;
	
	_VecDir = [0,1,0];
	_VecNormal = [0,0,1];
	
	{
		_x removeCuratorEditableObjects [[EDN_Fortification_object],true];
	}
	foreach allCurators;
	
	while {!isNull attachedTo EDN_Fortification_object} do 
	{
		_distance = (EDN_Fortification_object getVariable "edn_fortification_distance") + (EDN_Fortification_object getVariable "edn_fortification_additionalDistance");
		_direction = ((acos ((ATLtoASL positionCameraToWorld [0, 0, 1] select 2) - (ATLtoASL positionCameraToWorld [0, 0, 0] select 2)) - 90)* -1);		//I have taken this one single line from R3F Logistics couse i can't find something like that
		if (!freeLook) then {_high = ((tan _direction) * _distance) + 1.45 + ((getPos Player) select 2);};
		
		if (_high > (4 + ((getPos Player) select 2))) then { _high = ((getPos Player) select 2) + 4};
		if (_high < (-4 + ((getPos Player) select 2))) then { _high = ((getPos Player) select 2) + -4};
		
		EDN_Fortification_object attachTo [player,[0, _distance,_high]];
		
		if (EDN_Fortification_alignToGround) then
		{
			_VecNormal = surfaceNormal (getPos EDN_Fortification_object);
			_VecNormal = (player worldToModel ASLtoATL (_VecNormal vectorAdd getPosASL player)) vectorDiff (player worldToModel ASLtoATL (getPosASL player));
			_dir = EDN_Fortification_object getVariable "edn_fortification_objectDir";
			_VecDir = [-cos _dir, sin _dir, 0] vectorCrossProduct _VecNormal;
			
		}
		else
		{
			_VecNormal = [0,0,1];
			_dir = EDN_Fortification_object getVariable "edn_fortification_objectDir";
			_VecDir = [-cos _dir, sin _dir, 0] vectorCrossProduct _VecNormal;
		};
		EDN_Fortification_object setVectorDirAndUp [_VecDir, _VecNormal];
		
		sleep 0.01;
	};
	
	{
		_x addCuratorEditableObjects [[EDN_Fortification_object],true];
	}
	foreach edn_fortification_zeus_array;

	//Enable all Collisions with the Object
	[[EDN_Fortification_object,"Enable",_VecDir,_VecNormal],"edn_fnc_updateCollisions",true,false,true] call BIS_fnc_MP;

	EDN_Fortification_object setVariable ["edn_fortification_distance",Nil,false];
	EDN_Fortification_object setVariable ["edn_fortification_objectDir",Nil,false];
	EDN_Fortification_object setVariable ["edn_fortification_additionalDistance",Nil,false];
	EDN_Fortification_object = Nil;
	
	EDN_Fortification_object setVectorDirAndUp [_VecDir, _VecNormal];
};