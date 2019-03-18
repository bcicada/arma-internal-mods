#define _ARMA_

class CfgPatches
{
	class ck_m_musics_p
	{
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		author = "Ohliger";
		version = "1.0";
		requiredVersion = 1.0;	
	};
};

class CfgMusicClasses
{
	class ck_wwii_musics_aio
	{
		displayName = "[CK] Sons";
	};
};

class CfgMusic
{
	class airsiren
	{
		name = "Sirène";
		sound[] = {"ck\ck_m\ck_m_musics\sounds\airsiren.ogg",1,1};
		theme = "Action";
		duration = "223";
		musicClass = "ck_wwii_musics_aio";
	};
};