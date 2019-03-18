#define _ARMA_

class CfgPatches
{
	class ck_wwii_factions
	{
		author = "Ohliger";
		version = "1.0";
		requiredVersion = 1.8;
		requiredAddons[] = {};
	};
};

class CfgFactionClasses
{
	class ck_wwii_factions_factionclass_commando_kieffer
	{
		displayname = "Commando Kieffer [N°4]";
		icon = "ck\ck_wwii\ck_wwii_factions\data\icon_faction_ck_co.paa";
		priority = 100;
		side = 2;
	};
};

class CfgVehicleClasses
{
	class ck_wwii_factions_vehclass_cmd_vehicles
	{
		displayName = "Véhicules de commandement";
	};
	class ck_wwii_factions_vehclass_transport_vehicles
	{
		displayName = "Véhicules de transport de troupes";
	};
	class ck_wwii_factions_vehclass_bikes
	{
		displayName = "Deux roues";
	};
};

class CfgEditorSubcategories
{
	class ck_wwii_factions_editorcat_cmd_vehicles
	{
		displayName = "Véhicules de commandement";
	};
	class ck_wwii_factions_editorcat_transport_vehicles
	{
		displayName = "Véhicules de transport de troupes";
	};
	class ck_wwii_factions_editorcat_bikes
	{
		displayName = "Deux roues";
	};
};