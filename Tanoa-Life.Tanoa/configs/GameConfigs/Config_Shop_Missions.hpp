class ADENIS_MISSIONS
{
	class reb_1
	{
		name="Convoi de l'Amerloque";
		sides[]={"CIV"};
		condition="(true)";
		price=30000000;
		vehicle="Diablo_Coffre_Large";
		count_per_reboot=-1;
		max_delivery_time=30;
		min_delivery_time=10;
		loop_count_random=-1;
		loop_count_min=32;
		class stock
		{
			weapons[]=
			{
				"Skyline_Mosin9130_01_F",
				"Skyline_Mosin9130_02_F",
				"Skyline_Mosin9130_Bayonette_03_F",
				"Skyline_Mosin9130_Bayonette_04_F",
				"Skyline_M4A1_02_F",
				"Skyline_M4A1_02_F",
				"RH_deagle",
				"RH_Deaglem",
				"hlc_rifle_ak74_MTK",
				"hlc_rifle_aks74_MTK",
				"hlc_rifle_aku12",
				"hlc_rifle_aek971_mtk",
				"RH_Deagles",
				"RH_Deagleg"
			};
			magazines[]=
			{
				"30Rnd_556x45_Stanag",
				"RH_6Rnd_45ACP_Mag",
				"hlc_30Rnd_545x39_B_AK",
				"RH_7Rnd_50_AE",
				"RH_6Rnd_454_Mag"
			};
			items[]=
			{
				"optic_Hamr",
				"optic_Hamr_khk_F",
				"optic_MRCO",
				"optic_MRCO",
				"optic_Holosight_blk_F",
				"optic_Holosight_smg",
				"optic_Holosight_smg_blk_F",
				"optic_Aco",
				"optic_ACO_grn",
				"optic_Aco_smg",
				"optic_ACO_grn_smg",
				"optic_Arco_blk_F",
				"optic_Arco_ghex_F",
				"optic_Arco",
				"mgsr_headbag",
				"Skyline_GasMask",
				"Skyline_optic_PSO1"
			};
			virtuals[]=
			{
				"camoNet",
				"blueprint_tt_33",
				"blueprint_micro_uzi",
				"blueprint_pm73_rak",
				"blueprint_umateba_model_6_unica",
				"blueprint_taurus_tracker_455",
				"blueprint_desert_eagle",
				"blueprint_akm",
				"blueprint_M4A1",
				"blueprint_hedgehog",
				"blueprint_watchpost_tall",
				"blueprint_watchpost_small",
				"blueprint_watchtower_wood"
			};
		};
		class prevent
		{
			needed_markers[]={"blackMarket_marker_1","blackMarket_marker_2"};
		};
	};

	class reb_2
	{
		name="Convoi de Blanchito";
		sides[]={"CIV"};
		condition="(true)";
		price=10000000;
		vehicle="Diablo_Coffre_Large";
		count_per_reboot=-1;
		max_delivery_time=30;
		min_delivery_time=10;
		loop_count_random=-1;
		loop_count_min=32;
		class stock
		{
			weapons[]=
			{
				"RH_ttracker",
				"C1987_MP7",
				"C1987_MP7_folded",
				"RH_deagle",
				"RH_Deaglem",
				"RH_Deagles",
				"RH_Deagleg",
				"RH_ttracker_g",
				"RH_bullb",
				"RH_bull"
			};
			magazines[]=
			{
				"RH_6Rnd_45ACP_Mag",
				"C1987_40Rnd_46x30_mp7",
				"RH_7Rnd_50_AE",
				"RH_6Rnd_454_Mag"
			};
			items[]=
			{
				"optic_Hamr",
				"optic_Hamr_khk_F",
				"optic_MRCO",
				"optic_MRCO",
				"optic_Holosight_blk_F",
				"optic_Holosight_smg",
				"optic_Holosight_smg_blk_F",
				"optic_Aco",
				"optic_ACO_grn",
				"optic_Aco_smg",
				"optic_ACO_grn_smg",
				"optic_Arco_blk_F",
				"optic_Arco_ghex_F",
				"optic_Arco",
				"mgsr_headbag",
				"G_Bandanna_blk",
				"Skyline_GasMask",
				"Skyline_optic_PSO1"
			};
			virtuals[]=
			{
				"blueprint_protector",
				"blueprint_micro_uzi",
				"blueprint_pm73_rak",
				"blueprint_kimber_night_warrior",
				"blueprint_umateba_model_6_unica",
				"blueprint_taurus_raging_bull",
				"blueprint_ruger_mk2",
				"blueprint_protector",
				"fauxpapiers",
				"blueprint_taurus_tracker_455",
				"blueprint_desert_eagle"
			};
		};
		class prevent
		{
			needed_markers[]={"blackMarket_marker_1","blackMarket_marker_2"};
		};
	};

	class east_1
    {
        name="Convoi Régime Autocratique Communiste";
        sides[]={"EAST"};
        condition="((player getVariable ['rank',0]) >= 9)";
        price=1000000;
        vehicle="B_Truck_01_ammo_F";
        count_per_reboot=1;
        max_delivery_time=30;
        min_delivery_time=10;
        loop_count_random=65;
        loop_count_min=40;
        class stock
        {
            weapons[]=
            {
                "hlc_rifle_M27IAR",
                "hlc_rifle_ak74m_MTK",
                "hlc_rifle_aks74u",
                "hlc_rifle_aks74_MTK",
                "hlc_rifle_ak12",
                "hlc_rifle_ak74_MTK",
                "hlc_rifle_aek971_MTK"
            };
            magazines[]=
            {
                "hlc_30rnd_556x45_EPR",
                "hlc_30Rnd_545x39_B_AK"
            };
            items[]=
            {
                "bipod_01_F_blk",
                "optic_Hamr",
                "optic_MRCO"
            };
            virtuals[]=
            {
                "destroy_labo"
            };
        };
	};

	class guer_1
	{
		name="Convoi SAMU";
		sides[]={"GUER"};
		condition="((player getVariable ['rank',0]) >= 6)";
		price=0;
		vehicle="Zamak_SAMU";
		count_per_reboot=1;
		max_delivery_time=30;
		min_delivery_time=10;
		loop_count_random=40;
		loop_count_min=5;
		class stock
		{
			items[]=
			{
				"SmokeShellGreen",
				"SmokeShellRed"
			};
			weapons[]=
			{
				"hgun_Pistol_Signal_F"
			};
			magazines[]=
			{
				"SkylineItems_Adrenaline",
				"SkylineItems_Morphine",
				"SkylineItems_Defibrilateur",
				"6Rnd_RedSignal_F",
				"6Rnd_GreenSignal_F"
			};
			virtuals[]=
			{
				"medoc_rhume",
				"medoc_toux_1",
				"medoc_toux_2",
				"scalpel",
				"adn",
				"stethoscope"
			};
		};
	};

	//class west_1
	//{
		//name="Convoi CSC";
		//sides[]={"WEST"};
		//condition="((player getVariable ['rank',0]) >= 4)";
		//price=0;
		//vehicle="Alysia_GMC_West_01";
		//count_per_reboot=1;
		//max_delivery_time=30;
		//min_delivery_time=10;
		//loop_count_random=35;
		//loop_count_min=5;
		//class stock
		//{
		//	weapons[]=
		//	{
		//		"arifle_ARX_blk_F",
		//		"Alysia_MG42"
		//	};
		//	magazines[]=
		//	{
		//		"30Rnd_65x39_caseless_green_mag_Tracer",
		//		"Alysia_MG42_magazine"
		//	};
		//	items[]=
		//	{
		//		"bipod_01_F_blk",
		//		"DemoCharge_Remote_Mag",
		//		"SmokeShellWhite",
		//		"Rangefinder",
		//		"O_NVGoggles_urb_F",
		//		"O_NVGoggles_ghex_F",
		//		"O_NVGoggles_hex_F",
		//		"optic_DMS",
		//		"optic_ACO_grn_smg",
		//		"optic_Hamr",
		//		"optic_MRCO",
		//		"Mask_M40",
		//		"NVGoggles"
		//	};
	//	};
	//	class prevent
	//	{
	//		needed_markers[]={"blackMarket_marker_1","blackMarket_marker_2"};
	//	};
	//};
//};
