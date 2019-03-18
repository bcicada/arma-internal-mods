[_this select 0] call
{
	params["_logic"];
	private _center = position _logic;

	private _dialogResult =
	[
		"Activation/Désactivation réponse à un appel d'aide",
		[
			["Activer ou désactiver", ["Activer", "Désactiver"], 0],
			["Rayon d'action","","100"]
		]
	] call Ares_fnc_ShowChooseDialog;

	if (_dialogResult isEqualTo [] || isNil "_dialogResult") exitWith {};

	private _valueToAssign = nil;
	
	switch (_dialogResult select 0) do
	{
		case 0:
		{
			_valueToAssign = false;
		};
		case 1:
		{
			_valueToAssign = true;
		};
	};
	
	if (isNil "_valueToAssign") exitWith {};
	private _radius = parseNumber (_dialogResult select 1);

	[_center, _radius, "VCM_NORESCUE", _valueToAssign] call ck_fnc_setValueToGroups;
};