#define _ARMA_

class cfgPatches
{
	class ck_m_ffaa_frenchcamos_p
	{
		author = "Ohliger, Vinat, FFAA";
		version = "1.0";
		requiredVersion = 1.8;
		requiredAddons[] =
		{
			"A3_Air_F",
			"A3_Air_F_Heli",
			"ffaa_et_cougar",
			"ffaa_et_tigre",
			"ffaa_nh90"
		};
		units[] = {
			"ck_m_nh90_armed_olive_v",
			"ck_m_nh90_armed_v",
			"ck_m_nh90_transport_olive_v",
			"ck_m_nh90_transport_v",
			"ck_m_nh90_cargo_olive_v",
			"ck_m_nh90_cargo_v",
			
			"ck_m_tigre_cas_v",
			"ck_m_tigre_at_v",
			"ck_m_tigre_aa_v",
			
			"ck_m_cougar_terre_v",
			"ck_m_cougar_mer_v",
			"ck_m_cougar_air_v"
		};
	};
};

class CfgFunctions
{
	class FFAA
	{
		tag = "FFAA";
		class Vehicles
		{
			class nh90_init
			{
				file = "ck\ck_m\ck_m_ffaa_frenchcamos\functions\fn_nh90_init.sqf";
			};
		};
	};
};

class cfgVehicles
{
	/* COUGAR */

