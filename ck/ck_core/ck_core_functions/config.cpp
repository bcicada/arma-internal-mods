#define _ARMA_

class CfgPatches
{
	class ck_core_functions
	{
		author = "Ohliger";
		version = "1.0";
		requiredVersion = 1.8;
		requiredAddons[] = {};
		units[] = {};
	};
};

class CfgFunctions
{
	class ck
	{
		tag = "ck";
		class ck_core_functions
		{
			file = "ck\ck_core\ck_core_functions\functions";
			class blueSmoke
			{
				postinit = 1;
			};
			class wipe{};
			class initArsenal{};
			class initProgressBar{};
			class addAndRemoveAction{};
			class bleedTickets{};
		};
	};
};