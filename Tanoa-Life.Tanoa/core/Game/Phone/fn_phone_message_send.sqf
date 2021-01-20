/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_bad", "_from", "_sent", "_price", "_error", "_msg", "_to", "_hide"];
_msg = [_this, 0, "", [""]] call BIS_fnc_param;
_to = [_this, 1, [], [[]]] call BIS_fnc_param;
_hide = [_this, 2, false, [false]] call BIS_fnc_param;

if ((time - g_action_delay) < 2) exitWith {[0, "Veuillez ralentir dans vos actions"]};
if (_msg isEqualTo "") exitWith {[0, "Vous ne pouvez pas envoyer de message vide"]};

_bad = [_msg, getText(missionConfigFile >> "ADENIS_PHONE" >> "SMS" >> "characters_allowed")] call AdenisClient_fnc_TextAllowed;
if (_bad != "") exitWith {[0, format["Vous utilisez un caractère interdit dans votre message (%1)", _bad]]};
if (([_msg] call CBA_fnc_strLen) > getNumber(missionConfigFile >> "ADENIS_PHONE" >> "SMS" >> "characters_max")) exitWith {[0, format["Votre message ne doit pas dépasser %1 caractères", getNumber(missionConfigFile >> "ADENIS_PHONE" >> "SMS" >> "characters_max")]]};
if (_to isEqualTo []) exitWith {[0, "Vous n'avez pas entré de destinataire"]};
if ((count _to) > getNumber(missionConfigFile >> "ADENIS_PHONE" >> "SMS" >> "send_max")) exitWith {[0, format["Vous ne pouvez pas envoyer de message à plus de %1 numéros", getNumber(missionConfigFile >> "ADENIS_PHONE" >> "SMS" >> "send_max")]]};

_from = player getVariable "number";
if (isNil "_from") exitWith {[0, "Vous n'avez pas de numéro de téléphone"]};

g_action_delay = time;
_error = "";
_sent = 0;

