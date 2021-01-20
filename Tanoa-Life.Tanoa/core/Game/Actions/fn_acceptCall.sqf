/*
	Tanoa-Life RPG
	Code written by Loann
*/

if (
	((isNil {(missionNamespace getVariable "calling_answer")}) && 
	g_is_alive && 
	((missionNamespace getVariable ["calling_number", ""]) isEqualTo (_from getVariable "number")))
) exitWith {
	["Vous ne recevez aucun appel !"] call AdenisClient_fnc_error;
};

[] spawn AdenisClient_fnc_phone_call_receive_accept;