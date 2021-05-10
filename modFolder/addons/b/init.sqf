
g_cargo = [
	"B_Truck_01_flatbed_F"					,[-1	,8000]		//1500
	,"B_T_Truck_01_transport_F"				,[3100	,10000]
	,"O_Truck_02_transport_F"				,[2700	,7700]
	,"O_MRAP_02_F"							,[450	,4800]
	,"B_T_MRAP_01_F"						,[400	,4300]
	,"B_T_LSV_01_unarmed_F"					,[300	,2000]
	,"B_UGV_01_F"	 						,[200	,2500]
	,"B_Quadbike_01_F"						,[50	,402]
	,"O_T_APC_Tracked_02_cannon_ghex_F"		,[120	,13000]
	,"B_APC_Wheeled_01_cannon_F"			,[140	,11000]
	,"O_T_APC_Wheeled_02_rcws_ghex_F"		,[120	,9000]

	,"B_AFV_Wheeled_01_cannon_F"			,[80	,12000]
	,"B_APC_Tracked_01_AA_F"				,[80	,17000]
	,"O_T_APC_Tracked_02_AA_ghex_F"			,[80	,17000]
	,"B_MBT_01_cannon_F"					,[100	,22000]
	,"O_T_MBT_02_cannon_ghex_F"				,[100	,22000]
	,"O_MBT_04_cannon_F"					,[100	,26000]

	,"B_Boat_Armed_01_minigun_F"			,[500	,10000]
];

en_fnc_spawn = {

	_v = random 2147483647;
	while { !(g_requests find _v == -1) } do{
		_v = random 2147483647;
	};

	[[		//[d]
		clientOwner		//[d manage by Server]
	, _this], {

		_e = _this select 1 select 0 createVehicle [0,0,1000];

		_e enableSimulationGlobal false;
		_e hideObjectGlobal true;

		_e setVehiclePosition [_this select 1, [], 0, "none"];



	}] remoteExec["call",2,false];		//inFrame

	_g = g_cargo;

	{
		// [_e, _x select 1] call ace_cargo_fnc_setSpace;
		// [_x, 3] call ace_cargo_fnc_setSize;
	}forEach _g;

};
