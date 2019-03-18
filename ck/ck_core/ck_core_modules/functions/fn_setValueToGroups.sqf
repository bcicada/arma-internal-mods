/* 
* Author: Ohliger - Commando Kieffer
* Description: set a variable to all group of typeOf "Man" in a given radius
* 
* Passed arguments:
* 0: Center <Float[3]>
* 1: Radius <Int>
* 2: Variable <String>
* 3: Value <Boolean - String - Number>
*
* Returned value:
* None
*
* Example:
* [(getPos player), 200, ck_isEny, true] call ck_fnc_setValueToGroups;
* [[100.5, 256.8, 1.194], 50, ck_isEM, false] call ck_fnc_setValueToGroups;
*
 */


params["_center","_radius","_var", "_val"];

["centre : %1 - rayon : %2 - variable : %3 - valeur : %4", _center, _radius, _var, _val] call BIS_fnc_logFormat;

private _nearMen = nearestObjects [_center, ["Man"], _radius];

{
	group _x setVariable[_var, _val]
} forEach (_nearMen);