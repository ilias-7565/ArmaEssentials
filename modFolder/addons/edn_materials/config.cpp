class CfgPatches
{
	class edn_materials
	{
		units[]=
		{
			"edn_materials",
			"edn_Box_Materials"
		};
		weapons[]=
		{
			"edn_Cinderblock",
			"edn_Metalpipe",
			"edn_Sandbag",
			"edn_Steelplate",
			"edn_Wirecoil",
			"edn_Woodplank",
			"edn_camonet"
		};
		author[]=
		{
			"Eden"
		};
		authorUrl="";
		requiredVersion=1;
		requiredAddons[]=
		{
			"CBA_Main"
		};
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class Box_NATO_Support_F;
	class edn_Box_Materials: Box_NATO_Support_F
	{
		author="Eden";
		displayName="[EDN] Material Box";
		transportmaxmagazines=128;
		transportmaxbackpacks=0;
		maximumload=2000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_edn_sandbag
			{
				count=100;
				name="edn_Sandbag";
			};
			class _xx_edn_Woodplank
			{
				count=100;
				name="edn_Woodplank";
			};
			class _xx_edn_Cinderblock
			{
				count=25;
				name="edn_Cinderblock";
			};
			class _xx_edn_Steelplate
			{
				count=50;
				name="edn_Steelplate";
			};
			class _xx_edn_Metalpipe
			{
				count=100;
				name="edn_Metalpipe";
			};
			class _xx_edn_Wirecoil
			{
				count=50;
				name="edn_Wirecoil";
			};
			class _xx_edn_camonet
			{
				count=50;
				name="edn_camonet";
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class edn_Woodplank: CBA_MiscItem {
		scope=2;
		type=4096;
		detectRange=-1;
		simulation="ItemMineDetector";
		displayName="Wooden plank";
		picture="\edn_materials\images\woodboard.paa";
		model="\edn_materials\items\edn_woodboard.p3d";
		descriptionShort="Just a normal wooden plank.";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=20;
			type=201;
		};
	};
	class edn_Cinderblock: CBA_MiscItem {
		scope=2;
		type=4096;
		detectRange=-1;
		simulation="ItemMineDetector";
		displayName="Cinderblock";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=50;
			type=201;
		};
		picture="\edn_materials\images\cinderblock.paa";
		model="\edn_materials\items\edn_cinderblock.p3d";
		descriptionShort="A hard Brick.";
	};
	class edn_Steelplate: CBA_MiscItem {
		scope=2;
		type=4096;
		detectRange=-1;
		simulation="ItemMineDetector";
		displayName="Steelplate";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=150;
			type=201;
		};
		picture="\edn_materials\images\WorkInProgress.paa";
		model="\edn_materials\items\edn_cinderblock.p3d";
		descriptionShort="Some usefull, very hard material.";
	};
	class edn_Metalpipe: CBA_MiscItem {
		scope=2;
		type=4096;
		detectRange=-1;
		simulation="ItemMineDetector";
		displayName="Aluminium pipe";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=10;
			type=201;
		};
		picture="\edn_materials\images\WorkInProgress.paa";
		model="\edn_materials\items\edn_cinderblock.p3d";
		descriptionShort="An pipe. For build.";
	};
	class edn_Sandbag: CBA_MiscItem {
		scope=2;
		type=4096;
		detectRange=-1;
		simulation="ItemMineDetector";
		displayName="Sandbag";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=50;
			type=201;
		};
		picture="\edn_materials\images\WorkInProgress.paa";
		model="\edn_materials\items\edn_cinderblock.p3d";
		descriptionShort="For build an fast fortification against water or bullets.";
	};
	class edn_Wirecoil: CBA_MiscItem {
		scope=2;
		type=4096;
		detectRange=-1;
		simulation="ItemMineDetector";
		displayName="Wire coil";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=10;
			type=201;
		};
		picture="\edn_materials\images\WorkInProgress.paa";
		model="\edn_materials\items\edn_cinderblock.p3d";
		descriptionShort="Usefull for many things.";
	};
	class edn_camonet: CBA_MiscItem {
		scope=2;
		type=4096;
		detectRange=-1;
		simulation="ItemMineDetector";
		displayName="Camonet";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=10;
			type=201;
		};
		picture="\edn_materials\images\WorkInProgress.paa";
		model="\edn_materials\items\edn_cinderblock.p3d";
		descriptionShort="For hide things.";
	};
};
class cfgMods
{
	author="76561198029961430";
	timepacked="1431455480";
};
