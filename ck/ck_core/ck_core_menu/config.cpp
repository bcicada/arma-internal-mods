#define _ARMA_

/*
class CfgMainMenuSpotlight
{
	class ck_core_mainMenuButton
	{
		text = "";
		textIsQuote = 0;
		picture = "\ck\ck_core\ck_core_main\data\ck_logo_1024_ca.paa";
		action = "_display = ctrlparent(_this select 0); ctrlactivate ((_display) displayctrl 105); _display = findDisplay 8; _control = _display displayctrl 159; ctrlActivate _control;_titleControl = _display displayCtrl 1000;_titleControl ctrlSetText ""Serveur : Commando Kieffer - www.commandokieffer.fr"";";
		actionText = "TROUVER LE SERVEUR DU COMMANDO KIEFFER";
		condition = "(true)";
	};
};
*/

class CfgPatches
{
	class ck_core_menu
	{
		author = "Ohliger";
		url = "https:\\www.commandokieffer.com";
		authorUrl = "https:\\www.commandokieffer.com";
		version = "1.64.08";
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"A3_Map_Altis",
			"A3_Map_Stratis",
			"A3_Map_Stratis_Scenes",
			"A3_Map_Altis_Scenes",
			"A3_Map_Tanoabuka"
		};
	};
};

class CfgWorlds
{
	class CAWorld;
	class Tanoa: CAWorld
	{
		cutscenes[] = {"ck_tanoa1"};
	};
	class Altis: CAWorld
	{
		cutscenes[] = {"ck_altis1"};
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class ck_tanoa1
		{
			directory = "ck\ck_core\ck_core_menu\scenes\tanoa_intro1.Tanoa";
		};
		class ck_altis1
		{
			directory = "ck\ck_core\ck_core_menu\scenes\altis_intro1.Altis";
		};
	};
};