	class All{};
	class AllVehicles: All{};
	class Air: AllVehicles{};
	class Helicopter: Air{};
	class Helicopter_Base_F: Helicopter
	{
		class Eventhandlers;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;
		class HitPoints;
		class AnimationSources;
	};
	class ffaa_famet_cougar_base: Helicopter_Base_H
	{
		features = "Slingload: Slingloads up to 10,000 kg";
		slingLoadMaxCargoMass = 10000;
		class AnimationSources: AnimationSources
		{
			class HideExtras
			{
				initPhase = 1;
			};
		};
		class RenderTargets
		{
			class SlingLoadCam
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "slingLoad_cam_pos";
					pointDirection = "slingLoad_cam_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",1,1};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1,1,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1,1};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1,1,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1,1};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1,1,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1,1};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1,1,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		class Sounds
		{
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.5;
					minFov = 0.5;
					maxFov = 0.5;
					directionStabilized = 1;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics = 0;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			minElev = 80;
			maxElev = 80;
			initElev = 80;
			maxXRotSpeed = 0.5;
			maxYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 0;
		};
		memoryPointDriverOptics = "slingLoad_cam";
	};
	class ffaa_famet_cougar: ffaa_famet_cougar_base{};
	class ck_cougar_terre_v: ffaa_famet_cougar
	{
		scope = 2;
		side = 1;
		faction = "ck_core_faction_ck";
		dlc = "ck_core";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "Cougar transport terre";
		author = "FFAA - Ohliger - Vinat";
		editorSubCategory = "ck_core_editorSubCat_choppers_transport";
		hiddenSelections[] = {"camo","Random_1","Random_2"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\cougar_terre_co.paa","",""};
		forceIngarage = 1;
		editorPreview = "ck\ck_m\ck_m_ffaa_frenchcamos\data\preview\cougar.jpg";
	};
	class ck_m_cougar_mer_v: ffaa_famet_cougar
	{
		scope = 2;
		side = 1;
		faction = "ck_core_faction_ck";
		dlc = "ck_core";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "Cougar transport marine";
		author = "FFAA - Ohliger - Vinat";
		editorSubCategory = "ck_core_editorSubCat_choppers_transport";
		hiddenSelections[] = {"camo","Random_1","Random_2"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\cougar_mer_co.paa","",""};
		forceIngarage = 1;
		editorPreview = "ck\ck_m\ck_m_ffaa_frenchcamos\data\preview\cougar.jpg";
	};
	class ck_m_cougar_air_v: ffaa_famet_cougar
	{
		scope = 2;
		side = 1;
		author = "FFAA - Ohliger - Vinat";
		faction = "ck_core_faction_ck";
		dlc = "ck_core";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "Cougar transport air";
		editorSubCategory = "ck_core_editorSubCat_choppers_transport";
		hiddenSelections[] = {"camo","Random_1","Random_2"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\cougar_air_co.paa","",""};
		forceIngarage = 1;
		editorPreview = "ck\ck_m\ck_m_ffaa_frenchcamos\data\preview\cougar.jpg";
	};
	
	
	
	/* NH90 */	
	
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		class RotorLibHelicopterProperties;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
			class HitGlass1;
		};
		class Eventhandlers;
		class Components;
	};
	class ffaa_nh90_base: Heli_Transport_02_base_F
	{
		class Eventhandlers: Eventhandlers
		{
			init = " [_this select 0] call FFAA_fnc_nh90_init;(_this select 0) animate [""HideExtras"", 1]";
		};
	};
	class ffaa_nh90_tth_armed: ffaa_nh90_base{};
	class ffaa_nh90_tth_transport: ffaa_nh90_base{};
	class ffaa_nh90_tth_cargo: ffaa_nh90_base{};
	class ffaa_nh90_nfh_transport: ffaa_nh90_base{};
	
	class ck_m_nh90_armed_olive_v: ffaa_nh90_tth_armed
	{
		author = "FFAA - Ohliger - Vinat";
		displayName = "NH90 transport armé";
		dlc = "ck_core";
		hiddenSelections[] = {"camo1","Random_1","Random_2","Random_3","Random_4","Random_5","Random_6"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\nh90_olive_co.paa","","","","","",""};
		faction = "ck_core_faction_ck";
		editorSubCategory = "ck_core_editorSubCat_choppers_transport";
	};
	class ck_m_nh90_armed_v: ffaa_nh90_tth_armed
	{
		author = "FFAA - Ohliger - Vinat";
		displayName = "NH90 Marine transport armé";
		dlc = "ck_core";
		hiddenSelections[] = {"camo1","Random_1","Random_2","Random_3","Random_4","Random_5","Random_6"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\nh90_co.paa","","","","","",""};
		faction = "ck_core_faction_ck";
		editorSubCategory = "ck_core_editorSubCat_choppers_transport";
	};
	class ck_m_nh90_transport_olive_v: ffaa_nh90_tth_transport
	{
		author = "FFAA - Ohliger - Vinat";
		displayName = "NH90 transport";
		dlc = "ck_core";
		hiddenSelections[] = {"camo1","Random_1","Random_2","Random_3","Random_4","Random_5","Random_6"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\nh90_olive_co.paa","","","","","",""};
		faction = "ck_core_faction_ck";
		editorSubCategory = "ck_core_editorSubCat_choppers_transport";
	};
	class ck_m_nh90_transport_v: ffaa_nh90_nfh_transport
	{
		author = "FFAA - Ohliger - Vinat";
		displayName = "NH90 Marine transport";
		dlc = "ck_core";
		hiddenSelections[] = {"camo1","Random_1","Random_2","Random_3","Random_4","Random_5","Random_6"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\nh90_co.paa","","","","","",""};
		faction = "ck_core_faction_ck";
		editorSubCategory = "ck_core_editorSubCat_choppers_transport";
	};
	class ck_m_nh90_cargo_olive_v: ffaa_nh90_tth_cargo
	{
		author = "FFAA - Ohliger - Vinat";
		displayName = "NH90 cargo";
		dlc = "ck_core";
		hiddenSelections[] = {"camo1","Random_1","Random_2","Random_3","Random_4","Random_5","Random_6"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\nh90_olive_co.paa","","","","","",""};
		faction = "ck_core_faction_ck";
		editorSubCategory = "ck_core_editorSubCat_choppers_cargo";
	};
	class ck_m_nh90_cargo_v: ffaa_nh90_tth_cargo
	{
		author = "FFAA - Ohliger - Vinat";
		displayName = "NH90 Marine cargo";
		dlc = "ck_core";
		hiddenSelections[] = {"camo1","Random_1","Random_2","Random_3","Random_4","Random_5","Random_6"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\nh90_co.paa","","","","","",""};
		faction = "ck_core_faction_ck";
		editorSubCategory = "ck_core_editorSubCat_choppers_cargo";
	};
	
	
	/* TIGRE */
	
	class ffaa_famet_tigre_base: Helicopter_Base_F
	{
		class EventHandlers: Eventhandlers
		{
			init = "(_this select 0) animate [""HideExtras"", 1]";
			fired = "_this call BIS_Effects_EH_Fired; _this spawn FFAA_fnc_tigre_spike;";
		};
	};
	class ffaa_famet_tigre_cas: ffaa_famet_tigre_base
	{
		class EventHandlers: Eventhandlers
		{
			init = "(_this select 0) animate [""HideExtras"", 1]";
		};
	};
	class ffaa_famet_tigre_at: ffaa_famet_tigre_base
	{
		class EventHandlers: Eventhandlers
		{
			init = "(_this select 0) animate [""HideExtras"", 1]";
		};
	};
	class ffaa_famet_tigre_aa: ffaa_famet_tigre_base
	{
		class EventHandlers: Eventhandlers
		{
			init = "(_this select 0) animate [""HideExtras"", 1]";
		};
	};
	class ck_m_tigre_cas_v: ffaa_famet_tigre_cas
	{
		scope = 2;
		side = 1;
		faction = "ck_core_faction_ck";
		dlc = "ck_core";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "Tigre CAS";
		author = "FFAA - Ohliger - Vinat";
		editorSubCategory = "ck_core_editorSubCat_choppers_combat";
		hiddenSelections[] = {"camo1","Random_1","Random_2"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\tigre_co.paa","",""};
		forceIngarage = 1;
		weapons[] = {"ffaa_tigre_sneb","CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine","ffaa_12Rnd_tigre_sneb_70","ffaa_12Rnd_tigre_sneb_70","ffaa_22Rnd_tigre_sneb_70","ffaa_22Rnd_tigre_sneb_70"};
		editorPreview = "ck\ck_m\ck_m_ffaa_frenchcamos\data\preview\tigre.jpg";
	};
	class ck_m_tigre_at_v: ffaa_famet_tigre_at
	{
		scope = 2;
		side = 1;
		faction = "ck_core_faction_ck";
		dlc = "ck_core";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "Tigre AT";
		author = "FFAA - Ohliger - Vinat";
		editorSubCategory = "ck_core_editorSubCat_choppers_combat";
		hiddenSelections[] = {"camo1","Random_1","Random_2"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\tigre_co.paa","",""};
		forceIngarage = 1;
		weapons[] = {"ffaa_tigre_sneb","CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine","ffaa_12Rnd_tigre_sneb_70","ffaa_12Rnd_tigre_sneb_70"};
		editorPreview = "ck\ck_m\ck_m_ffaa_frenchcamos\data\preview\tigre.jpg";
	};
	class ck_m_tigre_aa_v: ffaa_famet_tigre_aa
	{
		scope = 2;
		side = 1;
		faction = "ck_core_faction_ck";
		dlc = "ck_core";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "Tigre AA";
		author = "FFAA - Ohliger - Vinat";
		editorSubCategory = "ck_core_editorSubCat_choppers_combat";
		hiddenSelections[] = {"camo1","Random_1","Random_2"};
		hiddenSelectionsTextures[] = {"ck\ck_m\ck_m_ffaa_frenchcamos\data\tigre_co.paa","",""};
		forceIngarage = 1;
		editorPreview = "ck\ck_m\ck_m_ffaa_frenchcamos\data\preview\tigre.jpg";
	};
};