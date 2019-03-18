/* 
* Authors: Le Bris & Ohliger - Commando Kieffer
* Description: Cleans up every objects lying on the ground in a given radius around a given object in an interval of a given duration
* 
* Passed arguments:
* 0: Center <OBJECT>
* 1: Radius <Int>
* 2: Interval in seconds <Int>
*
* Returned value:
* None
*
* Example:
* [(_this select 0), 14000, 600] spawn ck_fnc_wipe
* [player, 500, 10] spawn ck_fnc_wipe
*
* Hint:
* Make sure to use spawn (instead of call)
 */

params ["_center", "_radius", "_interval"];
"Grand nettoyage" call BIS_fnc_log;

while { true } do {
	hint "Je vais tout nettoyer";
	sleep 3;
	hint "";
	sleep 57;
	{ deleteVehicle _x; } forEach nearestObjects [getPos _center,["WeaponHolder","GroundWeaponHolder"],_radius];
	sleep _interval;
};