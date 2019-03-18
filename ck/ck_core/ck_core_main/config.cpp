#define _ARMA_

#define EAST 0
#define WEST 1
#define INDEP 2
#define CIV 3
#define EMPTY 4

#define true 1
#define false 0

#define times_2(a) a,a
#define times_3(a) a,a,a
#define times_5(a) a,a,a,a,a
#define times_8(a) a,a,a,a,a,a,a,a
#define times_10(a) a,a,a,a,a,a,a,a,a,a

#define QUOTE(VAR) #VAR

__EXEC(ck_root = "\ck\ck_core\ck_core_main")
__EXEC(ck_defines = "\ck\ck_core\ck_core_main\defines.hpp")
__EXEC(ck_devise = "Unis et Imprenables")
__EXEC(ck_logo_white_large = "\ck\ck_core\ck_core_main\data\ck_logo_2048_ca")
__EXEC(ck_logo_white_middle = "\ck\ck_core\ck_core_main\data\ck_logo_1024_ca")
__EXEC(ck_logo_white_small = "\ck\ck_core\ck_core_main\data\ck_logo_512_ca")
__EXEC(ck_logo_white_tiny = "\ck\ck_core\ck_core_main\data\ck_logo_32_ca")

class CfgPatches
{
	class ck_core_main
	{
		author = "Ohliger";
		name = "Commando Kieffer - Configuration principale";
		url = "https://commandokieffer.com";
		authorUrl = "https://commandokieffer.com";
		version = "2.29.42";
		requiredVersion = 1.8;
		requiredAddons[] =
		{
			"A3_Ui_F",
			"A3_Map_Altis",
			"A3_Map_Stratis",
			"A3_Map_Stratis_Scenes",
			"A3_Map_Altis_Scenes",
			"A3_Map_Tanoabuka",
			"A3_Ui_F_Orange",
			"A3_Ui_F_Tacops",
		//	"A3_Ui_F_Tank",
			"A3_Data_F",
		//	"A3_Map_Tanoa_Scenes_F",
			"A3_Characters_F",
			"task_force_radio"
		};
	};
};

class CfgMods
{
	class Mod_Base;
	class Curator: Mod_Base{};
	class ck_core: Curator
	{
		dir = "ck";
		artwork = "\ck\ck_core\ck_core_main\data\ck_artwork.jpg";
		picture = "\ck\ck_core\ck_core_main\data\ck_logo_2048_ca.paa";
		logo = "\ck\ck_core\ck_core_main\data\ck_logo_512_ca.paa";
		logoSmall = "\ck\ck_core\ck_core_main\data\ck_logo_32_ca.paa";
		logoOver = "\ck\ck_core\ck_core_main\data\ck_logo_512_ca.paa";
		logoTitle = "\ck\ck_core\ck_core_main\data\ck_logo_2048_1024_ca.paa"; // page de l'addon
		tooltipOwned = "Commando Kieffer";
		name = "Commando Kieffer";
		nameShort = "CK";
		description = "Suite d'addons créés par le commando Kieffer et la communauté Arma";
		actionName = "Site";
		action = "https://commandokieffer.com";
		hideName = false;
		hidePicture = false;
		dlcColor[] = {0.00, 0.00, 0.00, 0.89};
		overview = "Garde à vous soldat ! Rejoignez le combat dès maintenant grâce à une suite complète et personnalisée d'addons vous plongeant soit dans une guerre moderne, soit à l'époque de la seconde guerre mondiale.";
		fieldManualTopicAndHint[] = {"ck_core","ck_core_main","ck_core_description"};
		// video - 1024x1024
		class Multiplayer
		{
			class ck_introduction_01
			{
				displayName = "Présentation partie 1";
				description = "Le commando Kieffer est une team à tendance militaire prônant des valeurs comme, le respect, la camaraderie, la convivialité , la discipline de groupe, le plaisir de jouer et de partager ensemble.La team CK existe depuis 12 ans et est reconnue pour être une plateforme incontournable d'échange,d'expérience et de jeux, unis dans une chaine de commandement, se voulant au plus proche de la réalité ( T.R.)";
				overviewPicture = "\ck\ck_core\ck_core_main\data\mp_intro_01.paa";
			};
			class ck_introduction_02
			{
				displayName = "Présentation partie 2";
				description = "Chacun des membres accepté par la team porte le nom d'un des 177 commandos Français qui ont débarqué le 6 juin 1944 à Ouistreham, Normandie, sous les ordres du capitaine de corvette Philippe Kieffer.<br>Nous rendons ainsi hommage à ces valeureux héros qui ont aidé et péri pour la libération de la France, tout comme celui dont vous aurez peut être l'honneur de porter le nom.";
				overviewPicture = "\ck\ck_core\ck_core_main\data\mp_intro_02.paa";
			};
			class ck_motto
			{
				displayName = "Notre devise";
				description = "Unis et Imprenables";
				overviewPicture = "\ck\ck_core\ck_core_main\data\mp_motto.paa";
			};
		};
		class Features
		{
			class ck_mods
			{
				displayName = "Les mods";
				description = "Nous utilisons une multitude d'addons créés par le commando, ainsi que la communauté Arma.";
				overviewPicture = "\ck\ck_core\ck_core_main\data\ck_logo_2048_1024_ca.paa";
			};
		};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class ck_core
		{
			list[] =
			{
				"cba_settings_userconfig",
				"ck_core_menu",
				"ck_core_medias",
				"ck_core_functions",
				"ck_core_wiper"
			};
		};
	};
};

