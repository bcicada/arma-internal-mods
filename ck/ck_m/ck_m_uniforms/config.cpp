#define _ARMA_

class CfgPatches
{
	class ck_modern_uniforms
	{
		author = "Ohliger";
		version = "1.0";
		requiredVersion = 1.8;
		requiredAddons[] = {"A3_data_f","A3_Characters_F_BLUFOR"};
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	class ck_modern_uniforms_tex_ce_c_base: B_Soldier_base_F
	{
		scope = 1;
		author = "Ohliger & Sakuraba";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[] = {"camo","insignia","clan"};
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_base_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\unif.rvmat"};
	};
	class ck_modern_uniforms_tex_ce_l_base: B_Soldier_base_F
	{
		scope = 1;
		author = "Ohliger & Sakuraba";
		hiddenSelections[] = {"camo","insignia","clan"};
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_base_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\unif.rvmat"};
	};
	class ck_modern_uniforms_tex_ce_c_cptc_bollore: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_cptc_bollore_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_lv_fourer: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_lv_fourer_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_cptc: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_cptc_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_lv: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_lv_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_ev: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_ev_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_maj: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_maj_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_mp: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_mp_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_pm: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_pm_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_m: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_m_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_sm1: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_sm1_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_sm2: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_sm2_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_smm: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_smm_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_qm1: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_qm1_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_qm2: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_qm2_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_mtb: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_mtb_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_mtl: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_base_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_c_cdt: ck_modern_uniforms_tex_ce_c_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_cdt_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_cptc_bollore: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_cptc_bollore_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_lv_fourer: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_lv_fourer_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_cptc: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_cptc_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_lv: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_lv_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_ev: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_ev_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_maj: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_maj_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_mp: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_mp_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_pm: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_pm_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_m: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_m_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_sm1: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_sm1_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_sm2: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_sm2_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_smm: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_smm_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_qm1: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_qm1_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_qm2: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_qm2_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_mtb: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_mtb_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_mtl: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_base_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
	class ck_modern_uniforms_tex_ce_l_cdt: ck_modern_uniforms_tex_ce_l_base
	{
		hiddenSelectionsTextures[] = {"ck\ck_modern\ck_modern_uniforms\data\unif\ce_cdt_co.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france.paa","ck\ck_modern\ck_modern_uniforms\data\decals\patch_france_BV.paa"};	
	};
};

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class UniformItem;
	class Uniform_Base;
	class ck_modern_uniforms_ce_c_base: Uniform_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE sans grade";
		picture = "ck\ck_modern\ck_modern_uniforms\data\icon\ce_c_co.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ck_modern_uniforms_tex_ce_c_base";
			containerClass = "Supply60";
			mass = 40;
			allowedSlots[] = {701,801,901};
			armor = 0;
		};
	};
	class ck_modern_uniforms_ce_l_base: Uniform_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE sans grade";
		picture = "ck\ck_modern\ck_modern_uniforms\data\icon\ce_l_co.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ck_modern_uniforms_tex_ce_l_base";
			containerClass = "Supply60";
			mass = 40;
			allowedSlots[] = {701,801,901};
			armor = 0;
		};
	};
	class ck_modern_uniforms_ce_c_cptc_bollore: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Cpt.C Bolloré";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_cptc_bollore";
		};
	};
	class ck_modern_uniforms_ce_c_lv_fourer: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Lv Fourer";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_lv_fourer";
		};
	};
	class ck_modern_uniforms_ce_c_cptc: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Cpt.C";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_cptc";
		};
	};
	class ck_modern_uniforms_ce_c_lv: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Lv";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_lv";
		};
	};
	class ck_modern_uniforms_ce_c_ev1: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Ev1";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_ev";
		};
	};
	class ck_modern_uniforms_ce_c_ev2: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Ev2";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_ev";
		};
	};
	class ck_modern_uniforms_ce_c_maj: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Major";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_maj";
		};
	};
	class ck_modern_uniforms_ce_c_mp: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Mp";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_mp";
		};
	};
	class ck_modern_uniforms_ce_c_pm: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Pm";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_pm";
		};
	};
	class ck_modern_uniforms_ce_c_m: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE M";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_m";
		};
	};
	class ck_modern_uniforms_ce_c_sm1: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Sm1";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_sm1";
		};
	};
	class ck_modern_uniforms_ce_c_sm2: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Sm2";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_sm2";
		};
	};
	class ck_modern_uniforms_ce_c_smm: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Smm";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_smm";
		};
	};
	class ck_modern_uniforms_ce_c_qm1: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Qm1";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_qm1";
		};
	};
	class ck_modern_uniforms_ce_c_qm2: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Qm2";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_qm2";
		};
	};
	class ck_modern_uniforms_ce_c_mtb: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Mtb";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_mtb";
		};
	};
	class ck_modern_uniforms_ce_c_mtl: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Mtl";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_mtl";
		};
	};
	class ck_modern_uniforms_ce_c_cdt: ck_modern_uniforms_ce_c_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Cadet";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_c_cdt";
		};
	};
	class ck_modern_uniforms_ce_l_cptc_bollore: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Cpt.C Bolloré";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_cptc_bollore";
		};
	};
	class ck_modern_uniforms_ce_l_lv_fourer: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Lv Fourer";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_lv_fourer";
		};
	};
	class ck_modern_uniforms_ce_l_cptc: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Cpt.C";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_cptc";
		};
	};
	class ck_modern_uniforms_ce_l_lv: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Lv";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_lv";
		};
	};
	class ck_modern_uniforms_ce_l_ev1: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Ev1";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_ev";
		};
	};
	class ck_modern_uniforms_ce_l_ev2: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Ev2";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_ev";
		};
	};
	class ck_modern_uniforms_ce_l_maj: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Major";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_maj";
		};
	};
	class ck_modern_uniforms_ce_l_mp: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Mp";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_mp";
		};
	};
	class ck_modern_uniforms_ce_l_pm: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Pm";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_pm";
		};
	};
	class ck_modern_uniforms_ce_l_m: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE M";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_m";
		};
	};
	class ck_modern_uniforms_ce_l_sm1: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Sm1";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_sm1";
		};
	};
	class ck_modern_uniforms_ce_l_sm2: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Sm2";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_sm2";
		};
	};
	class ck_modern_uniforms_ce_l_smm: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Smm";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_smm";
		};
	};
	class ck_modern_uniforms_ce_l_qm1: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Qm1";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_qm1";
		};
	};
	class ck_modern_uniforms_ce_l_qm2: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Qm2";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_qm2";
		};
	};
	class ck_modern_uniforms_ce_l_mtb: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Mtb";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_mtb";
		};
	};
	class ck_modern_uniforms_ce_l_mtl: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Mtl";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_mtl";
		};
	};
	class ck_modern_uniforms_ce_l_cdt: ck_modern_uniforms_ce_l_base
	{
		author = "Ohliger & Sakuraba";
		displayName = "(CK) Uniforme CE Cadet";
		class ItemInfo: ItemInfo
		{
			uniformClass = "ck_modern_uniforms_tex_ce_l_cdt";
		};
	};
};