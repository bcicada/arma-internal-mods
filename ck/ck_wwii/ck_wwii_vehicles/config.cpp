#define _ARMA_

class CfgPatches
{
	class ck_wwii_vehicles
	{
		author = "Ohliger";
		requiredVersion = 1.8;
		version = "1.0";
		requiredAddons[] = {"WW2_Core_c_WW2_Core_c"};
		units[] = {"ck_wwii_vehicles_gmc_open_base","ck_wwii_vehicles_gmc_open_troop_1","ck_wwii_vehicles_gmc_open_troop_2","ck_wwii_vehicles_gmc_open_troop_8","ck_wwii_vehicles_gmc_open_troop_9"};
	};
};

class CfgVehicles
{
	class LIB_US_GMC_Open;
	
	class ck_wwii_vehicles_gmc_open_base: LIB_US_GMC_Open
	{
		author = "Ohliger & IF Team";
		displayName = "Camion de transport";
		scope = 2;
		hiddenSelections[] = {"Camo_1","Camo_2","usa","labels","num0","num1","num2","num3","num4","num5","num6"};
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_vehicles\data\gmc\gmc_open_base_co.paa"};
		minSpeed = -25;
		maxSpeed = 85;
		maxOmega = 550;
		peakTorque = 550;
		acceleration = 7;
		transportAmmo = 0;
		transportMaxWeapons = 500;
		transportMaxMagazines = 2000;
		enginePower = 1800;
		turnCoef = 5.5;
		terrainCoef = 1.0;
		brakeDistance = 5;
		thrustDelay = 0.1;
		armor = 90;
		faction = "ck_wwii_factions_factionclass_commando_kieffer";
		vehicleClass = "ck_wwii_factions_vehclass_transport_vehicles";
		editorSubcategory = "ck_wwii_factions_editorcat_transport_vehicles";
		crew = "B_officer_F";
	};
	class ck_wwii_vehicles_gmc_open_troop_1: ck_wwii_vehicles_gmc_open_base
	{
		displayName = "Camion de transport Troop 1";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_vehicles\data\gmc\gmc_open_troop_1_co.paa"};
	};
	class ck_wwii_vehicles_gmc_open_troop_8: ck_wwii_vehicles_gmc_open_base
	{
		displayName = "Camion de transport Troop 8";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_vehicles\data\gmc\gmc_open_troop_8_co.paa"};
	};
	class ck_wwii_vehicles_gmc_open_troop_9: ck_wwii_vehicles_gmc_open_base
	{
		displayName = "Camion de transport Troop K-Gun";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_vehicles\data\gmc\gmc_open_troop_9_co.paa"};
	};
	class ck_wwii_vehicles_gmc_open_troop_2: ck_wwii_vehicles_gmc_open_base
	{
		displayName = "Camion de transport Troop QG";
		hiddenSelectionsTextures[] = {"ck\ck_wwii\ck_wwii_vehicles\data\gmc\gmc_open_troop_2_co.paa"};
	};
	/*
	class ck_wwii_vehicles_bike: fow_v_truppenfahrrad_ger_heer
	{
		author = "Ohliger & FOW Team";
		scope = 2;
		side = 2;
		displayName = "Vélo";
		minSpeed = -8;
		faction = "ck_wwii_factions_factionclass_commando_kieffer";
		vehicleClass = "ck_wwii_factions_vehclass_bikes";
		editorSubcategory = "ck_wwii_factions_editorcat_bikes";
		crew = "fow_s_uk_cdo_kieffer_rifleman";
	};
	class ck_wwii_vehicles_bike_mountable: ck_wwii_vehicles_bike
	{
		scope = 1;
		displayName = "Vélo dépliable";
		class assembleInfo
		{
			assembleto = "";
			base = "";
			displayname = "";
			dissasembleto[] = {"ck_wwii_backpacks_bike"};
			primary = 1;
		};
	};
	*/
};