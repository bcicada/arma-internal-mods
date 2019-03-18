#define _ARMA_

class CfgPatches
{
	class ck_wwii_headgears
	{
		requiredAddons[] = {"WW2_Core_c_WW2_Core_c"};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
		version = "1.0";
		author = "Ohliger";
	};
};
class CfgWeapons
{
	class H_LIB_SOV_RA_OfficerCap;

	class H_CasquetteMN_CPTC: H_LIB_SOV_RA_OfficerCap
	{
		author = "Ohliger & AWAR & Joarius";
		scope = 2;
		displayName = "(CK) Casquette Capitaine de Corvette";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN_cptc_co.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN.rvmat"};
	};
	class H_CasquetteMN_LV: H_LIB_SOV_RA_OfficerCap
	{
		author = "AWAR & Joarius";
		scope = 2;
		displayName = "(CK) Casquette Lieutenant de Vaisseau";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN_lv_co.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN.rvmat"};
	};
	class H_CasquetteMN_EV1: H_LIB_SOV_RA_OfficerCap
	{
		author = "AWAR & Joarius";
		scope = 2;
		displayName = "(CK) Casquette Enseigne de Vaisseau 1° Classe";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN_ev1_co.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN.rvmat"};
	};
	class H_CasquetteMN_EV2: H_LIB_SOV_RA_OfficerCap
	{
		author = "AWAR & Joarius";
		scope = 2;
		displayName = "(CK) Casquette Enseigne de Vaisseau 2° Classe";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN_ev2_co.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN.rvmat"};
	};
	class H_CasquetteMN_MAJ: H_LIB_SOV_RA_OfficerCap
	{
		author = "AWAR & Joarius";
		scope = 2;
		displayName = "(CK) Casquette Major";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN_mp_co.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN.rvmat"};
	};
	class H_CasquetteMN_MP: H_LIB_SOV_RA_OfficerCap
	{
		author = "AWAR & Joarius";
		scope = 2;
		displayName = "(CK) Casquette Maitre Principal";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN_mp_co.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN.rvmat"};
	};
	class H_CasquetteMN_PM: H_LIB_SOV_RA_OfficerCap
	{
		author = "AWAR & Joarius";
		scope = 2;
		displayName = "(CK) Casquette Premier Maitre";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN_mp_co.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN.rvmat"};
	};
	class H_CasquetteMN_MT: H_LIB_SOV_RA_OfficerCap
	{
		author = "AWAR & Joarius";
		scope = 2;
		displayName = "(CK) Casquette Maitre";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN_mp_co.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN.rvmat"};
	};
	class H_CasquetteMN_SM: H_LIB_SOV_RA_OfficerCap
	{
		author = "AWAR & Joarius";
		scope = 2;
		displayName = "(CK) Casquette Second Maitre";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN_sm_co.paa"};
		hiddenSelectionsMaterials[] = {"ck\ck_wwii\ck_wwii_headgears\data\fra_CasquetteMN.rvmat"};
	};
};