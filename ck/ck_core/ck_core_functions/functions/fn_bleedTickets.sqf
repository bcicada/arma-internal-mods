if (!isServer) exitWith {};

params ["_mod","_alliesTicketsAmount","_enemiesTicketsAmount"];

if (!(_mod isEqualTo "modern") || !(_mod isEqualTo "wwii")) exitWith {};

switch (_mod) do {
	case "modern": {
		[west, _alliesTicketsAmount] call BIS_fnc_respawnTickets;
		[east, _enemiesTicketsAmount] call BIS_fnc_respawnTickets;
		h = [] spawn {
			waitUntil{ !isNil "bis_fnc_bleedTickets_loop" };
			[[west,east], 0.5, 5, 1] call BIS_fnc_bleedTickets;
		};
	};
	case "wwii": {
		[resistance, _alliesTicketsAmount] call BIS_fnc_respawnTickets;
		[west, _enemiesTicketsAmount] call BIS_fnc_respawnTickets;
		h = [] spawn {
			waitUntil{ !isNil "bis_fnc_bleedTickets_loop" };
			[[resistance,west], 0.5, 5, 1] call BIS_fnc_bleedTickets;
		};
	};
	default {};
};