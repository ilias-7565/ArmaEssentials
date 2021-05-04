#include <\dialogs\definitions.hpp>

class edn_fortification_dialogMenu
{
	idd = -1;
	movingenable = false;

	class controls
	{
		class RscText000 : edn_RscText
		{
			text = "Fortification menu";
			x = 0.25;
			y = 0.14;
			h = 0.1;
			w = 0.5;
			colorBackground[] = {1,0.5,0,1};
			SizeEx = "2 * 0.024";
			style = ST_CENTER;
		};
		class GUIBack000 : edn_GUIBack
		{    
			x = 0.25; 
			y = 0.25;
			h = 0.5;
			w = 0.5;
			colorBackground[] = {0,0,0,0.75};
		};
		class RscButton000 : edn_RscButton
		{
			text = "construction menu";
			x = 0.27; 
			y = 0.29;
			h = 0.10;
			w = 0.21;
			style = ST_CENTER;
			action = "closeDialog 0; [player] call edn_fnc_openconstructionmenu;";
		};
		class RscButton001 : edn_RscButton
		{
			idc = 1500;
			text = "build from chest";
			x = 0.52; 
			y = 0.29;
			h = 0.10;
			w = 0.21;
			style = ST_CENTER;
			action = "closeDialog 0; [cursorTarget] call edn_fnc_openconstructionmenu";
		};
		class RscButton002 : edn_RscButton
		{
			idc = 1501;
			text = "move object";
			x = 0.27; 
			y = 0.45;
			h = 0.10;
			w = 0.21;
			style = ST_CENTER;
			action = "[cursorTarget] call edn_fnc_moveObject; closeDialog 0;";
		};
		class RscButton003 : edn_RscButton
		{
			idc = 1502;
			text = "remove object";
			x = 0.52; 
			y = 0.45;
			h = 0.10;
			w = 0.21;
			style = ST_CENTER;
			action = "[cursorTarget] call edn_fnc_removeObject; closeDialog 0;";
		};
		class RscButton004 : edn_RscButton
		{
			idc = 1503;
			text = "align to ground";
			x = 0.27; 
			y = 0.61;
			h = 0.10;
			w = 0.21;
			style = ST_CENTER;
			action = "[] call edn_fnc_alignObject; closeDialog 0;";
		};
		class RscButton005 : edn_RscButton
		{
			text = "cancel";
			x = 0.52; 
			y = 0.61;
			h = 0.10;
			w = 0.21;
			style = ST_CENTER;
			action = "closeDialog 0;";
		};
	};
};

class edn_fortification_dialogConstructionMenu
{
	idd = -1;
	movingenable = false;
	enableSimulation = 1;
	
	onLoad = "uiNamespace setVariable ['edn_fortification_display',_this select 0];";
	
	class Objects
	{
		class Object
		{
			idc = 1503; 
			type = 82;
			model = "A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
			scale = 1;
			
			direction[] = {0, 0, 1};
			up[] = {0, 1, 1};
 
			x = 0.5;
			y = 0.5;
			z = 4.5;
 
			xBack = 0.825;
			yBack = 0.5;
			zBack = 1.2;
 
			inBack = 0;
			enableZoom = 1;
			zoomDuration = 0.001;
		};
	};
	class controls
	{
		class GUIBack001 : edn_GUIBack
		{    
			x = safeZoneX + 0.01 * 3 / 4; 
			y = safeZoneY + 0.12;
			h = safeZoneH - 0.13;
			w = 0.75 * 3 / 4;
			colorBackground[] = {0,0,0,0.7};
		};
		class GUIBack002 : edn_GUIBack
		{    
			x = safeZoneX + safeZoneW - 1.01 * 3 / 4; 
			y = safeZoneY + safeZoneH - 0.51;
			h = 0.5;
			w = 1 * 3 / 4;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class RscText000 : edn_RscText
		{
			text = "Construction menu";
			x = safeZoneX + 0.01 * 3 / 4; 
			y = safeZoneY + 0.01;
			h = 0.1;
			w = 0.75 * 3 / 4;
			colorBackground[] = {1,0.5,0,1};
			SizeEx = "2 * 0.024";
			style = ST_CENTER;
		};
		class RscText001 : edn_RscText
		{
			text = "Requirments:";
			x = safeZoneX + safeZoneW - 0.99 * 3 / 4; 
			y = safeZoneY + safeZoneH - 0.49;
			h = 0.05;
			w = 0.96 * 3 / 4;
			colorBackground[] = {1,0.5,0,1};
			colorText[] = {0,0,0,1};
			SizeEx = "1.5 * 0.024";
			style = ST_CENTER;
		};
		
		class RscButton000 : edn_RscButton
		{
			text = "cancel";
			x = safeZoneX + 0.035 * 3 / 4; 
			y = safeZoneY + safeZoneH - 0.12;
			h = 0.075;
			w = 0.3 * 3 / 4;
			style = ST_CENTER;
			action = "closeDialog 0";
		};
		class RscButton001 : edn_RscButton
		{
			text = "build";
			x = safeZoneX + 0.425 * 3 / 4; 
			y = safeZoneY + safeZoneH - 0.12;
			h = 0.075;
			w = 0.3 * 3 / 4;
			style = ST_CENTER;
			action = "[] call edn_fnc_buildObject; closeDialog 0;";
		};
		
		class RscText002 : edn_RscText
		{
			text = "Categorie:";
			x = safeZoneX + 0.02 * 3 / 4; 
			y = safeZoneY + 0.15;
			h = 0.04;
			w = 0.13 * 3 / 4;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			style = ST_LEFT;
		};
		
		class RscCombo000 : edn_RscCombo
		{
			idc = 1500;
			x = safeZoneX + 0.15 * 3 / 4; 
			y = safeZoneY + 0.15;
			h = 0.04;
			w = 0.56 * 3 / 4;
			colorBackground[] = {0.1,0.1,0.1,1};
			
			onLBSelChanged = "[_this select 1,'Categorie'] call edn_fnc_updateConstructionMenu;";
		};
		class RscListBox000 : edn_RscListBox
		{
			idc = 1501;
			x = safeZoneX + 0.04 * 3 / 4; 
			y = safeZoneY + 0.22;
			h = safeZoneH - 0.40;
			w = 0.68 * 3 / 4;
			colorBackground[] = {0,0,0,1};
			
			onLBSelChanged = "[_this select 1,'Classname'] call edn_fnc_updateConstructionMenu;";
			onLBDblClick = "[] call edn_fnc_buildObject; closeDialog 0;";
		};
		
		class RscListBox001 : edn_RscListBox
		{
			idc = 1502;
			x = safeZoneX + safeZoneW - 0.99 * 3 / 4; 
			y = safeZoneY + safeZoneH - 0.41;
			h = 0.38;
			w = 0.96 * 3 / 4;
			colorBackground[] = {0,0,0,1};
		};
		class GUIBack000 : edn_RscListBox
		{    
			x = safeZoneX + 0.76 * 3 / 4; 
			y = safeZoneY;
			h = safeZoneH;
			w = safeZoneW - 0.76 * 3 / 4;
			colorBackground[] = {0,0,0,0};
		};
	};
	class controlsBackground
	{
		class GUIBack000 : edn_GUIBack
		{    
			x = safeZoneX; 
			y = safeZoneY;
			h = safeZoneH;
			w = safeZoneW;
			colorBackground[] = {0.5,0.5,0.5,1};
		};
	};
};