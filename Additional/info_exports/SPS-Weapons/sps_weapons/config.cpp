class CfgPatches
{
	class SPS_Weapons
	{
		author[]=
		{
			"SPS Team"
		};
		requiredAddons[]=
		{
			"cba_xeh"
		};
		requiredVersion=0.1;
		units[]={};
		version="1.0.0";
		Air[]={};
		url="http://www.161strr.eu/";
		weapons[]={};
	};
};
class CfgMods
{
	class Mod_Base;
	class SPS: Mod_Base
	{
		actionName="Website";
		action="http://www.161strr.eu/";
		name="SPS Weapons";
		author[]=
		{
			"SPS Team"
		};
		picture="x\SPS\Weapons\SPS_Weapons\ui\logo_ca.paa";
		logo="x\SPS\Weapons\SPS_Weapons\ui\logo_ca.paa";
		logoOver="x\SPS\Weapons\SPS_Weapons\ui\logo_over_ca.paa";
		logoSmall="x\SPS\Weapons\SPS_Weapons\ui\logo_ca.paa";
	};
};
class CfgFunctions
{
	class SPS
	{
		class Core
		{
			class reloadedEH
			{
				file="x\SPS\Weapons\SPS_Weapons\functions\fn_reloadedEH.sqf";
			};
		};
	};
};
class Extended_Reloaded_EventHandlers
{
	class CAManBase
	{
		sps_reloadedEH="_this call sps_fnc_reloadedEH";
	};
};
