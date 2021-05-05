#define dceVolume db3
class CfgPatches{
	class DrongosCommandEnhancement
	{
		author="Drongo";
		name="Drongo's Command Enhancement";
		units[]={};
		weapons[]={};
		requiredAddons[]={"CBA_main"};	
	};
};

class Extended_PostInit_EventHandlers 
{
	dce_Init="execVM'\DCE\Scripts\Start.sqf'";
};

#include "\DCE\Menus\zCoreDefines.hpp"
#include "\DCE\Menus\SquadMenu.hpp"
#include "\DCE\Menus\CommandMenu.hpp"
#include "\DCE\Menus\AttachMenu.hpp"
#include "\DCE\Menus\DynamicSimulation.hpp"
#include "\DCE\DRE\Menu\Menu.hpp"
#include "\DCE\Menus\ArtyMenu.hpp"
#include "\DCE\Scripts\Admin\AdminMenu.hpp"

class CfgFactionClasses
{
	class NO_CATEGORY;
	class DCE_faction: NO_CATEGORY
	{
		displayName="Drongo's Command Enhancement";
		priority=0.1;
		side=7;
	};
};

class CfgVehicleClasses
{
	class DCE_class
	{
		displayName="DCE class";
	};
};

class CfgFunctions 
{
	class dce
	{
		tag="DCE";
		class Start
		{
			file="\DCE\functions";
			class DRE{};
			class DREside{};
			class DREdefine{};
			class DREspawnPoint{};
			class DREobjective{};
		};
	};
};

