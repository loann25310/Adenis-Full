#define ADMIN_AND_MODO {"76561198146571164","76561198237617140","76561198221841104","76561198084504163","76561198053858627","76561198305059385","76561197990198883","76561198395387821","76561198040104160","76561198101935400","76561198116958747"}
#define ADMIN_AND_MODO_AND_SUPORTPLUS {"76561198146571164","76561198237617140","76561198221841104","76561198084504163","76561198053858627","76561198305059385","76561197990198883","76561198395387821","76561198040104160","76561198101935400","76561198116958747"}

class ADENIS_STAFF
{
	class ranks
	{
		class admin {
			name="Administrateur";
		};
		class modo {
			name="Modérateur";
		};
		class support {
			name="Support";
		};
	};

	class members
	{
		// - Admin
		class admin
		{
			rank="admin";
			teamspeak=1;
			slot=1;
			skip_checks=1;
		};
		class Nzkh: admin
		{
			uid="76561198146571164";
		};
		class Psika: admin
		{
			uid="76561198237617140";
		};
		class Ouz: admin
		{
			uid="76561198084504163";
		};
		class Mateja: admin
		{
			uid="76561198053858627";
		};

		// - Modo
		class modo
		{
			rank="modo";
			teamspeak=1;
			slot=1;
			skip_checks=1;
		};
		/*class Loann: modo
		{
			uid="76561198171075495";
		};*/
		class ChuckWillis: modo
		{
			uid="76561197990198883";
		};

		class Apolithe: modo
		{
			uid="76561198305059385";
		};

		class StephaneHERVE: modo
		{
			uid="76561198221841104";
		};

		class HarmonieBlake: modo
		{
			uid="76561198395387821";
		};

		class JasonChester: modo
		{
			uid="76561198040104160";
		};

		class NoraHaros: modo
		{
			uid="76561198101935400";
		};

		class JesusFlores: modo
		{
			uid="76561198116958747";
		};
		// - Support
		class support
		{
			rank="support";
			teamspeak=1;
			slot=0;
			skip_checks=0;
		};
		class Karim: support
		{
			uid="76561198225138140";
		};

		class Arthur: support
		{
			uid="76561198115809507";
		};
	};

	class commands
	{
		class buttons
		{
			class god_on
			{
				name="Dieu ON";
				statement="[] spawn AlysiaClient_fnc_APP_staff_god;";
				condition="!g_staff_on";
				allow[]=ADMIN_AND_MODO;
			};
			class god_off: god_on
			{
				name="Dieu OFF";
				statement="g_staff_on=false;";
				condition="g_staff_on";
			};

			class arsenal
			{
				name="Arsenal";
				statement="closedialog 0; ['Open', [ true ]] call BIS_fnc_arsenal;";
				condition="(true)";
				allow[]={
					"76561198146571164",
					"76561198237617140",
					"76561198084504163",
					"76561198053858627"
				};
			};

			class vehicle_getKey
			{
				name="Clef Vehicle";
				statement="g_vehicles pushBack (vehicle player);";
				condition="(((vehicle player) isKindOf 'Car') || ((vehicle player) isKindOf 'Ship') || ((vehicle player) isKindOf 'Air') || ((vehicle player) isKindOf 'Tank'))";
				allow[]=ADMIN_AND_MODO;
			};

			class target_getKey
			{
				name="Clef Cible";
				statement="g_vehicles pushBack cursorObject;";
				condition="(!(isNull cursorObject) && ((cursorObject isKindOf 'Car') || (cursorObject isKindOf 'Ship') || (cursorObject isKindOf 'Air') || (cursorObject isKindOf 'Tank')))";
				allow[]=ADMIN_AND_MODO;
			};
			class target_delete: vehicle_getKey
			{
				name="Supp Cible";
				statement="deleteVehicle cursorObject;";
				condition="!(isNull cursorObject)";
				verify=1;
			};
			class repar: vehicle_getKey
			{
				name="Réparer";
				statement="cursorTarget setDamage 0;";
				condition="!(isNull cursorObject)";
				verify=1;
			};
			class target_trunkInUse: vehicle_getKey
			{
				name="Fix coffre";
				statement="cursorObject setVariable ['trunk_in_use_ID','',true];";
				condition="!(isNull cursorObject) && ((cursorObject getVariable ['trunk_in_use_ID','']) != '')";
			};
			class target_onMe: vehicle_getKey
			{
				name="TP cible";
				statement="cursorObject setPosATL (getPosATL player);";
				condition="!(isNull cursorObject) && ((cursorObject isKindOf 'Car') || (cursorObject isKindOf 'Ship') || (cursorObject isKindOf 'Air') || (cursorObject isKindOf 'Tank'))";
			};
			class target_build_company: vehicle_getKey
			{
				name="Construire";
				statement="[cursorObject] remoteExecCall ['AlysiaServer_fnc_company_build', 2];";
				condition="(cursorObject getVariable ['construction',false]) && !(isNil {(cursorObject getVariable 'company_info')})";
				verify=1;
			};
			class target_build_labo: vehicle_getKey
			{
				name="Construire";
				statement="[cursorObject] remoteExecCall ['AlysiaServer_fnc_laboratory_build', 2];";
				condition="(cursorObject getVariable ['construction',false]) && !(isNil {(cursorObject getVariable 'laboratory_info')})";
				verify=1;
			};

