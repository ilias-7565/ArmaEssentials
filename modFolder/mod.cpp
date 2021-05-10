//config.cpp

#define true 1
#define false 0

class CfgMods {
	// ### Arma 3
	class Mod_Base;
	class modName: Mod_Base {
		//dir = "Curator";		//maybe a storage directory in Arma 3 directory folder
		logo = "\assets_en\co_dw_256x256.paa";
		logoOver = "\assets_en\co_dw_256x256.paa";
		hidePicture = 1;
		name = "ArmaEssentials";
		action = "https://github.com/ilias-7565/ArmaEssentials";
		tooltipOwned = "github.com/ilias-7565/ArmaEssentials";
		overview = "See the link";
		author = "ilias";
		hideName = 1;
		picture = "\assets_en\co_dw_256x256.paa";
		fieldManualTopicAndHint[] = {};		//"Curator","Curator"
		dlcColor[] = {0.31,0.78,0.78,1};
		//appId = 275700;		//[d]
	};
	// ### Arma 2 OA
	// defaultAction = "http://www.arma2.com/mods";
	// class modName {
	// 	dir = "BAF";
	// 	name = "Arma 2: British Armed Forces (Lite)";
	// 	hideName = 1;
	// 	picture = "ca\data_baf\mod.paa";
	// 	hidePicture = 1;
	// 	hash = "BAF v. 1.03";
	// 	action = "http://www.arma2.com/BAF";
	// 	actionName = "Buy Now";
	// 	islite = 1;
	// };
};
