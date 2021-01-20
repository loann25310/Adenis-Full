/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

if ((call AdenisClient_fnc_hasPhone) && (missionNamespace getVariable ['calling', false])) then
{
	if (player getVariable ["tf_sw_speakers", false]) then {
		[(call TFAR_fnc_activeSwRadio)] call TFAR_fnc_setSwSpeakers;
	};

	missionNamespace setVariable ["phone_call_micro_on", true];

	[] call AdenisClient_fnc_APP_phone_calling_update;
} else {
	['MAIN'] spawn AdenisClient_fnc_tabletApp;
};
