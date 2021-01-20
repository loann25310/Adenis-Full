/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

diag_log "[CLEANUP] Setup";

[] spawn
{
	while {!gServer_soonReboot} do
	{
		uiSleep(60 * 2);
		[] call AdenisServer_fnc_cleanup_deadVehicles;
	};
};

[] spawn
{
	while {!gServer_soonReboot} do
	{
		diag_log "[CLEANUP] loop cleanup vehicules & items";
		[] call AdenisServer_fnc_cleanup_things;
		[] call AdenisServer_fnc_cleanup_vehicles;
		uiSleep(60 * 10);
	};
};

diag_log "[CLEANUP] Ready";
