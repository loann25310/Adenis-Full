/*
	Tanoa-Life RPG
	Code written by Loann
*/
private["_dialog","_ctrl","_toRemove","_suit"];

if ((vehicle player) != player) exitWith {
	["Vous devez être à pied pour utiliser diviser l'argent sale."] call AlysiaClient_fnc_error;
	closeDialog 0;
};

_dialog = findDisplay 13650;
_ctrl = _dialog displayCtrl 13651;

_toRemove = parseNumber (ctrlText _ctrl);

if (_toRemove isEqualTo 0) exitWith {
	["La somme doit être supérieur à 0."] call AlysiaClient_fnc_error;
	closeDialog 0;
};

if ((['illegal_money'] call AlysiaClient_fnc_itemCount) < _toRemove) exitWith {
	["Vous n'avez pas autant sur vous."] call AlysiaClient_fnc_error;
	closeDialog 0;
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action."] call AlysiaClient_fnc_error;
	closeDialog 0;
};

[false, 'illegal_money', _toRemove] call AlysiaClient_fnc_handleInv;

_suit = (nearestObjects [player, ["Skyline_Alysia_Boite_01_F"], 3.2]) select 0;
if (isNil "_suit") then
{
	_suit = createVehicle ["Skyline_Alysia_Boite_01_F", (player modelToWorld [0, 2, 0]), [], 0, "CAN_COLLIDE"];
	_suit setVariable ["items", [['illegal_money', _toRemove]], true];
	["Vous avez crée une <t color='#FF8000'>valise</t>. Vous pouvez accéder à son <t color='#01DF3A'>inventaire</t> avec votre touche WINDOWS. Une valise reste <t color='#DF0101'>10 minutes</t> avant de se faire supprimer par le serveur."] call AlysiaClient_fnc_info;
	[true] call AlysiaClient_fnc_temporyInventory_update;
} else {
	if ((_suit getVariable ["trunk_in_use_ID", ""]) isEqualTo "") then
	{
		if ([true, _suit, "items", 'illegal_money', _toRemove, true] call AlysiaClient_fnc_handleTrunk) then {
			[true] call AlysiaClient_fnc_temporyInventory_update;
		} else {
			["Impossible de stocker cet objet dans la valise la plus proche : il n'y a pas assez de place. Ecartez-vous pour déposer une nouvelle valide ou faites de la place dedans."] call AlysiaClient_fnc_error;
			[true, 'illegal_money', _toRemove] call AlysiaClient_fnc_handleInv;
		};
	} else {
		["La valise la plus proche est en train d'être fouillée. Ecartez-vous pour déposer une nouvelle valise ou attendez que la fouille soit finie pour la remplir."] call AlysiaClient_fnc_error;
		[true, 'illegal_money', _toRemove] call AlysiaClient_fnc_handleInv;
	};
};

closeDialog 0;