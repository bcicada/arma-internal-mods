#define _ARMA_

class CfgPatches
{
	class ck_modern_equipments_p
	{
		author = "Ohliger";
		version = "1.0";
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_data_f", "BCA_back_pack", "task_force_radio"};
	};
};

class CfgVehicles
{
	class B_AssaultPack_mcamo;
	class ck_modern_equipments_winterbp_v: B_AssaultPack_mcamo
	{
		author = "Sakuraba";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		dlc = "ck_core";
		icon = "iconBackpack";
		transportMaxWeapons = 1;
		transportMaxMagazines = 20;
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		displayName = "Sac opex hiver";
		picture = "BCA_back_pack\data\icon\white.paa";
		model = "\BCA_back_pack\bca_OPEX_BACKPACK";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"BCA_back_pack\data\OPEX_BAG\opex_bag_WH_co.paa"};
		hiddenSelectionsMaterials[] = {"BCA_back_pack\data\OPEX_BAG\opex_bag.rvmat"};
		maximumLoad = 200;
		mass = 40;
	};
	class ck_modern_equipments_winterbp_lr_v: B_AssaultPack_mcamo
	{
		author = "Sakuraba";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		dlc = "ck_core";
		icon = "iconBackpack";
		transportMaxWeapons = 1;
		transportMaxMagazines = 20;
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		displayName = "Sac radio longue portée neige";
		picture = "\BCA_back_pack\data\icon\white.paa";
		model = "\BCA_back_pack\bca_MOUNTAIN_BACKPACK_3";
		hiddenSelections[] = {"camo","camo2","camo3","camoB"};
		hiddenSelectionsTextures[] = {"\BCA_back_pack\data\OPEX_BAG\opex_bag_WH_co.paa"};
		hiddenSelectionsMaterials[] = {"BCA_back_pack\data\OPEX_BAG\opex_bag.rvmat","BCA_back_pack\data\OPEX_BAG\poches.rvmat"};
		maximumLoad = 200;
		mass = 40;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
};