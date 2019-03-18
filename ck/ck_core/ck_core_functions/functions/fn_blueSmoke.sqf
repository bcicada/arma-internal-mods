/* 
* Authors: Le Bris & Ohliger - Commando Kieffer
* Description: As soon as a player (that is kind of B_officer_F) throws a smoke (that is kind of SmokeShellBlue), an arsenal is dropped from the air
* 
* Passed arguments:
* None
*
* Returned value:
* None
*
*/

player addEventHandler ["Fired",
{
    if (((_this select 4) isEqualTo "SmokeShellBlue") && (player isKindOf "B_officer_F")) then
    {
        _parac = "B_Parachute_02_F";
        private ["_grenadeObj"];
        _grenadeObj = _this select 6;
        params ["_grenadeObj"];
        _para = createVehicle [_parac, position _grenadeObj, [], 0, 'FLY'];
        _arsenal = "B_supplyCrate_F" createVehicle position _grenadeObj;
        _para setPos [ getPos _para select 0, getPos _para select 1, 40];
        _smoke = "SmokeShellBlue" createVehicle position _arsenal;
        [_arsenal, "ace"] call ck_fnc_initArsenal;
        [_arsenal, "bis"] call ck_fnc_initArsenal;
        _smoke attachTo [_para, [0, 0, 0] ];
        _arsenal attachTo [_para, [0, 0, 1] ];
    }
}];