//https://community.bistudio.com/wiki/Modules
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription;
	};
	
	class DCE_DRE: Module_F
	{
		author="Drongo";
		_generalMacro="dmp_DRE";
		scope=2;
		displayName="[DRE] * Enable reinforcements *";
		//icon="\DMP\AO.paa";
		category="DCE_faction";
		function="dce_fnc_DRE";
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class dceDREgenerateIncome
			{
				displayName="Generate income";
				description="Generate income from objectives and passive income";
				typeName="STRING";
				class values
				{
					class TRUE
					{
						name="True";
						value="TRUE";
					};
					class FALSE
					{
						name="False";
						value="FALSE";
						default=1;
					};
				};
			};
			class dceDREincomeCycle
  			{
				displayName="Income cycle length";
				description="Seconds between each increment of income";
				typeName="NUMBER";
				defaultValue="30";
			};
		};
	};
	
	class DCE_DREside: Module_F
	{
		author="Drongo";
		_generalMacro="dce_DREside";
		scope=2;
		displayName="[DRE] Configure side";
		icon="\A3\ui_f\data\map\markers\military\flag_CA.paa";
		category="DCE_faction";
		function="dce_fnc_DREside";
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class dceDREside
			{
				displayName="Side";
				description="Side to configure";
				typeName="STRING";
				class values
				{
					class WEST
					{
						name="West";
						value="WEST";
						default=1;
					};
					class EAST
					{
						name="East";
						value="EAST";
					};
					class RES
					{
						name="Resistance";
						value="RESISTANCE";
					};
				};
			};
			class dceDREloadDefaults
			{
				displayName="Load default units";
				description="Load default BIS units for this side";
				typeName="STRING";
				class values
				{
					class TRUE
					{
						name="True";
						value="TRUE";
						default=1;
					};
					class FALSE
					{
						name="False";
						value="FALSE";
						//default=1;
					};
				};
			};
			class dceDREresources
  			{
				displayName="Starting resources";
				description="Resources for this side at mission start";
				typeName="NUMBER";
				defaultValue="1000";
			};
			class dceDREpassiveIncome
  			{
				displayName="Passive income";
				description="Income earned every cycle, regardless of objectives held";
				typeName="NUMBER";
				defaultValue="0";
			};
			class dceDREincomeModifier
  			{
				displayName="Income modifier";
				description="Multiplyer for income per cycle";
				typeName="NUMBER";
				defaultValue="1";
			};
			class dceDREcostModifier
  			{
				displayName="Cost modifier";
				description="Multiplyer for unit price at time of purchase";
				typeName="NUMBER";
				defaultValue="1";
			};
			class dceDREtimeModifier
  			{
				displayName="Spawn time modifier";
				description="Multiplyer for time to spawn units at time of purchase";
				typeName="NUMBER";
				defaultValue="1";
			};
		};
	};
	
	class DCE_DREdefine: Module_F
	{
		author="Drongo";
		_generalMacro="dce_DREdefine";
		scope=2;
		displayName="[DRE] Define reinforcements";
		icon="\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
		category="DCE_faction";
		function="dce_fnc_DREdefine";
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class dceDREside
			{
				displayName="Side";
				description="Side to configure";
				typeName="STRING";
				class values
				{
					class WEST
					{
						name="West";
						value="WEST";
						default=1;
					};
					class EAST
					{
						name="East";
						value="EAST";
					};
					class RES
					{
						name="Resistance";
						value="RESISTANCE";
					};
				};
			};
			class dceDREdescription
			{
				displayName="Description";
				description="Description of infantry/special (vehicles auto-detect classname)";
				typeName="STRING";
				defaultValue="";
			};
			class dceDREsection
			{
				displayName="Section";
				description="Section of the reinforcement list to add this squad/vehicle to";
				typeName="STRING";
				class values
				{
					class Infantry
					{
						name="Infantry";
						value="Infantry";
						default=1;
					};
					class Soft
					{
						name="Soft vehicle";
						value="Soft";
					};
					class AFV
					{
						name="AFV";
						value="AFV";
					};
					class Helo
					{
						name="Helo";
						value="Helo";
					};
					class Air
					{
						name="Air";
						value="Air";
					};
					class Boat
					{
						name="Boat";
						value="Boat";
					};
					class Other
					{
						name="Other";
						value="Other";
					};
					class Drone
					{
						name="Drone";
						value="Drone";
					};
					class Special
					{
						name="Special";
						value="Special";
					};
				};
			};
			class dceDREcost
  			{
				displayName="Cost";
				description="Resources cost for this squad/vehicle";
				typeName="NUMBER";
				defaultValue="100";
			};
			class dceDREbuildTime
  			{
				displayName="Build time";
				description="Seconds it takes for the unit to appear after purchase";
				typeName="NUMBER";
				defaultValue="1";
			};
			class dceDREpriority
  			{
				displayName="Priority";
				description="Seconds it takes for the unit to appear after purchase";
				typeName="NUMBER";
				defaultValue="1";
			};
			class dceDREscript
  			{
				displayName="Script";
				description="Script to be run for Special entries";
				typeName="SCRIPT";
				defaultValue="";
			};
			class dceDREscriptDelete
			{
				displayName="Delete script";
				description="Set to TRUE if the script can only be bought once";
				typeName="STRING";
				class values
				{
					class TRUE
					{
						name="True";
						value="TRUE";
						default=1;
					};
					class FALSE
					{
						name="False";
						value="FALSE";
						//default=1;
					};
				};
			};
		};
	};
	
	class DCE_DREspawnPoint: Module_F
	{
		author="Drongo";
		_generalMacro="dce_DREspawnPoint";
		scope=2;
		displayName="[DRE] Spawn point";
		icon="\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa";
		category="DCE_faction";
		function="dce_fnc_DREspawnPoint";
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class dceDREside
			{
				displayName="Side";
				description="Side of reinforcement that will spawn here";
				typeName="STRING";
				class values
				{
					class WEST
					{
						name="West";
						value="WEST";
						default=1;
					};
					class EAST
					{
						name="East";
						value="EAST";
					};
					class RES
					{
						name="Resistance";
						value="RESISTANCE";
					};
				};
			};
			class dceDREtype
			{
				displayName="Type";
				description="Type of reinforcement that will spawn here";
				typeName="STRING";
				class values
				{
					class Infantry
					{
						name="Infantry";
						value="Infantry";
						default=1;
					};
					class Soft
					{
						name="Soft vehicle";
						value="Soft";
					};
					class AFV
					{
						name="AFV";
						value="AFV";
					};
					class Helo
					{
						name="Helo";
						value="Helo";
					};
					class Air
					{
						name="Air";
						value="Air";
					};
					class Boat
					{
						name="Boat";
						value="Boat";
					};
					class Other
					{
						name="Other";
						value="Other";
					};
					class Drone
					{
						name="Drone";
						value="Drone";
					};
					class Special
					{
						name="Special";
						value="Special";
					};
				};
			};
		};
	};
	
	class DCE_DREobjective: Module_F
	{
		author="Drongo";
		_generalMacro="dce_DREobjective";
		scope=2;
		displayName="[DRE] Objective";
		icon="\A3\ui_f\data\map\markers\military\objective_CA.paa";
		category="DCE_faction";
		function="dce_fnc_DREobjective";
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class dceDREname
			{
				displayName="Description";
				description="Name of the objective";
				typeName="SCRIPT";
				defaultValue="Objective";
			};
			class dceDREvalue
  			{
				displayName="Value";
				description="Resources generated per cycle";
				typeName="NUMBER";
				defaultValue="10";
			};
			class dceDREinitialValue
  			{
				displayName="Initial value";
				description="Resources gained by a side when they first capture the objective";
				typeName="NUMBER";
				defaultValue="100";
			};
			class dceDREradius
  			{
				displayName="Radius";
				description="Radius for capture check";
				typeName="NUMBER";
				defaultValue="100";
			};
			class dceDREcycle
  			{
				displayName="Cycle length";
				description="How many seconds between capture checks";
				typeName="NUMBER";
				defaultValue="30";
			};
			class dceDREshowValue
			{
				displayName="Show value";
				description="Show the objective value next to its name";
				typeName="STRING";
				class values
				{
					class TRUE
					{
						name="True";
						value="TRUE";
					};
					class FALSE
					{
						name="False";
						value="FALSE";
						default=1;
					};
				};
			};
		};
	};
};

