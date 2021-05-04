class CfgPatches
{
	class asdg_jointrails_mas_weapons
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.74;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"cba_jr"
		};
		author="massi & authors in credits";
	};
};
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		acc_mas_pointer_IR=1;
		acc_mas_pointer_IR_top=1;
		acc_mas_pointer_IR_b=1;
		acc_mas_pointer_IR_top_b=1;
		acc_mas_pointer_IR2=1;
		acc_mas_pointer_IR2_top=1;
		acc_mas_pointer_IR2c=1;
		acc_mas_pointer_IR2c_top=1;
	};
};
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		optic_mas_zeiss=1;
		optic_mas_zeiss_c=1;
		optic_mas_zeiss_eo=1;
		optic_mas_zeiss_eo_c=1;
		optic_mas_acog=1;
		optic_mas_acog_c=1;
		optic_mas_acog_eo=1;
		optic_mas_acog_eo_c=1;
		optic_mas_acog_rd=1;
		optic_mas_acog_rd_c=1;
		optic_mas_handle=1;
		optic_mas_aim=1;
		optic_mas_aim_c=1;
		optic_mas_term=1;
		optic_mas_Holosight_blk=1;
		optic_mas_Arco_blk=1;
		optic_mas_DMS=1;
		optic_mas_DMS_c=1;
		optic_mas_Holosight_camo=1;
		optic_mas_Arco_camo=1;
		optic_mas_Hamr_camo=1;
		optic_mas_Aco_camo=1;
		optic_mas_ACO_grn_camo=1;
		optic_mas_MRCO_camo=1;
		optic_mas_LRPS=1;
	};
};
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems
	{
		optic_mas_pso=1;
		optic_mas_pso_c=1;
		optic_mas_pso_eo=1;
		optic_mas_pso_eo_c=1;
		optic_mas_pso_nv=1;
		optic_mas_pso_nv_c=1;
		optic_mas_pso_nv_eo=1;
		optic_mas_pso_nv_eo_c=1;
		optic_mas_PSO_day=1;
		optic_mas_PSO_nv_day=1;
		optic_mas_kobra=1;
		optic_mas_kobra_c=1;
		optic_mas_nspu=1;
		optic_mas_goshawk=1;
		optic_mas_pso_kv=1;
		optic_mas_pso_kv_c=1;
	};
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mas_snds_M=1;
		muzzle_mas_snds_Mc=1;
		muzzle_mas_snds_SM=1;
		muzzle_mas_snds_SMc=1;
	};
};
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mas_snds_SM=1;
		muzzle_mas_snds_SMc=1;
		muzzle_mas_snds_SH=1;
		muzzle_mas_snds_SHc=1;
		muzzle_mas_snds_M=1;
		muzzle_mas_snds_Mc=1;
	};
};
class asdg_MuzzleSlot_338: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mas_snds_SM=1;
		muzzle_mas_snds_SMc=1;
		muzzle_mas_snds_SH=1;
		muzzle_mas_snds_SHc=1;
	};
};
class asdg_MuzzleSlot_762MG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mas_snds_SM=1;
		muzzle_mas_snds_SMc=1;
	};
};
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mas_snds_L=1;
		muzzle_mas_snds_LM=1;
	};
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mas_snds_L=1;
		muzzle_mas_snds_C=1;
		muzzle_mas_snds_LM=1;
		muzzle_mas_snds_MP7=1;
	};
};
class asdg_MuzzleSlot_45ACP: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mas_snds_L=1;
	};
};
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mas_snds_AK=1;
	};
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mas_snds_AK=1;
		muzzle_mas_snds_SVD=1;
	};
};
class cfgMods
{
	author="massi";
	timepacked="1578824310";
};
