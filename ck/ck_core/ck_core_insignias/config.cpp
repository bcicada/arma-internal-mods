#define _ARMA_

#define QUOTE(VAR) #VAR
#define flag(a,b,c) class ck_core_insignias_##a: ck_core_insignias_troop_1 { displayName = QUOTE(b); class EventHandlers { init = "(_this select 0) setFlagTexture ""ck\ck_core\ck_core_insignias\data\rectangle\##c##_co.paa"""; }; };


class CfgPatches
{
	class ck_core_insignias
	{
		author = "Ohliger, Vinat, Roelandt";
		version = "1.29.4";
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_data_f"};
	};
};

class CfgVehicles
{

	/* TROOP 1*/
	class FlagCarrier;
	class ck_core_insignias_troop_1: FlagCarrier
	{
		scope = 2;
		accuracy = 1000;
		displayName = "Drapeau Troop 1";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""ck\ck_core\ck_core_insignias\data\rectangle\T1_co.paa""";
		};
	};
	
	flag(troop_1_1, Drapeau Troop 1 Bordée Wyverne, T1wyverne)
	flag(troop_1_2, Drapeau Troop 1 Bordée Phoenix, T1phoenix)

	/* TROOP 8*/
	flag(troop_8, Drapeau Troop 8, T8)
	flag(troop_8_1, Drapeau Troop 8 Bordée Drakkar, T8drakkar)
	flag(troop_8_2, Drapeau Troop 8 Bordée Léviathan, T8leviathan)

	/* TROOP 9*/
	flag(troop_9, Drapeau Troop K-Gun, T9)
	flag(troop_9_1, Drapeau Troop K-Gun Bordée X, T9X)
	flag(troop_9_2, Drapeau Troop K-Gun Bordée Y, T9Y)
	flag(troop_9_3, Drapeau Troop K-Gun Bordée mécanisée, T9meca)
	
	/* TROOP QG */
	flag(troop_2, Drapeau Troop QG, QG)
	flag(troop_2_medic, Drapeau Troop QG Bordée Médicale, QGmedic)
	flag(troop_2_medicm, Drapeau Troop QG Bordée Médicale moderne, QGmedicm)
	flag(troop_2_zeus, Drapeau Troop QG Zeus, QGzeus)
	flag(troop_2_transmission, Drapeau Troop QG Commandement, QGtransm)
	flag(troop_2_pilote, Drapeau Troop QG Pilotes, QGpilote)
	
	/* COMMANDO KIEFFER */
	flag(ck_gris, Drapeau commando Kieffer gris, CKgris)
	flag(ck_orange, Drapeau commando Kieffer orange, CKorange)
	flag(ck_violet, Drapeau commando Kieffer violet, CKviolet)
};


class CfgUnitInsignia
{

	/* TROOP 1*/
	class ck_core_insignias_troop_1_1
	{
		displayName = "Insigne Troop 1 Bordée Wyverne";
		texture = "ck\ck_core\ck_core_insignias\data\square\T1wyverne_co.paa";
		author = "Roelandt";
	};
	class ck_core_insignias_troop_1_2
	{
		displayName = "Insigne Troop 1 Bordée Phoenix";
		texture = "ck\ck_core\ck_core_insignias\data\square\T1phoenix_co.paa";
		author = "Roelandt";
	};

	/* TROOP 8*/

	class ck_core_insignias_troop_8
	{
		displayName = "Insigne Troop 8";
		texture = "ck\ck_core\ck_core_insignias\data\square\T8_co.paa";
		author = "Roelandt";
	};
	class ck_core_insignias_troop_8_1
	{
		displayName = "Insigne Troop 8 Bordée Drakkar";
		texture = "ck\ck_core\ck_core_insignias\data\square\T8drakkar_co.paa";
		author = "Roelandt";
	};
	class ck_core_insignias_troop_8_2
	{
		displayName = "Insigne Troop 8 Leviathan";
		texture = "ck\ck_core\ck_core_insignias\data\square\T8leviathan_co.paa";
		author = "Roelandt";
	};
	
	/* TROOP 9*/
	
	/* TROOP 2*/
	
	class ck_core_insignias_troop_2_medic
	{
		displayName = "Insigne troop QG médicale";
		texture = "ck\ck_core\ck_core_insignias\data\square\QGmedic_co.paa";
		author = "Vinat";
	};
	class ck_core_insignias_troop_2_medicm
	{
		displayName = "Insigne troop QG médicale moderne";
		texture = "ck\ck_core\ck_core_insignias\data\square\QGmedicm_co.paa";
		author = "Vinat";
	};
	class ck_core_insignias_troop_2_zeus
	{
		displayName = "Insigne troop QG Zeus";
		texture = "ck\ck_core\ck_core_insignias\data\square\QGzeus_co.paa";
		author = "Vinat";
	};
	class ck_core_insignias_troop_2_transmission
	{
		displayName = "Insigne troop QG Commandement";
		texture = "ck\ck_core\ck_core_insignias\data\square\QGtransm_co.paa";
		author = "Vinat";
	};
	class ck_core_insignias_troop_2_pilote
	{
		displayName = "Insigne troop QG Pilotes";
		texture = "ck\ck_core\ck_core_insignias\data\square\QGpilotes_co.paa";
		author = "Vinat";
	};
	
	/* COMMANDO KIEFFER */
	
	class ck_core_insignias_ck_gris
	{
		displayName = "Insigne commando Kieffer gris";
		texture = "ck\ck_core\ck_core_insignias\data\square\CKgris_co.paa";
		author = "Vinat";
	};
	class ck_core_insignias_ck_orange
	{
		displayName = "Insigne commando Kieffer orange";
		texture = "ck\ck_core\ck_core_insignias\data\square\CKorange_co.paa";
		author = "Vinat";
	};
	class ck_core_insignias_ck_violet
	{
		displayName = "Insigne commando Kieffer violet";
		texture = "ck\ck_core\ck_core_insignias\data\square\CKviolet_co.paa";
		author = "Vinat";
	};
};