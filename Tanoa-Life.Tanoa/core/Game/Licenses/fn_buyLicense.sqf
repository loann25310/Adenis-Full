/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_license", "_price"];
_license = [_this, 3, "",[""]] call BIS_fnc_param;

if (_license isEqualTo "") exitWith {
	["Aucune licence précisée."] call AdenisClient_fnc_error;
};

if (!isClass(missionConfigFile >> "ADENIS_LICENSES" >> _license >> "factions" >> str(playerSide))) exitWith {
	["Votre faction n'est pas autorisé à acheter cette licence"] call AdenisClient_fnc_error;
};

_price = getNumber(missionConfigFile >> "ADENIS_LICENSES" >> _license >> "factions" >> str(playerSide) >> "price");
if (_price isEqualTo 0) exitWith {
	[format["Impossible de déterminer le prix de la license : %1", [_license] call AdenisClient_fnc_licenseGetName]] call AdenisClient_fnc_error;
};

if ([_license] call AdenisClient_fnc_hasLicense) exitWith {
	[format["Vous possédez déjà la licence : %1", [_license] call AdenisClient_fnc_licenseGetName]] call AdenisClient_fnc_error;
};

if (g_cash < _price) exitWith
{
	[
		format
		[
			"Vous n'avez pas <t color='#8cff9b'>%1</t>$<br/>" +
			"Manquant: <t color='#8cff9b'>%2</t>$",
			[_price] call AdenisClient_fnc_numberText,
			[_price - g_cash] call AdenisClient_fnc_numberText
		]
	] call AdenisClient_fnc_error;
};

[false, _price] call AdenisClient_fnc_handleCash;
missionNamespace setVariable [format["license_%1", _license], true];

[
	format
	[
		"Vous avez acheté <t color='#FE9A2E'>%1</t>.<br/>" +
		"Prix: <t color='#8cff9b'>%2</t>$",
		[_license] call AdenisClient_fnc_licenseGetName,
		[_price] call AdenisClient_fnc_numberText
	], "buy"
] call AdenisClient_fnc_info;
