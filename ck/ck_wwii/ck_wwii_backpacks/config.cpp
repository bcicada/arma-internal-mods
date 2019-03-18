#define _ARMA_

class CfgPatches
{
	class ck_wwii_backpacks
	{
		requiredAddons[] = {"fow_characters_c"};
		requiredVersion = 1.0;
		units[] = {"ck_wwii_backpacks_uk_radio","ck_wwii_backpacks_de_radio"};
		weapons[] = {};
		version = "1.0";
		author = "Ohliger";
	};
};
class CfgVehicles
{
	class Weapon_Bag_Base;
	class fow_b_uk_p37_radio;
	class fow_b_torn_radio;

	/*
	class B_UAV_01_backpack_F: Weapon_Bag_Base
	{
		class assembleinfo;
	};
	class fow_b_uk_p37_shovel: B_UAV_01_backpack_F
	{
		class assembleinfo;
	};
	class ck_wwii_backpacks_bike: fow_b_uk_p37_shovel
	{
		author = "Ohliger & IFA3 Team";
		scope = 2;
		displayName = "Sac vélo";
		class assembleInfo: assembleinfo
		{
			assembleto = "ck_wwii_vehicles_bike_mountable";
			base = "";
			displayname = "vélo";
		};
	};
	*/

	class ck_wwii_backpacks_uk_radio: fow_b_uk_p37_radio
	{
		author = "Ohliger & FOW Team";
		displayName = "(CK) Sac radio";
		mass = 30;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class ck_wwii_backpacks_de_radio: fow_b_torn_radio
	{
		author = "Ohliger & FOW Team";
		displayName = "(ALL) Sac radio";
		mass = 30;
		maximumLoad = 150;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
};