			class reboot
			{
				name="Reboot";
				statement="if(!(['Êtes vous sur de vouloir redémarrer le serveur ?','Confirmation','Oui','Non']call BIS_fnc_guiMessage))exitWith{};if(!(['Êtes vous sur de ne pas faire une Chuck Willis ?','Confirmation','Oui','Non']call BIS_fnc_guiMessage))exitWith{};if(!(['Êtes-vous conscient que tous les joueurs vont être déconnectés ?','Confirmation','Je le suis','Non,Annuler !']call BIS_fnc_guiMessage))exitWith{};[]remoteExec['AlysiaServer_fnc_serverSave',2];";
				condition="isNil 'gServer_soonReboot'";
				allow[]=ADMIN_AND_MODO;
				verify=1;
			};

			class remove_desaeses
			{
				name="Supp maladie";
				statement="g_deseases=[];g_medecine=[];['Merci de deco reco'] call AlysiaClient_fnc_info;";
				condition="count(g_deseases) > 0";
				allow[]=ADMIN_AND_MODO;
			};

			class clear_bots
			{
				name="Supp Bots";
				statement="{if (!(isPlayer _x)) then{deleteVehicle _x};} foreach allUnits;";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};

			class rabbit
			{
				name="météo";
				statement="0 setFog 0;forceWeatherChange;999999 setFog 0;";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};
			class snake: rabbit
			{
				name="Serpent";
				statement="[] spawn AlysiaClient_fnc_APP_staff_snake;";
			};

			class seize
			{
				name="Saisir";
				statement="[] call AlysiaClient_fnc_seizeObjects;";
				condition="(count(nearestObjects [player, ['WeaponHolder','GroundWeaponHolder','WeaponHolderSimulated','Skyline_Alysia_Boite_01_F'], 3]) > 0)";
				allow[]=ADMIN_AND_MODO;
			};

			class esp_on
			{
				name="ESP ON";
				statement="[] spawn AlysiaClient_fnc_APP_staff_esp;";
				condition="!g_staff_esp";
				allow[]=
				{
					"76561198146571164",
					"76561198237617140",
					"76561198084504163",
					"76561198053858627"
				};
			};
			class esp_off: esp_on
			{
				name="ESP OFF";
				statement="g_staff_esp=false;";
				condition="g_staff_esp";
			};
		};

		class target
		{
			class tpto
			{
				name="TP à";
				statement="(vehicle player) setPosATL (getPosATL (call compile (lbData[9000,lbCurSel 9000])));";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};
			class tphere: tpto
			{
				name="TP ici";
				statement="(vehicle (call compile (lbData[9000,lbCurSel 9000]))) setPosATL (getPosATL player);";
			};
			class getInVeh: tpto
			{
				name="Entrer dans véhicule";
				statement="player moveInCargo (vehicle (call compile (lbData[9000,lbCurSel 9000])))";
				condition="g_staff_god && !((vehicle (call compile (lbData[9000,lbCurSel 9000]))) isKindOf 'Man')";
			};
			class spec: tpto
			 {
			 	name="Spec";
			 	statement="[] spawn AlysiaClient_fnc_APP_staff_spec_ON;";
			 	condition="g_staff_god";
			 };

			class data
			{
				name="Informations";
				statement="[player] remoteExecCall ['AlysiaClient_fnc_APP_staff_players_getData',(lbData[9000,lbCurSel 9000])];";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};

			class heal: tpto
			{
				name="Soin";
				statement="[3999] remoteExecCall ['AlysiaClient_fnc_handleBlood',(call compile (lbData[9000,lbCurSel 9000]))]; (call compile (lbData[9000,lbCurSel 9000])) setVariable ['is_bleeding', false, true];";
			};
			class res: tpto
			{
				name="Rez";
				statement="((call compile (lbData[9000,lbCurSel 9000])) setVariable ['is_bleeding',false,true]);((call compile (lbData[9000,lbCurSel 9000])) setVariable ['is_coma',false,true]);";
				condition="(call compile (lbData[9000,lbCurSel 9000])) getVariable ['is_coma',false]";
			};

