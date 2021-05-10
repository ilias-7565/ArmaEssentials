
		class postinit {
			headerType = -1;
			file = "%path\postinit";

			postInit = 1;
			preInit = 0;
			//recompile = 1; if file is in missionFolder, sometimes shows error;
			preStart = 0;

			ext = ".sqf";
		};

		class preinit {
			headerType = -1;
			file = "%path\preinit";

			postInit = 0;
			preInit = 1;
			//recompile = 1; if file is in missionFolder, sometimes shows error;
			preStart = 0;

			ext = ".sqf";
		};

		class prestart {
			headerType = -1;
			file = "%path\prestart";

			postInit = 0;
			preInit = 0;
			//recompile = 1; if file is in missionFolder, sometimes shows error;
			preStart = 1;

			ext = ".sqf";
		};