class CfgSounds
{
	class dceBeep
	{
		name="dceBeep";
		sound[] ={"\DCE\Sounds\beep.ogg",dceVolume,1.0};
		titles[]={};
	};
	
/*	class dceCottees
	{
		name="dceCottees";
		sound[] ={"\DCE\Sounds\Cottees.ogg",dceVolume,1.0};
		titles[]={};
	};
	
	class dceCottees2
	{
		name="dceCottees2";
		sound[] ={"\DCE\Sounds\Cottees2.ogg",dceVolume,1.0};
		titles[]={};
	};*/
};

class CfgMarkerClasses
{
	class DCE_MARKERS
	{
		displayName="DCE Markers";
	};
};

class CfgMarkers
{
	class dce_marker_man
	{
		color[]={"(profilenamespace getvariable['Map_BLUFOR_R',0])","(profilenamespace getvariable['Map_BLUFOR_G',1])","(profilenamespace getvariable['Map_BLUFOR_B',1])","(profilenamespace getvariable['Map_BLUFOR_A',0.8])"};
		icon="\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		markerClass="DCE_MARKERS";
		name="Man";
		scope=1;
		shadow=0;
		showEditorMarkerColor=1;
		side=1;
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
	};
	
/*	class dce_marker_man : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		name="Man";
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
	};*/
	
	class dce_marker_APC : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconAPC_ca.paa";
		name="APC";
		scope=1;
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconAPC_ca.paa";
	};
	
	class dce_marker_car : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconCar_ca.paa";
		name="Car";
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconCar_ca.paa";
	};

	class dce_marker_helicopter : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconHelicopter_ca.paa";
		name="Helicopter";
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconHelicopter_ca.paa";
	};
	
	class dce_marker_plane : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconPlane_ca.paa";
		name="Plane";
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconPlane_ca.paa";
	};
	
	class dce_marker_ship : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconShip_ca.paa";
		name="Ship";
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconShip_ca.paa";
	};
	
	class dce_marker_tank : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconTank_ca.paa";
		name="Tank";
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconTank_ca.paa";
	};
	
	class dce_marker_truck : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconTruck_ca.paa";
		name="Truck";
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconTruck_ca.paa";
	};
	
	class dce_marker_vehicle : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconVehicle_ca.paa";
		name="Vehicle";
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconVehicle_ca.paa";
	};

	class dce_marker_motorcyce : dce_marker_man
	{
		icon="\A3\ui_f\data\map\VehicleIcons\iconMotorcycle_ca.paa";
		name="Motorcycle";
		size=29;
		texture="\A3\ui_f\data\map\VehicleIcons\iconMotorcycle_ca.paa";
	};

	class dce_marker_explosion : dce_marker_man
	{
		color[]={"ColorYellow"};
		icon="\DCE\Icons\Explosion_ca.paa";
		name="Explosion";
		size=29;
		texture="\DCE\Icons\Explosion_ca.paa";
	};
};