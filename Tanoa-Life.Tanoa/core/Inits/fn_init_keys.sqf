/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

g_keybinds = [];

["Adenis", "actionHandler", "Action", {[] call AlysiaEvent_fnc_actionKeyHandler}, {}, [DIK_LWIN, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionHandler";

["Adenis", "actionSilent", "Boules Quies", {[] call AlysiaClient_fnc_silence}, {}, [DIK_U, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionSilent";

["Adenis", "actionTablet", "Ouvrir tablette", {[] spawn AlysiaClient_fnc_tabletOpen}, {}, [DIK_Y, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionTablet";

["Adenis", "actionSurrender", "Mains sur la tête", {[] call AlysiaClient_fnc_surrender}, {}, [DIK_H, [false, false, true]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionSurrender";

["Adenis", "actionAcceptCall", "Accepter l'appel", {[] call AlysiaClient_fnc_acceptCall}, {}, [DIK_R, [false, true, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionAcceptCall";

["Adenis", "actionVictim", "Mode panique", {[] call AlysiaClient_fnc_panic_mod}, {}, [DIK_H, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionVictim";

["Adenis", "actionKnock", "Mettre un coup", {[] spawn AlysiaClient_fnc_knockoutAction}, {}, [DIK_G, [true, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionKnock";

["Adenis", "actionHoldster", "Holster", {[] call AlysiaClient_fnc_holdsterSwitch}, {}, [DIK_H, [true, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionHoldster";

["Adenis", "actionSifflet", "Utiliser (sifflet)", {[] call AlysiaClient_fnc_sifflet}, {}, [DIK_F, [false, false, true]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionSifflet";

["Adenis", "actionSirene", "Sirène du véhicule", {[] call AlysiaClient_fnc_sirene}, {}, [DIK_F, [true, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionSirene";

["Adenis", "actionNitro", "Nitro du véhicule", {[] call AlysiaClient_fnc_activateNitro}, {}, [DIK_1, [true, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionNitro";

["Adenis", "actionAnimPushup", "Animation : Pompe", {["AmovPercMstpSnonWnonDnon_exercisePushup"] spawn AlysiaClient_fnc_animPlay}, {}, [DIK_NUMPAD1, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionAnimPushup";

["Adenis", "actionAnimKata", "Animation : Kata", {["AmovPercMstpSnonWnonDnon_exerciseKata"] spawn AlysiaClient_fnc_animPlay}, {}, [DIK_NUMPAD2, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionAnimKata";

["Adenis", "actionAnimKneeBend", "Animation : Flexion", {["AmovPercMstpSnonWnonDnon_exercisekneeBendA"] spawn AlysiaClient_fnc_animPlay}, {}, [DIK_NUMPAD3, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionAnimKneeBend";

["Adenis", "actionAnimSplit", "Animation : Grand écart", {["Acts_EpicSplit"] spawn AlysiaClient_fnc_animPlay}, {}, [DIK_NUMPAD4, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionAnimSplit";

["Adenis", "actionAnimSitTired", "Animation : Assis (dépité, apeuré)", {["Acts_CivilShocked_2"] spawn AlysiaClient_fnc_animPlay}, {}, [DIK_NUMPAD5, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionAnimSitTired";

["Adenis", "actionAnimPissing", "Animation : Uriner", {["Acts_AidlPercMstpSlowWrflDnon_pissing"] spawn AlysiaClient_fnc_animPlay}, {}, [DIK_NUMPAD6, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionAnimPissing";
