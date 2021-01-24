/*
	Tanoa-Life RPG
	Code written by Lyeed
	Edited by Dieter
*/

if (g_compresse isEqualTo 0) then
{
	g_compresse = getNumber(missionConfigFile >> "ALYSIA_MEDICAL" >> "adrenaline" >> "seringue_amount");
	[] spawn
	{
		while {g_compresse > 0} do
		{
			g_compresse = g_compresse - getNumber(missionConfigFile >> "ALYSIA_MEDICAL" >> "adrenaline" >> "tick_amount");
			uiSleep getNumber(missionConfigFile >> "ALYSIA_MEDICAL" >> "adrenaline" >> "tick_timer");
		};
	};
} else {
	g_compresse = g_compresse + getNumber(missionConfigFile >> "ALYSIA_MEDICAL" >> "adrenaline" >> "seringue_amount");
};
