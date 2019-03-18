////////////////////////////////////////////////////////////////////
//DeRap: kpfs_europe_ui\config.bin
//Produced from mikero's Dos Tools Dll version 6.88
//'now' is Sun Sep 16 17:48:16 2018 : 'file' last modified on Fri Mar 16 00:49:58 2018
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class KPFS_EUROPE_UI
	{
		units[] = {"KPFS_FlagCarrierEU"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Data_F"};
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class KPFS_FlagCarrierEU: FlagCarrier
	{
		icon = "\kpfs_europe_ui\data\i_flag_ca.paa";
	};
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
};
