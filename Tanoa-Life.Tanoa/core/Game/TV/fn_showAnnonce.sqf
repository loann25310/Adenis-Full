/*
	Tanoa-Life RPG
	Code written by Loann
*/

private ["_text","_display","_bgCtrl","_txtCtrl"];
_text = [_this, 0, "", [""]] call BIS_fnc_param;

5 cutRsc ["RscTitleAdenisTV","PLAIN"];

playSound "breaking_news";

disableSerialization;
_display = uiNameSpace getVariable ["RscTitleAdenisTV", displayNull];
if (isNull _display) exitWith {false};

_bgCtrl = _display displayCtrl 19500;
_txtCtrl = _display displayCtrl 19501;

_txtCtrl ctrlSetText _text;