			class tp_civ
			{
				name="TP spawn CIVIL";
				statement="(call compile (lbData[9000,lbCurSel 9000])) setPos (getMarkerPos 'respawn_civilian')";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};
			class tp_guer: tp_civ
			{
				name="TP spawn CARE";
				statement="(call compile (lbData[9000,lbCurSel 9000])) setPos (getMarkerPos 'respawn_guerrila')";
			};
			class tp_east: tp_civ
			{
				name="TP spawn ArmTech";
				statement="(call compile (lbData[9000,lbCurSel 9000])) setPos (getMarkerPos 'respawn_east')";
			};
			class kick_lobby
			{
				name="Kick Lobby";
				statement="['bye'] remoteExec ['BIS_fnc_endMission',(call compile (lbData[9000,lbCurSel 9000]))];";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};
			class info_radio
			{
				name="Info Radio";
				statement="[[player],{(format['--Info Radio--<br/>Nom:%3<br/>Frequence Courte:%1<br/>Fréquence Longue:%2',if(call TFAR_fnc_haveSWRadio)then{(call TFAR_fnc_ActiveSwRadio)call TFAR_fnc_getSwFrequency}else{'No'},if(call TFAR_fnc_haveLRRadio)then{(call TFAR_fnc_ActiveLrRadio)call TFAR_fnc_getLrFrequency}else{'No'},profileName])remoteExec['AlysiaClient_fnc_info',(_this select 0)];}]remoteExec['bis_fnc_call',(call compile (lbData[9000,lbCurSel 9000]))];";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};
			/*class tp_west: tp_civ
			{
				name="TP spawn ArmTech";
				statement="(call compile (lbData[9000,lbCurSel 9000])) setPos (getMarkerPos 'respawn_west')";
			};*/

			class remboursement
			{
				name="Remboursement";
				statement=" \
					[] spawn \
					{ \
						_amount = [ \
							'Alysia_Client_Textures\Data\interactions\background.jpg', \
							'Informations', \
							'Valeur', \
							'0', \
							'Valider', \
							'Alysia_Client_Textures\Data\global\validate.paa', \
							'Alysia_Client_Textures\Data\global\validate_select.paa', \
							'0123456789', \
							7, \
							1 \
						] call AlysiaClient_fnc_edit_create; \
						if (_amount != '') then \
						{ \
							_amount = parseNumber(_amount); \
							_target = call compile (lbData[9000,lbCurSel 9000]); \
							[format['Vous avez envoyé <t color=''#8cff9b''>%1</t>$ à <t color=''#FF8000''>%2</t>', [_amount] call AlysiaClient_fnc_numberText, _target getVariable 'realname']] call AlysiaClient_fnc_info; \
							[format['<t color=''#cc4747''>Adenis</t> vous a remboursé de <t color=''#8cff9b''>%1</t>$ sur votre compte en banque.', [_amount] call AlysiaClient_fnc_numberText]] remoteExecCall ['AlysiaClient_fnc_info', _target]; \
							[true, _amount] remoteExecCall ['AlysiaClient_fnc_handleATM', _target]; \
							[player, _target, _amount] remoteExecCall ['AlysiaServer_fnc_logRefund', 2]; \
						}; \
					}; \
				";
				condition="(true)";
				allow[]=ADMIN_AND_MODO_AND_SUPORTPLUS;
			};

			class accred_reb_remove
			{
				name="Supprimer accréditation rebelle";
				statement="[(call compile (lbData[9000,lbCurSel 9000])), 0, player] remoteExecCall ['AlysiaServer_fnc_whitelistRebels', 2];";
				condition="((side (call compile (lbData[9000,lbCurSel 9000]))) isEqualTo civilian) && (((call compile (lbData[9000,lbCurSel 9000])) getVariable ['rank', 0]) > 0)";
				allow[]={"76561198142685050","76561197992223096","76561198089742613","76561198188838229","76561198085813908"};
			};
			class accred_reb_first: accred_reb_remove
			{
				name="Accréditation rebelle 1";
				statement="[(call compile (lbData[9000,lbCurSel 9000])), 1, player] remoteExecCall ['AlysiaServer_fnc_whitelistRebels', 2];";
				condition="((side (call compile (lbData[9000,lbCurSel 9000]))) isEqualTo civilian) && (((call compile (lbData[9000,lbCurSel 9000])) getVariable ['rank', 0]) != 1)";
			};
			class accred_reb_second: accred_reb_remove
			{
				name="Accréditation rebelle 2";
				statement="[(call compile (lbData[9000,lbCurSel 9000])), 2, player] remoteExecCall ['AlysiaServer_fnc_whitelistRebels', 2];";
				condition="((side (call compile (lbData[9000,lbCurSel 9000]))) isEqualTo civilian) && (((call compile (lbData[9000,lbCurSel 9000])) getVariable ['rank', 0]) != 2)";
			};
		};
	};
};

#undef ADMIN_AND_MODO
#undef ADMIN_AND_MODO_AND_SUPORTPLUS
