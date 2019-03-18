#define _ARMA_

class CfgPatches
{
	class ck_m_m16_p
	{
		author = "Ohliger";
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","SMA_Weapons"};
		version = "0.1.1";
	};
};

class cfgRecoils
{
	class Default;
	class ck_recoil_default: Default
	{
		muzzleOuter[]	= { 0.3,	1.0,	0.3,	0.2 };
		muzzleInner[]	= { 0,		0,		0.1,	0.1	};
		kickBack[]		= { 0.03,	0.06 };
		permanent		= 0.1;
		temporary		= 0.01;
	};
	class ck_m_m16_recoil: ck_recoil_default
	{
		muzzleOuter[]	= { 0.3,	1.0,	0.4,	0.3 };
		kickBack[]		= { 0.02,	0.04 };
		temporary		= 0.01;
	};
};

class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class ck_m_m16_bullet: BulletBase
	{
		hit = 15;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_65_caseless";
		caliber = 0.9;
		deflecting = 45;
		model = "ck\ck_m\ck_m_weapons\ck_m_m16\ck_m_m16_bullet.p3d";
		visibleFire = 5;
		audibleFire = 9;
		cost = 100;
		typicalSpeed = 975;
		airFriction = -0.0018;
	};
};

class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class ck_m_m16_magazine: CA_Magazine
	{
		scope = 2;
		author = "Ohliger";
		displayName = "STANAG 5.56 30cps";
		displayNameShort = "5.56 30cps";
		descriptionShort = "Caliber: 5.56x45mm NATO<br/>Rounds: 30<br/>Used in: M4, M16, M27, M249";
		picture = "ck\ck_m\ck_m_weapons\ck_m_m16\data\ui\ck_m_m16_magazine_ico_ca.paa";
		model = "ck\ck_m\ck_m_weapons\ck_m_m16\ck_m_m16_magazine.p3d";
		ammo = "ck_m_m16_bullet";
		count = 30;
		initSpeed = 975;
		type = 16;
		lastRoundsTracer = 4;
	};
	class ck_m_m16_tracers_magazine: ck_m_m16_magazine
	{
		author = "Ohliger";
		displayName = "STANAG 5.56 30cps traçantes";
		displayNameShort = "5.56 30cps traçantes";
		tracersEvery = 1;
	};
};

class Mode_Burst;
class Mode_SemiAuto;
class Mode_FullAuto;
class WeaponSlotsInfo;
class ItemInfo;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class GunParticles;


