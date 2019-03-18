/* 
* Author: Ohliger - Commando Kieffer
* Description: Adds an action then removes it once the action is triggered
* 
* Passed arguments:
* 0: The object which the action is assigned to <OBJECT>
* 1: The action name which is displayed in the action menu <STRING>
* 2: Script executed when the action is triggered <CODE>
*
* Returned value:
* None
*
* Examples:
* [this, "Alerter d'une attaque", { hint "Une attaque est en approche"; }] call ck_fnc_addAndRemoveAction;
* [this, "Casser l'objet", { this setDamage 1; }] call ck_fnc_addAndRemoveAction;
*
*/

params ["_obj","_actionText","_action"];

if (isNil "_obj") exitWith{};
if (isNil "_actionText" || typeName _actionText != "STRING") then
{
	_actionText = "";
};
if (isNil "_action" || typeName _action != "CODE") then
{
	_action = {};
};

_obj setVariable ["action", _action];

_obj addAction
[
	_actionText,
	{
		_actionFunction = [] call ((_this select 0) getVariable "action");
		(_this select 0) removeAction (_this select 2);
		(_this select 0) setVariable ["action", nil];
	}
];