class CfgPatches
{
	class ace_sandbag
	{
		name="ACE3 - Sand Bag";
		units[]=
		{
			"ACE_Item_Sandbag_empty",
			"ACE_SandbagObject"
		};
		weapons[]=
		{
			"ACE_Sandbag_empty"
		};
		requiredVersion=2;
		requiredAddons[]=
		{
			"ace_interaction"
		};
		author="$STR_ace_common_ACETeam";
		authors[]=
		{
			"Rocko",
			"Ruthberg"
		};
		url="$STR_ace_main_URL";
		version=3.1300001;
		versionStr="3.13.5.57";
		versionAr[]={3,13,5,57};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_sandbag
	{
		init="call compile preprocessFileLineNumbers '\z\ace\addons\sandbag\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sandbag
	{
		init="call compile preprocessFileLineNumbers '\z\ace\addons\sandbag\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_sandbag
	{
		init="call compile preprocessFileLineNumbers '\z\ace\addons\sandbag\XEH_postInit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class ACE_SandbagObject
	{
		class ace_sandbag
		{
			init="_this call ace_dragging_fnc_initObject";
		};
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_sandbag
		{
			killed="_this call ace_sandbag_fnc_handleKilled";
		};
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_sandbag="_this call compile preprocessFileLineNumbers '\z\ace\addons\sandbag\XEH_missionDisplayLoad.sqf'";
	};
};
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ace_sandbag_place
			{
				displayName="$STR_ace_sandbag_DeploySandbag";
				condition="_this call ace_sandbag_fnc_canDeploy";
				statement="[{_this call ace_sandbag_fnc_deploy},_this] call CBA_fnc_execNextFrame";
				exceptions[]=
				{
					"isNotSwimming"
				};
				showDisabled=0;
				icon="\z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
			};
		};
	};
	class Item_Base_F;
	class ACE_Item_Sandbag_empty: Item_Base_F
	{
		author="$STR_ace_common_ACETeam";
		scope=2;
		scopeCurator=2;
		displayName="$STR_ace_sandbag_sandbagEmpty_displayName";
		vehicleClass="Items";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_InventoryItems";
		editorPreview="\z\ace\addons\sandbag\data\preview_sandbag.jpg";
		class TransportItems
		{
			class _xx_ACE_Sandbag_empty
			{
				name="ACE_Sandbag_empty";
				count=1;
			};
		};
	};
	class ThingX;
	class ACE_SandbagObject: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
		};
		author="$STR_ace_common_ACETeam";
		scope=2;
		side=3;
		model="\z\ace\addons\sandbag\data\ace_sandbag_build.p3d";
		displayName="$STR_ace_sandbag_sandbag_displayName";
		vehicleClass="ACE_Logistics_Items";
		typicalCargo[]={};
		armor=12000;
		mapSize=0.40000001;
		nameSound="Bunker";
		icon="\z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
		accuracy=1000;
		destrType="DestructDefault";
		class DestructionEffects
		{
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"z\ace\addons\sandbag\data\bag_destruct.rvmat",
				"z\ace\addons\sandbag\data\bag_destruct.rvmat",
				"z\ace\addons\sandbag\data\bag_destruct.rvmat"
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection="";
				distance=5;
				condition="(true)";
				class ACE_PickUp
				{
					selection="";
					displayName="$STR_ace_sandbag_PICKUPSB";
					distance=4;
					condition="!(_player getVariable [""ace_sandbag_isUsingSandbag"",false])";
					statement="[_player,_target] call ace_sandbag_fnc_pickup";
					showDisabled=0;
					exceptions[]={};
					icon="\z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
				};
			};
		};
		editorCategory="EdCat_Supplies";
		editorSubcategory="ace_main_subcategory";
		editorPreview="\z\ace\addons\sandbag\data\preview_sandbag.jpg";
	};
	class ACE_SandbagObject_NoGeo: ACE_SandbagObject
	{
		scope=1;
		model="\z\ace\addons\sandbag\data\ace_sandbag_nogeo.p3d";
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_Sandbag_empty
			{
				name="ACE_Sandbag_empty";
				count=50;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_Sandbag_empty: ACE_ItemCore
	{
		author="$STR_ace_common_ACETeam";
		scope=2;
		displayName="$STR_ace_sandbag_sandbagEmpty_displayName";
		model="\z\ace\addons\sandbag\data\ace_sandbag_m.p3d";
		picture="\z\ace\addons\sandbag\data\m_sandbag_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=8;
		};
	};
};