class CfgHints
{
	class ck_core
	{
		displayName = "Commando Kieffer";
		class ck_core_main
		{
			displayName = "Commando Kieffer";
			displayNameShort = "";
			description = "test de la section principale";
			image = "\ck\ck_core\ck_core_main\data\ck_logo_1024_ca";
			arguments[] = {};
		};
		class ck_core_description
		{
			displayName = "Description";
			displayNameShort = "";
			description = "test de la description";
			image = "\ck\ck_core\ck_core_main\data\ck_logo_1024_ca";
			arguments[] = {};
		};
	};
};

class RscPicture;
class RscStandardDisplay;
class RscControlsGroupNoScrollbars;
class CfgMainMenuSpotlight
{
	delete ApexProtocol;
	delete Bootcamp;
	delete EastWind;
	class Orange_Campaign
	{
		condition = "(false)";
	};
	delete Orange_CampaignGerman;
	delete Orange_Showcase_IDAP;
	delete Orange_Showcase_LoW;
	class Tacops_Campaign_01
	{
		condition = "(false)";
	};
	delete Tacops_Campaign_02;
	delete Tacops_Campaign_03;
};
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars
{
	class Controls
	{
		class TextBackground: RscPicture
		{
			text = "";
			colorText[] = {0,0,0,0};
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	delete Spotlight;
	class controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
	};
};

class CfgMPGameTypes
{
	class CK
	{
		name = "Commando Kieffer";
		shortcut = "Partie CK";
		id = 177;
		picture = "\ck\ck_core\ck_core_main\data\ck_logo_512_ca.paa";
		description = "Partie multijoueurs à tendance militaire du commando Kieffer";
	};
};

class CfgCredits
{
	class CreditsMovie
	{
		item2[] = {{"Etat Major"},{"Bolloré", "Massin", "Labas", "Ohliger", "Guillou", "Le Rigoleur", "Gadou"}};
		item55[] = {{"Meilleurs développeurs"},{"Edouard 'Ohliger' M","Aurélien 'Guillou' G"}};
	};
};

class CfgRanks
{
	class 0
	{
		rank = "Matelot";
		displayName = "Matelot";
		displayNameShort = "Mtl";
		texture = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
	};
	class 1
	{
		rank = "Quartier Maitre";
		displayName = "Quartier Maitre";
		displayNameShort = "Qm";
		texture = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
	};
	class 2
	{
		rank = "Second Maitre";
		displayName = "Second Maitre";
		displayNameShort = "Sm";
		texture = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
	};
	class 3
	{
		rank = "Maitre";
		displayName = "Maitre";
		displayNameShort = "M";
		texture = "\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa";
	};
	class 4
	{
		rank = "Major";
		displayName = "Major";
		displayNameShort = "Maj";
		texture = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
	};
	class 5
	{
		rank = "Lieutenant";
		displayName = "Enseigne de Vaisseau";
		displayNameShort = "Ev";
		texture = "\A3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa";
	};
	class 6
	{
		rank = "Capitaine";
		displayName = "Lieutenant de Vaisseau";
		displayNameShort = "Lv";
		texture = "\A3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa";
	};
	class 7
	{
		rank = "Commandant";
		displayName = "Capitaine de Corvette";
		displayNameShort = "Cpt.C";
		texture = "\A3\Ui_f\data\GUI\Cfg\Ranks\general_gs.paa";
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class ck_core_faction_ck
	{
		displayName = "Commando Kieffer";
		priority = 1;
		side = WEST;
	};
	class ck_core_faction_vcomModules: NO_CATEGORY
	{
		displayName = "[CK] Modules Vcom";
	};
};

class CfgEditorCategories
{
	class ck_core_editorcat_ck_tools
	{
		displayName = "Outils du commando Kieffer";
	};
};

class CfgVehicleClasses
{
	class ck_core_vehClass_cmd_wheeled
	{
		displayName = "Voitures de commandement";
	};
	class ck_core_vehClass_wipers
	{
		displayName = "Nettoyeurs";
	};
};

class CfgEditorSubcategories
{
	class ck_core_editorSubCat_base
	{
		displayName = "CK Cat Base";
		side = WEST;
	};
	class ck_core_editorSubCat_cmd_wheeled: ck_core_editorSubCat_base
	{
		displayName = "Voitures de commandement";
	};
	class ck_core_editorSubCat_choppers_transport: ck_core_editorSubCat_base
	{
		displayName = "Hélicoptères de transport";
	};
	class ck_core_editorSubCat_choppers_combat: ck_core_editorSubCat_base
	{
		displayName = "Hélicoptères de combat";
	};
	class ck_core_editorSubCat_choppers_cargo: ck_core_editorSubCat_base
	{
		displayName = "Hélicoptères cargo";
	};
	class ck_core_factions_editorsubcat_wiper: ck_core_editorSubCat_base
	{
		displayName = "Nettoyeurs";
	};
};

class CfgSounds
{
	sounds[] = {"blanche_hermine"};
	class blanche_hermine
	{
		name = "Blanche Hermine";
		sound[] = {"\ck\ck_core\ck_core_main\sounds\blanche_hermine.ogg", 1, 1};
		titles[] = {};
	};
};