/**
 * Code by Loann
 */
private["_type","_display","_list_birth_day","_list_birth_month","_list_birth_year","_list_origin"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;

if(!_type) exitWith {
	createDialog "RscDisplayFauxPapiers";

	_display = findDisplay 1800;
	_list_birth_day = _display displayCtrl 759009;
	for "_i" from 1 to 31 do
	{
		_index = _list_birth_day lbAdd format["%1", _i];
		_list_birth_day lbSetValue [_index, _i];
	};
	_list_birth_day lbSetCurSel 0;

	_list_birth_month = _display displayCtrl 759008;
	for "_i" from 1 to 12 do
	{
		_index = _list_birth_month lbAdd format["%1", _i];
		_list_birth_month lbSetValue [_index, _i];
	};
	_list_birth_month lbSetCurSel 0;

	_list_birth_year = _display displayCtrl 759007;
	for "_i" from ((date select 0) - 70) to ((date select 0) - 18) do
	{
		_index = _list_birth_year lbAdd format["%1", _i];
		_list_birth_year lbSetValue [_index, _i];
	};
	_list_birth_year lbSetCurSel 0;

	_list_origin = _display displayCtrl 759011;
	lbClear _list_origin;

	{
		_index = _list_origin lbAdd getText(_x >> "name");
		_list_origin lbSetPicture [_index, getText(_x >> "flag")];
		_list_origin lbSetPictureColor [_index, [1, 1, 1, 1]];
		_list_origin lbSetData [_index, (configName _x)];
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_NATIONALITIES"));
	_list_origin lbSetCurSel 0;
};


// On valid

_firstname = ctrlText 759003;
if (_firstname isEqualTo "") exitWith {
	"Vous n'avez pas entré de prénom pour votre personnage" call AlysiaClient_fnc_error;
};

_bad = [_firstname, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzéè-à "] call AlysiaClient_fnc_TextAllowed;
if (_bad != "") exitWith {
	[format ["Vous utilisez un caractère interdit dans le prénom (%1)", _bad]] call AlysiaClient_fnc_error;
};

_lastName = ctrlText 759005;
if (_lastName isEqualTo "") exitWith {
	["Vous n'avez pas entré de nom de famille pour votre personnage"] call AlysiaClient_fnc_error;
};

_bad = [_lastName, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzéè- "] call AlysiaClient_fnc_TextAllowed;
if (_bad != "") exitWith {
	[format["Vous utilisez un caractère interdit dans le nom de famille (%1)", _bad]] call AlysiaClient_fnc_error;
};

_birth = [lbValue[759009, (lbCurSel 759009)], lbValue[759008, (lbCurSel 759008)], lbValue[759007, (lbCurSel 759007)]];

_action =
[
	format
	[
		"Êtes-vous sûr des informations entrées ?<br/><br/><t align='left'>Sexe</t><t align='right'>%5</t><br/><t align='left'>Prénom</t><t align='right'>%1</t><br/><t align='left'>Nom</t><t align='right'>%2</t><br/><t align='left'>Âge</t><t align='right'>%3</t><br/><t align='left'>Origine</t><t align='right'>%4</t>",
		_firstname,
		_lastName,
		(_birth call AlysiaClient_fnc_age),
		(lbText[759011, (lbCurSel 759011)]),
		g_sexe
	],
	"Validation",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then
{
	g_firstName = _firstname;
	g_lastName = _lastName;
	g_birth = _birth;
	g_nationality = lbData[759011, (lbCurSel 759011)];
	closeDialog 0;
	[false, "fauxpapiers", 1] call AlysiaClient_fnc_handleInv;
	player addItem "Alysia_Identity_Civ";
	g_fakeIdentity = true;
	[format ["Vous êtes désormais connu en tant que : %1 %2", g_firstName, g_lastName]] call AlysiaClient_fnc_info;
};
