/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_target", "_cfg", "_price", "_storePos"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};
if (_target getVariable ["trunk_in_use", false]) exitWith {
	["Vous ne pouvez pas envoyer un véhicule en fourrière lorsque son coffre est en train d'être fouillé."] call AdenisClient_fnc_error;
};
if (!((crew _target) isEqualTo [])) exitWith {
	["Vous ne pouvez pas envoyer un véhicule contenant des passagers ou un conducteur en fourrière."] call AdenisClient_fnc_error;
};
if ((speed _target) >= 1) exitWith {
	["Vous ne pouvez pas envoyer un véhicule qui se déplace en fourrière."] call AdenisClient_fnc_error;
};
if (isEngineOn _target) exitWith {
	["Vous ne pouvez pas envoyer un véhicule ayant le moteur allumé en fourrière."] call AdenisClient_fnc_error;
};

if (["Mise en fourrière", 8, _target] call AdenisClient_fnc_showProgress) then
{
	_cfg = [typeOf(_target)] call AdenisClient_fnc_fetchVehInfo;
	if ((_cfg select 22) isEqualTo 0) then
	{
		_price = _cfg select 24;
		if (isNull g_company) then
		{
			if ((_cfg select 11) != str(playerSide)) then
			{
				if ([true, _price] call AdenisClient_fnc_atmFactionHandle) then {
					[format["Votre faction à reçu <t color='#8cff9b'>%1</t>$ pour la mise en fourrière du véhicule.", ([_price] call AdenisClient_fnc_numberText)], "buy"] call AdenisClient_fnc_info;
				};
			} else {
				["Vous n'avez pas reçu d'argent pour la mise en fourrière car ce véhicule appartient à votre faction."] call AdenisClient_fnc_info;
			};
		} else {
			[format["Votre entreprise à reçu <t color='#8cff9b'>%1</t>$ pour la mise en fourrière du véhicule.", ([_price] call AdenisClient_fnc_numberText)], "buy"] call AdenisClient_fnc_info;
			[g_company, true, _price, (player getVariable "realname"), "Activité professionnelle"] remoteExec ["AdenisServer_fnc_company_bank_handle", 2];
		};
	} else {
		if (isNull g_company) then {
			["Votre faction n'a pas reçu d'argent pour la mise en fourrière car ce véhicule n'est pas immatriculé."] call AdenisClient_fnc_info;
		} else {
			["Votre entreprise n'a pas reçu d'argent pour la mise en fourrière car ce véhicule n'est pas immatriculé."] call AdenisClient_fnc_info;
		};
	};

	_storePos = switch (true) do
	{
		case (_target isKindOf "Air"): {getMarkerPos "fourriere_marker_2"};
		case (_target isKindOf "Ship"): {getMarkerPos "fourriere_marker_3"};
		default {getMarkerPos "fourriere_marker_1"};
	};

	[_target, _storePos, false] remoteExec ["AdenisServer_fnc_garageVehicleStore", 2];
};
