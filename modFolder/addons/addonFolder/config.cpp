
// ## Info, Arma Config language variables

	// Processed/unfolded: further in Arma Config sequence and by "compile" function/command .

	#define %v(%_1,%_2) systemChat (str %_1 + "line_" + str %_2)
	//"%" is only for view/{name uniqueness} in .sqf .

	// .sqf
	// ```
	// []spawn { while {isNull player and isNull findDisplay 46} do{sleep 0.1;}; %v(3,4); }
	// ```

	// ### Escaping
	//
	// Require Arma Config "Define" for passing values with ","
	//
	// .cpp
	// ```
	// #define %f(%_1) hint str %_1
	// #define %v [0,1]
	// ```
	//
	// .sqf
	// ```
	// []spawn { %f(%v); };
	// ```


// ## Addon Init

	#include "assets\commands.cpp"
		// #en


// ### init_en

	#define %addon addonName_
		// For Mission folder: required to be empty .

	#define %storagePath
		// For Mission folder: suggested to use `storage` .
		// If its not empty, end this with `\` .
		// The .pbo/addonName_ folder (directly) is for info, config and autoloaded, files and folders .

	#define %path ##%storagePathassets\
		// If its not empty, do such it would end this with `\` .

	#define %addonNameShow %addon
		// Suggested only for main/independent Addon/-s in a Mod, to make it formatted/literal (alike "Addon name") .

	#define %addonLink https://github.com/ilias-7565/ArmaEssentials
	#define %author authors_

	#define %requiredAddons %loadA3 ,%loadCBA ,%loadAce_min
		//,%loadMas_weapons

	#define %addedObjects "simpleObjectName_"

	#define %addedItems "itemName_"


	// ### .pbo init support

		#ifdef %addon
			class cfgPatches {
				class %addon {
					name = "##%addonNameShow";
					author = "##%author";
					url = "%addonLink";

					requiredVersion = 1.60;
					requiredAddons[] = { %requiredAddons };
					units[] = { %addedObjects };
					weapons[] = { %addedItems };
				};
			};
		#endif


// ## Content

// cfgWeapons and cfgVehicles doesn't work in Mission folder, so there you can use %addon freely .

//#define %path "%storagePath\addonName_\assets\"
// Use this for Mission folder, before every Include that follows one from other pack/addon

#include "##%pathcfgWeapons.cpp"

class cfgVehicles {

	#include "##%pathphysical\objectName_.cpp"

};

class cfgFunctions {
	class %addon {		// Tag-class . by default : file = "functions\" ; . description.ext doesn't support > 1 .
		tag = "##%addon";		// in description.ext, doesn't work in subs of Tag-classes . Case-Insensitive .

		class ##%addon_init {
			//tag = "##%addon";
			//file = "##%storagePathaddonName_";

			#define %v %path
			#define %path
			#include "##%vinit\cfgFunctions.cpp"
			#define %path %v

		};

		class %addon {
			//tag = "##%addon";
			file = "##%pathcfgFunctions\cfgFunctions.cpp";

			#include "##%pathcfgFunctions\cfgFunctions.cpp"

		};

	};
};