{
	private "_number";
	_number= [_x ] call CBA_fnc_trim;

	switch (_number) do
	{
		case "CENTRAL":
		{
			if (isClass(missionConfigFile >> "ADENIS_FACTIONS" >> str(playerSide) >> "phone" >> "central_plate")) then
			{
				if (missionNamespace getVariable ["central_inUse", false]) then
				{
					_error = _error + format
					[
						"<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous avez déjà une demande <t color='#FF4000'>en cours</t><br/><t align='center'>----------</t><br/>",
						_number
					];
				} else {
					_sent = _sent + 1;
					[_msg] spawn AdenisClient_fnc_plateReceive;
				};
			} else {
				_error = _error + format
				[
					"<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous n'avez pas les <t color='#FF4000'>autorisations</t> suffisante<br/><t align='center'>----------</t><br/>",
					_number
				];
			};
		};

		case "CIV":
		{
			if ((
					isClass(missionConfigFile >> "ADENIS_FACTIONS" >> str(playerSide) >> "phone" >> "send_global_message") &&
					(getNumber(missionConfigFile >> "ADENIS_FACTIONS" >> str(playerSide) >> "phone" >> "send_global_message" >> "rank") <= (player getVariable ["rank", 0]))
				) || (
					["company_press"] call AdenisClient_fnc_hasLicense
			)) then
			{
				if (_hide) then
				{
					_error = _error + format
					[
						"<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous ne pouvez pas <t color='#FF4000'>cacher</t> votre numéro<br/><t align='center'>----------</t><br/>",
						_number
					];
				} else {
					_sent = _sent + 1;
					[_msg, str(playerSide), false] remoteExecCall ["AdenisClient_fnc_phone_message_receive", civilian];
				};
			} else {
				_error = _error + format
				[
					"<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous n'avez pas les <t color='#FF4000'>autorisations</t> suffisante<br/><t align='center'>----------</t><br/>",
					_number
				];
			};
		};

		case "GUER":
		{
			if ((independent countSide allPlayers) isEqualTo 0) then
			{
				_error = _error + format
				[
					"<t align='left'>Numéro</t><t align='right'>[%2]</t><br/>Aucune membre de <t color='#FF4000'>%1</t> n'est disponible<br/><t align='center'>----------</t><br/>",
					getText(missionConfigFile >> "ADENIS_FACTIONS" >> "GUER" >> "name"), _number
				];
			} else {
				if (_hide) then
				{
					_error = _error + format
					[
						"<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous ne pouvez pas <t color='#FF4000'>cacher</t> votre numéro<br/><t align='center'>----------</t><br/>",
						_number
					];
				} else {
					_sent = _sent + 1;
					[_msg, _from, false] remoteExecCall ["AdenisClient_fnc_phone_message_receive", independent];
				};
			};
		};

		case "WEST":
		{
			if ((west countSide allPlayers) isEqualTo 0) then
			{
				_error = _error + format
				[
					"<t align='left'>Numéro</t><t align='right'>[%2]</t><br/>Aucune membre de <t color='#FF4000'>%1</t> n'est disponible<br/><t align='center'>----------</t><br/>",
					getText(missionConfigFile >> "ADENIS_FACTIONS" >> "WEST" >> "name"), _number
				];
			} else {
				if (_hide) then
				{
					_error = _error + format
					[
						"<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous ne pouvez pas <t color='#FF4000'>cacher</t> votre numéro<br/><t align='center'>----------</t><br/>",
						_number
					];
				} else {
					_sent = _sent + 1;
					[_msg, _from, false] remoteExecCall ["AdenisClient_fnc_phone_message_receive", west];
				};
			};
		};

		case "EAST":
		{
			if ((east countSide allPlayers) isEqualTo 0) then
			{
				_error = _error + format
				[
					"<t align='left'>Numéro</t><t align='right'>[%2]</t><br/>Aucune membre de <t color='#FF4000'>%1</t> n'est disponible<br/><t align='center'>----------</t><br/>",
					getText(missionConfigFile >> "ADENIS_FACTIONS" >> "EAST" >> "name"), _number
				];
			} else {
				if (_hide) then
				{
					_error = _error + format
					[
						"<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous ne pouvez pas <t color='#FF4000'>cacher</t> votre numéro<br/><t align='center'>----------</t><br/>",
						_number
					];
				} else {
					_sent = _sent + 1;
					[_msg, _from, false] remoteExecCall ["AdenisClient_fnc_phone_message_receive", east];
				};
			};
		};

		default
		{
			if ([_number] call AdenisClient_fnc_isNumber) then
			{
				if (([_number] call CBA_fnc_strLen) isEqualTo 6) then
				{
					if (_number != _from) then
					{
						if (_number in (missionNamespace getVariable ["gServer_phone_numbers", []])) then
						{
							_price = getNumber(missionConfigFile >> "ADENIS_PHONE" >> "FORFAITS" >> g_phone_forfait >> "sms_price");
							if (g_atm >= _price) then
							{
								if (!(_number in g_phone_blacklist)) then
								{
									private "_target";
									_target = objNull;
									{
										if ((_x getVariable ["number", "-1"]) isEqualTo _number) exitWith {
											_target = _x;
										};
									} forEach allPlayers;
									if (isNull _target) then {
										[_msg, _from, _number, _hide] remoteExecCall ["AdenisServer_fnc_phoneMessageHandler", 2];
									} else {
										[_msg, _from, _hide] remoteExecCall ["AdenisClient_fnc_phone_message_receive", _target];
									};
									[false, _price, "SMS"] call AdenisClient_fnc_handleATM;
									_sent = _sent + 1;
								} else {
									_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous ne pouvez pas envoyer de message aux numéros que vous avez bloqués<br/><t align='center'>----------</t><br/>", _number];
								};
							} else {
								_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous n'avez pas assez d'argent pour envoyer le SMS<br/><t align='center'>----------</t><br/>", _number];
							};
						} else {
							_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Le numéro demandé n'est pas attribué<br/><t align='center'>----------</t><br/>", _number];
						};
					} else {
						_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous ne pouvez pas vous envoyer de message à vous même<br/><t align='center'>----------</t><br/>", _number];
					};
				} else {
					_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Un numéro de téléphone doit être composé de six chiffres<br/><t align='center'>----------</t><br/>", _number];
				};
			} else {
				_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Le numéro de téléphone entré n'est pas valide<br/><t align='center'>----------</t><br/>", _number];
			};
		};
	};
} forEach (_to);

if (_sent != count(_to)) exitWith {
	[_sent, format["<t align='center'><t color='#DF3A01'>Erreurs SMS</t><br/>Certains messages n'ont pas pu être envoyés (%2)</t><br/><br/>%1", _error, (count(_to) - _sent)]];
};

[_sent, _error];
