#define _ARMA_

class cfgPatches
{
	class ck_core_modules
	{
		author = "Ohliger";
		requiredVersion = 1.8;
		version = "1.0";
		requiredAddons[] = {"ck_core_main","achilles_modules_f_achilles"};
	};
};


class cfgFunctions
{
	class ck
	{
		class ck_core_modules
		{
			tag = "ck";
			file = "ck\ck_core\ck_core_modules\modules\Vcom";
			class setValueToGroups
			{
				author = "Ohliger";
				file = "ck\ck_core\ck_core_modules\functions\fn_setValueToGroups.sqf";
				recompile = 1;
			};
			class toggleAdvancedMovements{};
			class toggleBackupCalls{};
			class toggleCallForBackup{};
			class toggleVcom{};
		};
	};
};


class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
	};
	class ck_module_base: Module_F
	{
		mapSize = 1;
		author = "Ohliger";
		vehicleClass = "Modules";
		category = "ck_core_faction_vcomModules";
		side = 7;
		scope = 1;
		scopeCurator = 1;
		displayName = "CK Module Base";
		icon = "\ck\ck_core\ck_core_main\data\ck_logo_32_ca.paa";
		picture = "\ck\ck_core\ck_core_main\data\ck_logo_2048_ca.paa";
		portrait = "\ck\ck_core\ck_core_main\data\ck_logo_2048_ca.paa";
		function = "";
		functionPriority = 1;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 1;
		dlc = "ck_core";
		class Arguments: ArgumentsBaseUnits{};
		class ModuleDescription: ModuleDescription
		{
			description = "CK Module Base";
		};
	};
	class All;
	class Thing: All{};
	class ModuleEmpty_F: Thing{};
	class ck_vcomModule_base: ck_module_base
	{
		class Arguments: Arguments
		{
			class Units: Units {};
			
			class ck_vcomModule_radius
			{
				displayName = "Rayon d'action";
				description = "Choisissez une portée";
				typeName = "NUMBER";
				defaultValue = 100;
				class values
				{
					class fifty {name = "50m";	value = 50; default = 1;};
					class one_hundred {name = "100m"; value = 100;};
					class two_hundred {name = "200m"; value = 200;};
				};
			};
		};		
	};
	class ck_vcomModule_toggleAdvancedMovements: ck_vcomModule_base
	{
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "ck_vcomModule_toggleAdvancedMovements";
		displayName = "On/off mouvements avancés";
		function = "ck_fnc_toggleAdvancedMovements";
	};
	class ck_vcomModule_toggleBackupCalls: ck_vcomModule_base
	{
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "ck_vcomModule_toggleAdvancedMovements";
		displayName = "On/off vient en aide";
		function = "ck_fnc_toggleBackupCalls";
	};
	class ck_vcomModule_toggleCallForBackup: ck_vcomModule_base
	{
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "ck_vcomModule_toggleAdvancedMovements";
		displayName = "On/off appel à l'aide";
		function = "ck_fnc_toggleCallForBackup";
	};
	class ck_vcomModule_toggleVcom: ck_vcomModule_base
	{
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "ck_vcomModule_toggleAdvancedMovements";
		displayName = "On/off Vcom";
		function = "ck_fnc_toggleVcom";
	};
};