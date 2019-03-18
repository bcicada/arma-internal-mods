#define _ARMA_

class CfgPatches
{
	class ck_core_flags
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class ck_core_flags_france
	{
		icon = "\kpfs_europe_ui\west\icons\icon_france_ca.paa";
		displayName = "$STR_KPFS_FACTION_FRANCE";
		priority = 5;
		side = 1;
	};
	class ck_core_flags_belgium
	{
		icon = "\kpfs_europe_ui\west\icons\icon_belgium_ca.paa";
		displayName = "$STR_KPFS_FACTION_BELGIUM";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_Greece
	{
		icon = "\kpfs_europe_ui\west\icons\icon_greece_ca.paa";
		displayName = "$STR_KPFS_FACTION_GREECE";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_Italy
	{
		icon = "\kpfs_europe_ui\west\icons\icon_italy_ca.paa";
		displayName = "$STR_KPFS_FACTION_ITALY";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_Ireland
	{
		icon = "\kpfs_europe_ui\west\icons\icon_ireland_ca.paa";
		displayName = "$STR_KPFS_FACTION_IRELAND";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_Luxemburg
	{
		icon = "\kpfs_europe_ui\west\icons\icon_Luxemburg_ca.paa";
		displayName = "$STR_KPFS_FACTION_LUXEMBURG";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_Netherlands
	{
		icon = "\kpfs_europe_ui\west\icons\icon_netherlands_ca.paa";
		displayName = "$STR_KPFS_FACTION_NETHERLANDS";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_Norway
	{
		icon = "\kpfs_europe_ui\west\icons\icon_norway_ca.paa";
		displayName = "$STR_KPFS_FACTION_NORWAY";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_Portugal
	{
		icon = "\kpfs_europe_ui\west\icons\icon_portugal_ca.paa";
		displayName = "$STR_KPFS_FACTION_PORTUGAL";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_Spain
	{
		icon = "\kpfs_europe_ui\west\icons\icon_spain_ca.paa";
		displayName = "$STR_KPFS_FACTION_SPAIN";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_Sweden
	{
		icon = "\kpfs_europe_ui\west\icons\icon_sweden_ca.paa";
		displayName = "$STR_KPFS_FACTION_SWEDEN";
		priority = 5;
		side = 2;
	};
	class KPFS_Faction_Turkey
	{
		icon = "\kpfs_europe_ui\west\icons\icon_turkey_ca.paa";
		displayName = "$STR_KPFS_FACTION_TURKEY";
		priority = 5;
		side = 1;
	};
	class KPFS_Faction_UK
	{
		icon = "\kpfs_europe_ui\west\icons\icon_uk_ca.paa";
		displayName = "$STR_KPFS_FACTION_UK";
		priority = 5;
		side = 1;
	};
};
class CfgVehicles
{
	class KPFS_FlagCarrierEU;
	class KPFS_Flag_Belgium: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_BELGIUM";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_belgium_co.paa""";
		};
	};
	class KPFS_Flag_denmark: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_DENMARK";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_denmark_co.paa""";
		};
	};
	class KPFS_Flag_Finland: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_FINLAND";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_finland_co.paa""";
		};
	};
	class KPFS_Flag_France: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_FRANCE";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_france_co.paa""";
		};
	};
	class CK_Flag_Ffl: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "Drapeau forces francaises libres";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_ffl_co.paa""";
		};
	};
	class CK_Flag_Wmacht: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "Drapeau de la Wehrmacht";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_wmacht_co.paa""";
		};
	};
	class KPFS_Flag_Greece: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_GREECE";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_greece_co.paa""";
		};
	};
	class KPFS_Flag_Italy: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_ITALY";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_italy_co.paa""";
		};
	};
	class KPFS_Flag_Ireland: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_IRELAND";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_ireland_co.paa""";
		};
	};
	class KPFS_Flag_Luxemburg: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_LUXEMBURG";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_luxemburg_co.paa""";
		};
	};
	class KPFS_Flag_Netherlands: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_NETHERLANDS";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_netherlands_co.paa""";
		};
	};
	class KPFS_Flag_Norway: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_NORWAY";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_norway_co.paa""";
		};
	};
	class KPFS_Flag_portugal: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_PORTUGAL";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_portugal_co.paa""";
		};
	};
	class KPFS_Flag_Spain: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_SPAIN";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_spain_co.paa""";
		};
	};
	class KPFS_Flag_Sweden: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_SWEDEN";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_sweden_co.paa""";
		};
	};
	class KPFS_Flag_Turkey: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_TURKEY";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_turkey_co.paa""";
		};
	};
	class KPFS_Flag_EG: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_EG";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_eg_co.paa""";
		};
	};
	class KPFS_Flag_EU: KPFS_FlagCarrierEU
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_KPFS_FLAG_EU";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\kpfs_europe_ui\west\flag_eu_co.paa""";
		};
	};
};
