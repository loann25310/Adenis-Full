/*
	Tanoa-Life RPG
	Code written by Loann
*/
if ((time - g_action_delay) < 0.5) exitWith {};
if (
	g_is_alive && 
	((missionNamespace getVariable ["calling_number", ""]) isEqualTo "")
) exitWith {
	["Vous ne recevez aucun appel !"] call AlysiaClient_fnc_error;
};

if (missionNamespace getVariable ["calling", false]) then {
	["Vous avez raccroché votre téléphone"] call AlysiaClient_fnc_info;
	[false, true] call AlysiaClient_fnc_APP_phone_call_hangup;
} else {
	["Vous avez décroché votre téléphone"] call AlysiaClient_fnc_info;
	[] spawn AlysiaClient_fnc_phone_call_receive_accept;
};

g_action_delay = time;