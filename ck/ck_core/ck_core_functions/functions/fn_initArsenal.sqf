/* 
* Author: Ohliger - Commando Kieffer
* Description: Adds an action which opens either the ace arsenal or the bis arsenal - works with and without ace
* 
* Passed arguments:
* 0: Target <OBJECT>
* 1: Kind of arsenal (ace/bis) <String>
* 2: Text which the action will display <String>
*
* Returned value:
* None
*
* Examples:
* [this,"ace","open ace arsenal"] call ck_fnc_initArsenal
* [this,"ace"] call ck_fnc_initArsenal
* [this,"bis","open virtual arsenal"]
*/

params ["_obj","_kindOfArsenal","_text"];

if (!(_kindOfArsenal isEqualTo "ace") && !(_kindOfArsenal isEqualTo "bis")) exitWith {
	["%1 is not a correct value", _kindOfArsenal] call BIS_fnc_logFormat;
};
if (!(isClass (configFile >> "CfgPatches" >> "ace_arsenal"))) then {
	_kindOfArsenal = "bis";
};
if (isNil "_text") then {
	_text = format ["Ouvrir arsenal %1", _kindOfArsenal];
};

switch (_kindOfArsenal) do {
	case "ace": {
		_obj addAction [_text, {
			[player, player, true] call ace_arsenal_fnc_openBox;
		}];
	};
	case "bis": {
		_obj addAction [_text, {
			["Open",true] spawn BIS_fnc_arsenal;
		}];
	};
	default {};
};