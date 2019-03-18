/* 
* Author: UnknownAuthor - Ohliger - Commando Kieffer
* Description: 
* 
* Passed arguments:
* 0: Duration <NUMBER>
* 1: Executed script once completed <CODE>
* 2: Alert text once completed <STRING>
*
* Returned value:
* None
*
* Examples:
* [60, { player setDamage 1; }, "C'est tout bon !"] call ck_fnc_initProgressBar;
* [15, { hint format ["La barre de progression a été complétée en %1 secondes à %2h:%3min", _this select 0, _this select 1, _this select 2] }] call ck_fnc_initProgressBar;
*
*/

params ["_duration","_onCompletion","_alert"];

if (isNil "_duration") exitWith
{
	systemChat "La durée de progression de la barre ne peut être nulle.";
};
if (isNil "_onCompletion" || typeName _onCompletion != "CODE") then
{
	_onCompletion = {};
};
if (isNil "_alert") then
{
	_alert = "";
};

with uiNamespace do
{
	ck_progressbar = findDisplay 46 ctrlCreate ["RscProgress", -1];
	ck_progressbar ctrlSetPosition [ 0.2, 0.3 ];
	ck_progressbar progressSetPosition 0;
	ck_progressbar ctrlCommit 0;
	ck_progressbartext = findDisplay 46 ctrlCreate ["RscStructuredText", -1];
	ck_progressbartext ctrlSetPosition [ 0.345, 0.29 ];
	ck_progressbartext ctrlCommit 0;
};

[
	"TIMER",
	"onEachFrame",
	{
		params[ "_start", "_end", "_alert","_onCompletion"];
		_progress = linearConversion[ _start, _end, time, 0, 1 ];
		(uiNamespace getVariable "ck_progressbar") progressSetPosition _progress;
		(uiNamespace getVariable "ck_progressbartext") ctrlSetStructuredText parseText format["%1%2", round(100 * _progress), "%"];
		if ( _progress > 1 ) then
		{
			[
				"TIMER",
				"onEachFrame"
			] call BIS_fnc_removeStackedEventHandler;
			ctrlDelete (uiNamespace getVariable "ck_progressbar");
			ctrlDelete (uiNamespace getVariable "ck_progressbartext");

			hint format ["%1", _alert];
			_onCompletionFunction = [_duration, date select 3, date select 4] call _onCompletion;
		};
	},
	[
		time,
		time + _duration,
		_alert,
		_onCompletion
	]
] call BIS_fnc_addStackedEventHandler;