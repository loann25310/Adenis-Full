/*
	Tanoa-Life RPG
	Code written by Loann
*/
private ["_target","_dialog","_list","_validBtn","_info","_config","_require","_requireText","_can","_item"];

if (g_interaction_target isEqualTo objNull) exitWith {};
_dialog = findDisplay 15600;
_can = true;
_requireText = "";

if (isNull _dialog) exitWith {};

_list = _dialog displayCtrl 15601;
_info = _dialog displayCtrl 15602;
_validBtn = _dialog displayCtrl 15603;

_config = missionConfigFile >> "ADENIS_PAINTS" >> "Colors" >> (_list lbData (lbCurSel _list));

if (!isNull (_config >> "require" >> "items_virtual")) then {
	_require = getArray(_config >> "require" >> "items_virtual");
	{
		_item = _x # 0;
		if ([_item] call AlysiaClient_fnc_itemCount >= (_x # 1)) then {
			_requireText = _requireText + format ["   - %2x <t color='#00c12a' align='left'>%1</t><br/>", [_item] call AlysiaClient_fnc_itemGetName, _x # 1];
		}else{
			_can = false;
			_requireText = _requireText + format ["   - %2x <t color='#c10a00' align='left'>%1</t><br/>", [_item] call AlysiaClient_fnc_itemGetName, _x # 1];
		};
	} forEach _require;
};

_info ctrlSetStructuredText parseText format
[
		"<t font='EtelkaMonospacePro' size='0.8'>"
	+	"<t align='center' color='#086A87'>- Informations - </t><br/>"
	+	"<t align='left'>Prix des pigments</t><t align='right'>%1 $</t><br/>"
	+	"<t align='left'>Durée</t><t align='right'>%2</t><br/>"
	+	"<t align='left'>Matériel nécéssaire</t><br/>%5<br/>"
	+	"<t align='left'>Permanant</t><t align='right'>%3</t><br/>"
	+	"<t align='left'>Donnateur</t><t align='right'>%4</t><br/>"
	+	"</t>",
	[getNumber(_config >> "price")] call AlysiaClient_fnc_numberText,
	str(getNumber(_config >> "time")) + " secondes",
	if (getNumber(_config >> "saveDB") isEqualTo 1) then {"Oui"} else {"Non"},
	if (getNumber(_config >> "donorLevel") isEqualTo 0) then {"Non"} else {"Niveau " + str(getNumber(_config >> "donorLevel"))},
	_requireText
];

_validBtn ctrlEnable _can;