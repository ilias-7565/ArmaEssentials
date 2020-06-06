//config.cpp
#define true 1
#define false 0

class CfgMods
{
	// ### Arma 3
	class Mod_Base;
	class modName: Mod_Base
	{
		dir = "Curator";
		logo = "\A3\Ui_F_Curator\Data\Logos\arma3_curator_logo_ca.paa";
		logoOver = "\A3\Ui_F_Curator\Data\Logos\arma3_curator_logoOver_ca.paa";
		tooltipOwned = "$STR_A3_CFGMODS_CURATOR_NAME";
		action = "http://zeus.arma3.com";
		name = "$STR_A3_CFGMODS_CURATOR_NAME";
		hideName = 1;
		picture = "\A3\Ui_F_Curator\Data\Logos\arma3_zeus_icon_ca.paa";
		hidePicture = 0;
		fieldManualTopicAndHint[] = {"Curator","Curator"};
		dlcColor[] = {0.31,0.78,0.78,1};
		overview = "$STR_A3_DLC_CURATOR_DESCRIPTION";
		appId = 275700;
	};
	// ### Arma 2 OA
	// defaultAction = "http://www.arma2.com/mods";
	// class modName
	// {
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