class cfgWeapons
{
	class Default;
	class ItemCore;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
	};
	class mk20_base_F: Rifle_Base_F{};
	class SMA_AssaultBase: mk20_base_f
	{
		class WeaponSlotsInfo;
	};
	class SMA_556_RIFLEBASE: SMA_AssaultBase
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
			class MuzzleSlot;
		};
	};
	class ck_m_m16_base_w: SMA_556_RIFLEBASE
	{
		scope = 1;
		author = "Ohliger";
		displayName = "M16";
		dlc = "ck_core";
		descriptionShort = "Fusil d'assaut M16 américain";
		model = "ck\ck_m\ck_m_weapons\ck_m_m16\ck_m_m16.p3d";
		modes[] = {"Single"};
		picture = "ck\ck_m\ck_m_weapons\ck_m_m16\data\ui\ck_m_m16_ico_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		muzzles[] = {"this"};
		handAnim[] = {"OFP2_ManSkeleton","ck\ck_m\ck_m_weapons\ck_m_m16\anims\ck_m_m16_hand_anim.rtm"};
		reloadaction = "GestureReloadSPAR_01";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 74.5;
			class PointerSlot: PointerSlot
			{
				compatibleItems[] += {"SMA_ANPEQ15_TOP_TAN","SMA_ANPEQ15_TOP_BLK","SMA_SFPEQ_HKTOP_TAN","SMA_SFPEQ_HKTOP_TAN_LIGHT","SMA_SFPEQ_HKTOP_BLK","SMA_SFPEQ_HKTOP_BLK_LIGHT","SMA_RAILGUARD_OD_HK","SMA_RAILGUARD_TAN_HK","SMA_RAILGUARD_BLK_HK"};
			};
			/*
			class MuzzleSlot: MuzzleSlot
			{
				iconPicture = "";
				iconPinpoint = "Center";
				iconPosition[] = {0,0};
				iconScale = 0;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] += {"sma_gemtech_one_blk","sma_gemtech_one_des","sma_gemtech_one_wdl","SMA_Silencer_556","SMA_Silencer_556_Bronze","SMA_Silencer_556_Silver","SMA_FLASHHIDER1","SMA_FLASHHIDER2","SMA_supp2btan_556","SMA_supp1tan_556","SMA_supp1b_556","SMA_supp2b_556","SMA_supp1BB_556","SMA_supp1BOD_556","SMA_supp1BT_556","SMA_supp1Bwht_556","SMA_supp1TB_556","SMA_supp1TOD_556","SMA_supp1TT_556","SMA_supp1TW_556","SMA_supp2BOD_556","SMA_supp2BT_556","SMA_supp2BW_556","SMA_supp2T_556","SMA_supp2TB_556","SMA_supp2TOD_556","SMA_supp2TWH_556","SMA_supp2smaB_556","SMA_supp2smaT_556","SMA_rotex_blk","SMA_rotex_tan","SMA_rotex_gry"};
			};
			*/
		};
		drysound[] = {"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_dry_sound.wss",1.5,1,10};
		reloadmagazinesound[] = {"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_reload_sound.ogg",1,1,35};
		changeFiremodeSound[] = {"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_fireselector_sound.ogg",0.251189,1,20};
		magazines[] = {"ck_m_m16_magazine","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1_Tracer","SMA_30Rnd_556x45_M855A1_IR","SMA_30Rnd_556x45_Mk318","SMA_30Rnd_556x45_Mk318_Tracer","SMA_30Rnd_556x45_Mk318_IR","SMA_30Rnd_556x45_Mk262","SMA_30Rnd_556x45_Mk262_Tracer","SMA_30Rnd_556x45_Mk262_IR"};
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = -1;
		recoil = "recoil_car";
		// recoil = "ck_m_m16_recoil";
		recoilProne = "assaultRifleBase";
		selectionFireAnim = "muzzleFlash";
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		cameraDir = "eye_look";
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600"};
		discreteDistanceInitIndex = 0;
		class GunParticles: GunParticles
		{
			class MuzzelEffect
			{
				directionname = "Konec hlavne";
				effectname = "RifleAssaultCloud";
				positionname = "Usti hlavne";
			};
			class EjectionEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			class StandardSound
			{
				soundSetShot[] = {"ck_m_m16_shot_soundset","TRG20_Tail_SoundSet","TRG20_InteriorTail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"ck_m_m16_sd_shot_soundset","TRG20_silencerTail_SoundSet","TRG20_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.06153846;
			dispersion = 0.0015;
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 100;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			class StandardSound
			{
				soundSetShot[] = {"ck_m_m16_shot_soundset","TRG20_Tail_SoundSet","TRG20_InteriorTail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"ck_m_m16_sd_shot_soundset","TRG20_silencerTail_SoundSet","TRG20_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.06153846;
			dispersion = 0.0015;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.4;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 100;
		};
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			class StandardSound
			{
				soundSetShot[] = {"ck_m_m16_shot_soundset","TRG20_Tail_SoundSet","TRG20_InteriorTail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"ck_m_m16_sd_shot_soundset","TRG20_silencerTail_SoundSet","TRG20_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.06153846;
			dispersion = 0.0015;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.4;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 100;
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss",0.1,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss",0.01,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss",0.01,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss",0.01,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss",0.1,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss",0.177828,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss",0.177828,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss",0.1,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss",0.1,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss",0.1,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss",0.1,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss",0.01,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Library
		{
			libTextDesc = "Fusil M16 utilisé par les forces spéciales du monde entier et les forces armées régulières américaines";
		};
	};

	class ck_m_m16_a3_w: ck_m_m16_base_w
	{
		scope = 2;
		author = "Ohliger";
		displayName = "M16A3";
		descriptionShort = "Fusil d'assaut M16A3 américain";
		model = "ck\ck_m\ck_m_weapons\ck_m_m16\ck_m_m16.p3d";
		modes[] = {"Full","Single"};
	};

	class ck_m_m16_a4_w: ck_m_m16_base_w
	{
		scope = 2;
		author = "Ohliger";
		displayName = "M16A4";
		descriptionShort = "Fusil d'assaut M16A4 américain";
		model = "ck\ck_m\ck_m_weapons\ck_m_m16\ck_m_m16.p3d";
		modes[] = {"Burst","Single"};
	};
};

class CfgSoundShaders
{
	class ck_m_m16_sd_shot_soundshader
	{
		range = 150;
		rangeCurve = "closeShotCurve";
		samples[] = {{"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_sd_shot_s1_sound.wss",0.7},{"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_sd_shot_s2_sound.wss",0.5},{"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_sd_shot_s3_sound.wss",0.3}};
		volume = 0.8;
	};
	class ck_m_m16_closeshot_soundshader
	{
		range = 50;
		rangeCurve = "closeShotCurve";
		samples[] = {{"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_shot_s1_sound.wss",0.7},{"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_shot_s2_sound.wss",0.5},{"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_shot_s3_sound.wss",0.3}};
		volume = 1.1;
	};
	class ck_m_m16_midshot_soundshader
	{
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_midShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_midShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_midShot_03",1}};
		volume = 0.794328;
	};
	class ck_m_m16_distshot_soundshader
	{
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_03",1}};
		volume = 1;
	};
	class ck_m_m16_closureshot_soundshader
	{
		range = 50;
		rangeCurve = "closeShotCurve";
		samples[] = {{"ck\ck_m\ck_m_weapons\ck_m_m16\sounds\ck_m_m16_click_sound.wss",1}};
		volume = 0.5;
	};
};

class CfgSoundSets
{
	class ck_m_m16_shot_soundset
	{
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		soundShaders[] = {"ck_m_m16_closureshot_soundshader","ck_m_m16_closeshot_soundshader","ck_m_m16_midshot_soundshader","ck_m_m16_distshot_soundshader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 1.6;
	};
	class ck_m_m16_sd_shot_soundset
	{
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		soundShaders[] = {"ck_m_m16_sd_shot_soundshader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 1.6;
	};
};

/*
class CfgGesturesMale
{
	class default;
	class States
	{
		class ck_m_m16_reload_g: default
		{
			file = "ck\ck_m\ck_m_weapons\ck_m_m16\anims\ck_m_m16_reload.rtm";
			speed = 0.18404908;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.03125,0,0.831,0,0.887,1};
		};
	};
};

class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		ck_m_m16_reload_g[] = {"ck_m_m16_reload_g","Gesture"};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			ck_m_m16_reload_g[] = {"ck_m_m16_reload_g","Gesture"};
		};
	};
};
*/