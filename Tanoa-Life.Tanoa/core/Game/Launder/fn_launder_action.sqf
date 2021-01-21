/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_amount", "_target", "_min", "_data", "_receive"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

if (!(["whitelist_blanchiment"] call AlysiaClient_fnc_hasLicense)) exitWith {
	["Vous ne pouvez pas faire cette action"] call AlysiaClient_fnc_error;
};

_amount = ctrlText 72001;
if (!([_amount] call AlysiaClient_fnc_isNumber)) exitWith {
	["La somme n'est pas <t color='#04B404'>un nombre</t>."] call AlysiaClient_fnc_error;
};
_amount = parseNumber(_amount);
_min = 20000;
if (_amount < _min) exitWith {
	[format["Vous devez blanchir au minimum <t color='#8cff9b'>%1</t>$.", _min]] call AlysiaClient_fnc_error;
};
if (!(isNil "gServer_soonReboot")) exitWith {
	["Vous ne pouvez pas interagir blanchir de l'argent juste avant le <t color='#B40404'>redémarrage</t> du serveur."] call AlysiaClient_fnc_error;
};
if ((["illegal_money"] call AlysiaClient_fnc_itemCount) < _amount) exitWith {
	["Vous n'avez pas autant d'argent sale sur vous."] call AlysiaClient_fnc_error;
};

closeDialog 0;
_data = [_amount, 900];

if (["Blanchiment", (_data select 1), _target] call AlysiaClient_fnc_showProgress) then
{
	if ([false, "illegal_money", _amount] call AlysiaClient_fnc_handleInv) then
	{
		_receive = floor(_data select 0);

		[
			format
			[
				"Vous avez reçu <t color='#8cff9b'>%1</t>$ en <t color='#FF8000'>liquide</t>.<br/>" +
				"Part du blanchisseur : <t color='#8cff9b'>%2</t>$",
				[_receive] call AlysiaClient_fnc_numberText,
				[_amount - _receive] call AlysiaClient_fnc_numberText
			]
		] call AlysiaClient_fnc_info;
		[true, _receive] call AlysiaClient_fnc_handleCash;
		[1] call AlysiaDB_fnc_query_update_partial;
		[player, _amount, _receive, "STAND"] remoteExecCall ["AlysiaServer_fnc_logLaunder", 2];
	} else {
		["Vous n'avez pas autant d'argent sale sur vous."] call AlysiaClient_fnc_error;
	};
};
