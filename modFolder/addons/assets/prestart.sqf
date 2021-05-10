// ## init

//#cfgF
cfgF = {
	if (isNil _this) then{
		_v = toArray _this;
		_v deleteRange [0,_this find "_fnc_"];
		_v = "Mission" + toString _v;
		missionNamespace getVariable [_v, {systemChat "no script file, parameters: " + str _this}]
	}else{
		missionNamespace getVariable [_this, {systemChat "no script file, parameters: " + str _this}]
	}
};

//#path_en
path = { g_sto select ((g_sto find _this) + 1) };

// ## cont

//#path_en
g_sto = [
	"en","storage\en"
	,"en_sup_ace","storage\en\assets\sup"
	,"en_sup_edn","storage\en\assets\sup"
];


// ## ac

// #player_connection_short partial
g_requests = [];
//[d1]

g_con = [];

if isServer then{

	// #player_connection_short partial
	g_directPlay = [];

	addMissionEventHandler ["PlayerConnected", {		//inFrame
		params ["_id", "_steamId", "_name", "_jip", "_owner"
			,"_directPlay"		//markers
		];

		// #player_connection_short partial
			_nu = g_directPlay find _owner;
			if !(_nu == -1) then{
				g_directPlay deleteRange [_nu,2];
			};
			g_directPlay append [
				_owner,_idstr
			];

		g_con append [
			_steamId		//connection
			,[_owner, _directPlay]
		];

		//[d1]

	}];

}; if hasInterface then{



};
