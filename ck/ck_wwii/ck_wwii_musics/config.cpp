#define _ARMA_

class CfgPatches
{
	class ck_wwii_musics
	{
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		author = "Ohliger & swurvin";
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
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\airsiren.ogg",1,1};
		theme = "Action";
		duration = "223";
		musicClass = "ck_wwii_musics_aio";
	};
	class bob
	{
		name = "bob";
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\bob.ogg",1,1};
		theme = "Calm";
		duration = "145";
		musicClass = "ck_wwii_musics_aio";
	};
	class churchillNever
	{
		name = "Discours Churchill";
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\churchillnever.ogg",1,1};
		theme = "Lead";
		duration = "144";
		musicClass = "ck_wwii_musics_aio";
	};
	class dunkirkatonement
	{
		name = "Musique Dunkerque";
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\dunkirkatonement.ogg",1,1};
		theme = "Calm";
		duration = "303";
		musicClass = "ck_wwii_musics_aio";
	};
	class gen2
	{
		name = "Communication radio";
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\gen2.ogg",1,1};
		theme = "Lead";
		duration = "174";
		musicClass = "ck_wwii_musics_aio";
	};
	class genwarhinterhilt
	{
		name = "Son d'ambiance 'genwarhinterhilt'";
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\genwarhinterhilt.ogg",1,1};
		theme = "Calm";
		duration = "135";
		musicClass = "ck_wwii_musics_aio";
	};
	class genwarmain
	{
		name = "Son d'ambiance 'genwarmain'";
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\genwarmain.ogg",1,1};
		theme = "Calm";
		duration = "124";
		musicClass = "ck_wwii_musics_aio";
	};
	class panzerlied
	{
		name = "Panzerlied";
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\panzerlied.ogg",1,1};
		theme = "Lead";
		duration = "147";
		musicClass = "ck_wwii_musics_aio";
	};
	class savingfrench
	{
		name = "Musique 'savingfrench'";
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\savingfrench.ogg",1,1};
		theme = "Calm";
		duration = "167";
		musicClass = "ck_wwii_musics_aio";
	};
	class ww2arty
	{
		name = "Son d'ambiance 'ww2arty'";
		sound[] = {"ck\ck_wwii\ck_wwii_musics\sounds\ww2arty.ogg",1,1};
		theme = "Action";
		duration = "481";
		musicClass = "ck_wwii_musics_aio";
	};
};