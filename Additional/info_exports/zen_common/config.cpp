class CfgPatches
{
	class zen_common
	{
		name="ZEN - Common";
		units[]={};
		weapons[]={};
		requiredVersion=2;
		requiredAddons[]=
		{
			"zen_main"
		};
		author="$STR_zen_main_Author";
		authors[]=
		{
			"mharis001"
		};
		url="$STR_zen_main_URL";
		version=1.1;
		versionStr="1.10.0.24";
		versionAr[]={1,10,0,24};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class zen
		{
			list[]+=
			{
				"zen_common"
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class zen_common
	{
		init="call compile preprocessFileLineNumbers '\x\zen\addons\common\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class zen_common
	{
		init="call compile preprocessFileLineNumbers '\x\zen\addons\common\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class zen_common
	{
		init="call compile preprocessFileLineNumbers '\x\zen\addons\common\XEH_postInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayCurator
	{
		zen_common="call zen_common_fnc_displayCuratorLoad";
	};
};
class Extended_DisplayUnload_EventHandlers
{
	class RscDisplayCurator
	{
		zen_common="call zen_common_fnc_displayCuratorUnload";
	};
};
class RscText;
class RscEdit;
class RscButton;
class RscCheckBox;
class RscActivePicture;
class RscStructuredText;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscControlsGroupNoScrollbars;
class ctrlToolbox;
class ctrlButtonPicture;
class ctrlControlsGroup;
class ctrlStaticPictureKeepAspect;
class RscCombo
{
	class ComboScrollBar;
};
class RscListBox
{
	class ListScrollBar;
};
class RscControlsGroup
{
	class HScrollbar;
	class VScrollbar;
};
class zen_common_RscLabel: RscText
{
	idc=-1;
	x=0;
	y=0;
	w="((10) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	colorBackground[]={0,0,0,0.5};
};
class zen_common_RscBackground: RscText
{
	idc=-1;
	style=2;
	x="((10) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	y=0;
	w="((16) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h="((2.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	colorText[]={1,1,1,0.5};
	colorBackground[]=
	{
		"with missionNamespace do {if (zen_common_darkMode) then {0} else {1}}",
		"with missionNamespace do {if (zen_common_darkMode) then {0} else {1}}",
		"with missionNamespace do {if (zen_common_darkMode) then {0} else {1}}",
		"with missionNamespace do {if (zen_common_darkMode) then {0.2} else {0.1}}"
	};
};
class zen_common_RscCheckbox: RscCheckBox
{
	idc=-1;
	x="((10.1) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	y=0;
	w="((1) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	soundClick[]=
	{
		"\a3\ui_f\data\sound\rscbutton\soundclick",
		0.090000004,
		1
	};
	soundEnter[]=
	{
		"\a3\ui_f\data\sound\rscbutton\soundenter",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\a3\ui_f\data\sound\rscbutton\soundescape",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\a3\ui_f\data\sound\rscbutton\soundpush",
		0.090000004,
		1
	};
};
class zen_common_RscCombo: RscCombo
{
	idc=-1;
	x="((10.1) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	y=0;
	w="((15.9) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	arrowFull="\a3\3DEN\Data\Controls\ctrlCombo\arrowFull_ca.paa";
	arrowEmpty="\a3\3DEN\Data\Controls\ctrlCombo\arrowEmpty_ca.paa";
	class ComboScrollBar: ComboScrollBar
	{
		thumb="\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
		border="\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
		arrowFull="\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
		arrowEmpty="\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
	};
};
class zen_common_RscEdit: RscEdit
{
	idc=-1;
	x="((10.1) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	y="pixelH";
	w="((15.9) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))- pixelH";
	colorText[]={1,1,1,1};
	colorBackground[]={0,0,0,0.2};
};
class zen_common_RscListBox: RscListBox
{
	idc=-1;
	x=0;
	y="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	w="((26) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h="((6) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	class ListScrollBar: ListScrollBar
	{
		arrowEmpty="\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
		arrowFull="\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
		border="\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
		thumb="\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
	};
};
class zen_common_RscToolbox: ctrlToolbox
{
	idc=-1;
	x="((10.1) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	y=0;
	w="((15.9) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	tooltipColorBox[]={0,0,0,0};
	tooltipColorText[]={0,0,0,0};
	tooltipColorShade[]={0,0,0,0};
	rows="zen_common_rows";
	columns="zen_common_columns";
};
class zen_common_RscControlsGroup: RscControlsGroup
{
	idc=-1;
	class HScrollbar: HScrollbar
	{
		thumb="\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
		border="\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
		arrowFull="\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
		arrowEmpty="\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
	};
	class VScrollbar: VScrollbar
	{
		thumb="\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
		border="\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
		arrowFull="\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
		arrowEmpty="\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
		width="((0.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	};
};
class zen_common_RscSides: RscControlsGroupNoScrollbars
{
	idc=-1;
	x="((10) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	y=0;
	w="((16) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h="((2.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	class controls
	{
		class BLUFOR: RscActivePicture
		{
			idc=300;
			text="\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_west_ca.paa";
			tooltip="$STR_West";
			x="((2.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			y="((0.25) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w="((2) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((2) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
		class OPFOR: BLUFOR
		{
			idc=310;
			text="\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_east_ca.paa";
			tooltip="$STR_East";
			x="((5.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
		};
		class Independent: BLUFOR
		{
			idc=320;
			text="\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa";
			tooltip="$STR_Guerrila";
			x="((8.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
		};
		class Civilian: BLUFOR
		{
			idc=330;
			text="\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa";
			tooltip="$STR_Civilian";
			x="((11.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
		};
	};
};
class zen_common_RscOwners: RscControlsGroupNoScrollbars
{
	idc=-1;
	x=0;
	y=0;
	w="((26) * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h="((10) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	class controls
	{
		class Background: zen_common_RscBackground
		{
			x=0;
			y="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w="((26) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((9) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
		class ButtonSides: RscButton
		{
			idc=400;
			style="0x02+ 0xC0";
			text="$STR_zen_common_Sides";
			font="RobotoCondensedLight";
			x=0;
			y=0;
			w="((26/3) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			sizeEx="4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			colorBackground[]={0,0,0,0.5};
			colorBackgroundActive[]=
			{
				"with missionNamespace do {if (zen_common_darkMode) then {0.1} else {1}}",
				"with missionNamespace do {if (zen_common_darkMode) then {0.1} else {1}}",
				"with missionNamespace do {if (zen_common_darkMode) then {0.1} else {1}}",
				"with missionNamespace do {if (zen_common_darkMode) then {0.2} else {0.15}}"
			};
			colorBackgroundDisabled[]=
			{
				"with missionNamespace do {if (zen_common_darkMode) then {0} else {1}}",
				"with missionNamespace do {if (zen_common_darkMode) then {0} else {1}}",
				"with missionNamespace do {if (zen_common_darkMode) then {0} else {1}}",
				"with missionNamespace do {if (zen_common_darkMode) then {0.2} else {0.1}}"
			};
			colorDisabled[]={1,1,1,1};
			colorFocused[]={1,1,1,0.1};
			period=0;
			periodOver=0;
			periodFocus=0;
			shadow=1;
		};
		class ButtonGroups: ButtonSides
		{
			idc=401;
			text="$STR_a3_rscdisplaycurator_modegroups_tooltip";
			x="((26/3) * (((safezoneW / safezoneH) min 1.2)/ 40))";
		};
		class ButtonPlayers: ButtonSides
		{
			idc=402;
			text="$STR_mp_players";
			x="((52/3) * (((safezoneW / safezoneH) min 1.2)/ 40))";
		};
		class TabSides: zen_common_RscSides
		{
			idc=410;
			x=0;
			y="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w="((26) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((9) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			class controls: controls
			{
				class BLUFOR: BLUFOR
				{
					x="((4.25) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y="((3.25) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w="((2.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h="((2.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class OPFOR: OPFOR
				{
					x="((9.25) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y="((3.25) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w="((2.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h="((2.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class Independent: Independent
				{
					x="((14.25) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y="((3.25) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w="((2.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h="((2.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class Civilian: Civilian
				{
					x="((19.25) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y="((3.25) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w="((2.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h="((2.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
			};
		};
		class TabGroups: RscControlsGroupNoScrollbars
		{
			idc=411;
			x=0;
			y="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w="((26) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((9) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			class controls
			{
				class List: zen_common_RscListBox
				{
					idc=420;
					x="((0.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y="((0.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w="((25) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h="((6.8) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorSelect[]={1,1,1,1};
					colorSelect2[]={1,1,1,1};
					colorBackground[]={0,0,0,0.30000001};
					colorSelectBackground[]={0,0,0,0};
					colorSelectBackground2[]={0,0,0,0};
				};
				class ButtonSearch: ctrlButtonPicture
				{
					idc=422;
					text="\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_start_ca.paa";
					x="((0.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y="((7.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w="((1) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[]={0,0,0,0.5};
					offsetPressedX=0;
					offsetPressedY=0;
				};
				class SearchBar: zen_common_RscEdit
				{
					idc=421;
					x="((1.6) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y="((7.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w="((10) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					sizeEx="((0.9) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[]={0,0,0,0.30000001};
				};
				class ButtonUncheck: ButtonSearch
				{
					idc=423;
					text="\x\zen\addons\common\ui\uncheck_all_ca.paa";
					tooltip="$STR_zen_common_UncheckAll";
					x="((23.4) * (((safezoneW / safezoneH) min 1.2)/ 40))";
				};
				class ButtonCheck: ButtonSearch
				{
					idc=424;
					text="\x\zen\addons\common\ui\check_all_ca.paa";
					tooltip="$STR_zen_common_CheckAll";
					x="((24.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
				};
			};
		};
		class TabPlayers: TabGroups
		{
			idc=412;
			class controls: controls
			{
				class List: List
				{
					idc=430;
				};
				class SearchBar: SearchBar
				{
					idc=431;
				};
				class ButtonSearch: ButtonSearch
				{
					idc=432;
				};
				class ButtonUncheck: ButtonUncheck
				{
					idc=433;
				};
				class ButtonCheck: ButtonCheck
				{
					idc=434;
				};
			};
		};
	};
};
class zen_common_RscDisplay
{
	idd=-1;
	movingEnable=1;
	onLoad="uiNamespace setVariable [""zen_common_display"",_this select 0]";
	class controls
	{
		class Title: RscText
		{
			idc=10;
			onLoad="params ['_control','_config']; private _display = ctrlParent _control; _config = configHierarchy _config select 1; _display setVariable [""zen_common_config"",_config];";
			x="((6.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			w="((27) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[]=
			{
				"(profileNamespace getVariable ['GUI_BCG_RGB_R',0.13])",
				"(profileNamespace getVariable ['GUI_BCG_RGB_G',0.54])",
				"(profileNamespace getVariable ['GUI_BCG_RGB_B',0.21])",
				"(profileNamespace getVariable ['GUI_BCG_RGB_A',0.8])"
			};
			moving=1;
		};
		class Background: RscText
		{
			idc=20;
			x="((6.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			w="((27) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			colorBackground[]={0,0,0,0.69999999};
		};
		class Content: RscControlsGroupNoScrollbars
		{
			idc=30;
			x="((7) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			w="((26) * (((safezoneW / safezoneH) min 1.2)/ 40))";
		};
		class ButtonOK: RscButtonMenuOK
		{
			x="((28.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			w="((5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x="((6.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			w="((5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
	};
};
class zen_common_RscDisplayScrollbars: zen_common_RscDisplay
{
	class controls: controls
	{
		class Title: Title
		{
		};
		class Background: Background
		{
		};
		class Content: zen_common_RscControlsGroup
		{
			idc=30;
			x="((7) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			w="((26) * (((safezoneW / safezoneH) min 1.2)/ 40))";
		};
		class ButtonOK: ButtonOK
		{
		};
		class ButtonCancel: ButtonCancel
		{
		};
	};
};
class zen_common_messageBox
{
	idd=-1;
	movingEnable=1;
	onLoad="uiNamespace setVariable [""zen_common_messageBox"",_this select 0]";
	class controls
	{
		class Title: RscText
		{
			idc=100;
			x="((12.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((7.5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((15) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[]=
			{
				"(profileNamespace getVariable ['GUI_BCG_RGB_R',0.13])",
				"(profileNamespace getVariable ['GUI_BCG_RGB_G',0.54])",
				"(profileNamespace getVariable ['GUI_BCG_RGB_B',0.21])",
				"(profileNamespace getVariable ['GUI_BCG_RGB_A',0.8])"
			};
			moving=1;
		};
		class Background: RscText
		{
			idc=110;
			x="((12.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((8.6) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((15) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((3.2) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[]={0,0,0,0.69999999};
		};
		class Picture: ctrlStaticPictureKeepAspect
		{
			idc=120;
			x="((13) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((9) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((2) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((2) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
		class Text: RscStructuredText
		{
			idc=130;
			x="((15.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((9) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((11.5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((5) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
		class ButtonOK: RscButtonMenuOK
		{
			x="((22.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((10) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x="((12.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((10) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((5) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
	};
};
class zen_common_export
{
	idd=-1;
	movingEnable=1;
	onLoad="uiNamespace setVariable [""zen_common_export"",_this select 0]";
	class controls
	{
		class Title: RscText
		{
			idc=200;
			x="((5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((0) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((30) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[]=
			{
				"(profileNamespace getVariable ['GUI_BCG_RGB_R',0.13])",
				"(profileNamespace getVariable ['GUI_BCG_RGB_G',0.54])",
				"(profileNamespace getVariable ['GUI_BCG_RGB_B',0.21])",
				"(profileNamespace getVariable ['GUI_BCG_RGB_A',0.8])"
			};
			moving=1;
		};
		class Background: RscText
		{
			idc=-1;
			x="((5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((1.1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((30) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((22.8) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[]={0,0,0,0.69999999};
		};
		class Group: ctrlControlsGroup
		{
			idc=210;
			x="((5.5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((1.6) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((29) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((21.8) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			class controls
			{
				class Edit: RscEdit
				{
					idc=220;
					style="0x10+ 0x200";
					x=0;
					y=0;
					w="((29) * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h="((21.8) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					sizeEx="((0.8) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[]=
					{
						"with missionNamespace do {if (zen_common_darkMode) then {0} else {1}}",
						"with missionNamespace do {if (zen_common_darkMode) then {0} else {1}}",
						"with missionNamespace do {if (zen_common_darkMode) then {0} else {1}}",
						"with missionNamespace do {if (zen_common_darkMode) then {0.2} else {0.1}}"
					};
				};
			};
		};
		class ButtonClose: RscButtonMenu
		{
			idc=230;
			text="$STR_Disp_Close";
			x="((5) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y="((24) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w="((10) * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h="((1) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
		class ButtonCopy: ButtonClose
		{
			idc=240;
			text="$STR_zen_common_CopyToClipboard";
			x="((15.1) * (((safezoneW / safezoneH) min 1.2)/ 40)+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
		};
	};
};
