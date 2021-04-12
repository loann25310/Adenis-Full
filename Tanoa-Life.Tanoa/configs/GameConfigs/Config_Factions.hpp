class ADENIS_FACTIONS
{
	class EAST
	{
		/*** GLOBAL ***/
		name="RAC";
		name_full="Régime Autocratique Communiste";
		icon="Alysia_Client_Texture\Data\faction\CIV_logo.paa";
		identity_item="Alysia_Identity_Civ";

		/*** SALARY ***/
		class salary
		{
			name="Salaire";
			amount=950;
			apply_rank=3;
			timer=15;
		};

		/*** PHONE ***/
		class phone
		{
			change_number_price=5000;
			receive_fuel_alert=0;
			class send_global_message
			{
				rank=14;
			};
			class central_plate {};
		};

		/*** COMPANIES ***/
		class companies
		{
			search=1;
			owner=0;
			employee=0;
			class history
			{
				rank=15;
				class clean
				{
					rank=15;
				};
			};
			class destroy
			{
				rank=15;
			};
		};

		/*** LAUNDER ***/
		class launder_transfer
		{
			rank=2;
		};

		class bank_faction
		{
			rank=14;
			payFuel=1;
		};
		class taxes_app
		{
			rank=9;
		};

		/*** Licenses ***/
		class licenses_seize
		{
			rank=2;
		};
		class licenses_give
		{
			class membre_pnt
			{
				rank=14;
				same_side_only=0;
			};

			class east_form
			{
				rank=8;
				same_side_only=1;
			};

			class east_form_resp
			{
				rank=9;
				same_side_only=1;
			};
			class east_medic_resp: east_form_resp {};
			class east_fm_resp: east_form_resp {};
			class east_dog_resp: east_form_resp {};
			class east_tp_resp: east_form_resp {};
			class east_cook_resp: east_form_resp {};
			class east_pilot_resp: east_form_resp {};
			class east_ope_radio_resp: east_form_resp {};
			class east_gcp_resp: east_form_resp {};
			class east_gcm_resp: east_form_resp {};
			class east_urtant_resp: east_form_resp {};
			class east_ua_resp: east_form_resp {};
			class east_uja_resp: east_form_resp {};
			class east_upg_resp: east_form_resp {};

			class east_medic: east_form
			{
				license="east_medic_resp";
			};
			class east_fm: east_form
			{
				license="east_fm_resp";
			};
			class east_dog: east_form
			{
				license="east_dog_resp";
			};
			class east_tp: east_form
			{
				license="east_tp_resp";
			};
			class east_cook: east_form
			{
				license="east_cook_resp";
			};
			class east_pilot: east_form
			{
				license="east_pilot_resp";
			};
			class east_ope_radio: east_form
			{
				license="east_ope_radio_resp";
			};
			class east_gcp: east_form
			{
				license="east_gcp_resp";
			};
			class east_gcm: east_form
			{
				license="east_gcm_resp";
			};
			class east_urtant: east_form
			{
				license="east_urtant_resp";
			};
			class east_ua: east_form
			{
				license="east_ua_resp";
			};
			class east_uja: east_form
			{
				license="east_uja_resp";
			};
			class east_upg: east_form
			{
				license="east_upg_resp";
			};
		};

		/*** MAP ***/
		class map_factions_markers
		{
			shown[]={"EAST"};
		};

		/*** SPAWN/RESPAWN ***/
		class respawn
		{
			marker="respawn_east";
			price=2200;
			suicide=0.2;
		};

		/*** HOUSING ***/
		class housing
		{
			search=1;
			max=5;
		};

		/*** HEAL ***/
		can_use_debrif=0;

		/*** SKULL ***/
		skull_who=0;
		skull_take=1;

		/*** INTERACTIONS ***/
		interaction_seize_gear=1;

		/*** LEADER BOARD ***/
		class board
		{
			history_items[]=
			{
				"arifle_CTAR_blk_F",
				"RH_m1911"
			};
			class leader_board
			{
				access_rank=12;
			};
		};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform="SRB_CombatUniform_Maskirni_para";
			headgear="";
			vest="";
			backpack="";
			items[]={};
		};

        /*** RANKS ***/
        class Ranks
        {
            ranks_complet[]=
            {
		"Civil",
		"Soldat",
		"Caporal",
		"Sergent",
		"Sergent-Chef",
		"Adjudant",
		"Lieutenant",
		"Capitaine",
		"Major",
		"Lieutenant-Colonel",
		"Colonel",
		"Brigadier Général",
		"Major-Général",
		"Lieutenant Général",
		"Général",
		"Leader Suprème"
            };

            ranks_short[]=
            {
		"Civ",
		"Sld",
		"Cpr",
		"Sgt",
		"SgC",
		"Adj",
		"Ltn",
		"Cap",
		"Maj",
		"LtC",
		"Col",
		"BrG",
		"MaG",
		"LtG",
		"Gnl",
		"Lds"
            };
        };
    };
	class CIV
	{
		/*** GLOBAL ***/
		name="Tanocien";
		name_full="Tanocien";
		icon="Alysia_Client_Texture\Data\faction\CIV_logo.paa";
		identity_item="Alysia_Identity_Civ";

		/*** SALARY ***/
		class salary
		{
			name="Aides";
			amount=1450;
			apply_rank=0;
			timer=15;
		};

		/*** PHONE ***/
		class phone
		{
			change_number_price=1000;
			receive_fuel_alert=0;
		};

		/*** Licenses ***/
		class licenses_give
		{
			class membre_pnt
			{
				rank=0;
				same_side_only=0;
				license="admin";
			};

			class admin
			{
				rank=0;
				same_side_only=0;
				license="admin";
			};

			class emballageressources
			{
				rank=0;
				same_side_only=0;
				license="admin";
			};

			class tbo_rebelle
			{
				rank=0;
				same_side_only=0;
				license="admin";
			};

			class flt_rebelle
			{
				rank=0;
				same_side_only=0;
				license="admin";
			};

			class conexus_rebelle
			{
				rank=0;
				same_side_only=0;
				license="admin";
			};

			class driver
			{
				rank=0;
				same_side_only=0;
				license="company_driving_school";
			};
			class pilot: driver {};
			class truck: driver {};
			class boat: driver {};
			class moto: driver {};

			class gun
			{
				rank=0;
				same_side_only=0;
				license="company_gun";
			};
		};

		/*** COMPANIES ***/
		class companies
		{
			search=0;
			owner=1;
			employee=1;
			class create
			{
				license="membre_pnt";
			};
			class destroy
			{
				license="admin";
			};
			class history
			{
				license="membre_pnt";
				class clean
				{
					license="membre_pnt";
				};
			};
		};

		/*** SPAWN/RESPAWN ***/
		class respawn
		{
			marker="respawn_civilian";
			price=1000;
			suicide=0.05;
		};

		/*** HOUSING ***/
		class housing
		{
			search=0;
			max=3;
		};

		/*** HEAL ***/
		can_use_debrif=0;

		/*** SKULL ***/
		skull_who=0;
		skull_take=0;

		/*** INTERACTIONS ***/
		interaction_seize_gear=0;

		/*** LOADOUT ***/
		class Loadout
		{
			uniform="U_C_Poloshirt_blue";
			headgear="";
			vest="";
			backpack="TRYK_B_Coyotebackpack";
			items[]={};
		};

		/*** RANKS ***/
		class Ranks
		{
			ranks_complet[]=
			{
				"Citoyen",
				"Criminel",
				"Rebelle",
				"PNT"
			};
			ranks_short[]=
			{
				"Cit",
				"Crim",
				"Reb",
				"PNT"
			};
		};
	};

	class GUER
	{
		/*** GLOBAL ***/
		name="Pompiers";
		name_full="Bataillon des Marins-Pompiers de Tanoa";
		icon="Alysia_Client_Texture\Data\faction\GUER_logo.paa";
		identity_item="Alysia_Identity_Guer";

		/*** SALARY ***/
		class salary
		{
			name="Salaire";
			amount=875;
			apply_rank=1;
			timer=15;
		};

		/*** PHONE ***/
		class phone
		{
			change_number_price=1000;
			receive_fuel_alert=0;
			class send_global_message
			{
				rank=5;
			};
		};

		/*** COMPANIES ***/
		class companies
		{
			search=0;
			owner=0;
			employee=1;
		};

		class bank_faction
		{
			rank=6;
			payFuel=1;
		};

		/*** MAP ***/
		class map_coma_markers {};
		class map_factions_markers
		{
			shown[]={"GUER"};
		};

		/*** SPAWN/RESPAWN ***/
		class respawn
		{
			marker="respawn_guerrila";
			price=0;
			suicide=0;
		};

		/*** HOUSING ***/
		class housing
		{
			search=0;
			max=3;
		};

		/*** HEAL ***/
		can_use_debrif=1;

		/*** SKULL ***/
		skull_who=1;
		skull_take=1;

		/*** INTERACTIONS ***/
		interaction_seize_gear=0;

		/*** Licenses ***/
		class licenses_give
		{
			class pilot
			{
				rank=6;
				same_side_only=1;
			};
			class medical
			{
				rank=1;
				same_side_only=0;
				license="guer_medical";
			};
			class guer_medical
			{
				rank=6;
				same_side_only=1;
			};
			class guer_gen
			{
				rank=6;
				same_side_only=1;
			};
			class guer_chirurgien
			{
				rank=6;
				same_side_only=1;
			};
			class guer_inspector
			{
				rank=6;
				same_side_only=1;
			};
			class assr_medical
			{
				rank=1;
				same_side_only=0;
			};
		};

		/*** LEADER BOARD ***/
		class board
		{
			history_items[]={};
			class leader_board
			{
				access_rank=5;
			};
		};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform="rds_uniform_assistant";
			headgear="";
			vest="";
			backpack="";
			items[]={};
		};

		/*** RANKS ***/
		class Ranks
		{
			ranks_complet[]=
			{
				"Civil",
				"Matelot",
				"Quartier Maitre 2nde classe",
				"Quartier Maitre 1ère classe",
				"Second Maitre",
				"Maitre",
				"Premier Maitre",
				"Maitre Principal",
				"Major",
				"Aspirant",
				"Enseigne de Vaisseau",
				"Lieutenant de Vaisseau",
				"Capitaine de Corvette"
			};

			ranks_short[]=
			{
				"Civ",
				"MTL",
				"QM2",
				"QM1",
				"SM",
				"MT",
				"PM",
				"MP",
				"MJR",
				"ASP",
				"EV",
				"LV",
				"CC"
			};
		};
	};

	class WEST
	{
		/*** GLOBAL ***/
		name="PR";
		name_full="Police Rouge";
		icon="Alysia_Client_Texture\Data\faction\CIV_logo.paa";
		identity_item="Alysia_Identity_Civ";

		/*** SALARY ***/
		class salary
		{
			name="Salaire";
			amount=840;
			apply_rank=1;
			timer=15;
		};

		/*** PHONE ***/
		class phone
		{
			change_number_price=5000;
			receive_fuel_alert=1;
			class send_global_message
			{
				rank=5;
			};
			class central_plate {};
		};

		/*** COMPANIES ***/
		class companies
		{
			search=1;
			owner=1;
			employee=1;
			class history
			{
				rank=1;
				class clean
				{
					rank=5;
				};
			};
			class destroy
			{
				rank=5;
			};
			class create
			{
				rank=5;
			};
		};

		class bank_faction
		{
			rank=5;
			payFuel=1;
		};

		/*** Licenses ***/
		class licenses_seize
		{
			rank=3;
		};
		class licenses_give {};

		/*** MAP ***/
		class map_factions_markers
		{
			shown[]={"WEST"};
		};

		/*** SPAWN/RESPAWN ***/
		class respawn
		{
			marker="respawn_west";
			price=2200;
			suicide=0.2;
		};

		/*** HOUSING ***/
		class housing
		{
			search=1;
			max=3;
		};

		/*** HEAL ***/
		can_use_debrif=0;

		/*** SKULL ***/
		skull_who=0;
		skull_take=1;

		/*** INTERACTIONS ***/
		interaction_seize_gear=1;

		/*** LAUNDER ***/
		class launder_transfer
		{
			rank=1;
		};

		/*** LEADER BOARD ***/
		class board
		{
			history_items[]=
			{
				"RH_g17",
				"Alysia_MP44"
			};
			class leader_board
			{
				access_rank=5;
			};
		};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform="Alysia_Uniform_East_soldier_Parade";
			headgear="";
			vest="EF_BLT_M1";
			backpack="B_FieldPack_oli";
			items[]={};
		};

		/*** RANKS ***/
		class Ranks
		{
			ranks_complet[]=
			{
				"Civil",
				"Recrue",
				"Policier",
				"Lieutenant",
				"Major Général",
				"Général de Police"
			};

			ranks_short[]=
			{
				"Civ",
				"Rce",
				"Pol",
				"Lieut",
				"MG",
				"GDP"
			};
		};
	};
};
