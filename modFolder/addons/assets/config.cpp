
// ## Addon Init

// ### init_en

#define %h assets_en
#define %h_vi assets_en
#define %author ilias

#include "assets\commands.cpp"

// ### .pbo init ("##%h" and " %h ", is == "addonName_")

class cfgPatches {
	class %h {
		name = "##%h";
		author = "##%author";
		url = "https://github.com/ilias-7565/ArmaEssentials";

		requiredVersion = 1.60;
		requiredAddons[] = {
			%loadA3
			,%loadCBA
			,%loadAce_min
			//,%loadMas_weapons
		};
		units[] = {
			
		};
		weapons[] = {
			
		};
	};
};


class CfgFunctions {
	class  {		// Tag-class . by default : file = "functions\" ; . description.ext doesn't support > 1 .
		tag = "Mission";		// in description.ext, doesn't work in subs of Tag-classes . Case-Insensitive .

		#include path(cfgFunctions.cpp);

	};
};

