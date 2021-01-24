class ALYSIA_MISSIONS
{
	class reb_1
	{
		name="Livraison rebelle";
		sides[]={"CIV"};
		condition="(true)";
		price=15000000;
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
				"Skyline_Mosin9130_03_F",
				"Skyline_Mosin9130_04_F",
				"Skyline_Mosin9130_Bayonette_01_F",
				"Skyline_Mosin9130_Bayonette_02_F",
				"Skyline_Mosin9130_Bayonette_03_F",
				"Skyline_Mosin9130_Bayonette_04_F",
				"Skyline_M4A1_01_F",
				"Skyline_M4A1_02_F",
				"RH_ttracker",
				"RH_deagle",
				"RH_Deaglem",
				"RH_Deagles",
				"RH_Deagleg",
				"RH_ttracker_g",
				"RH_bullb",
				"RH_bull",
				"Skyline_AKS_Rail_01_F"
			};
			magazines[]=
			{
				"30Rnd_556x45_Stanag",
				"5Rnd_762x54_Mosin",
				"RH_6Rnd_45ACP_Mag",
				"RH_7Rnd_50_AE",
				"30Rnd_762x39_AKM",
				"RH_6Rnd_454_Mag",
				"Bank_Bomb"
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
				"camoNet",
				"blueprint_tt_33",
				"blueprint_micro_uzi",
				"blueprint_pm73_rak",
				"blueprint_kimber_night_warrior",
				"blueprint_umateba_model_6_unica",
				"blueprint_taurus_raging_bull",
				"blueprint_ruger_mk2",
				"blueprint_taurus_tracker_455",
				"blueprint_desert_eagle",
				"blueprint_akm",
				"blueprint_M4A1",
				"blueprint_AKS",
				"blueprint_fnp_45",
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

	class east_1
    {
        name="Convoi Armée Nationale Tanocienne";
        sides[]={"EAST"};
        condition="((player getVariable ['rank',0]) >= 9)";
        price=10000000;
        vehicle="B_Truck_01_ammo_F";
        count_per_reboot=1;
        max_delivery_time=30;
        min_delivery_time=10;
        loop_count_random=35;
        loop_count_min=5;
        class stock
        {
            weapons[]=
            {
                "Skyline_Fal_01_F",
                "Skyline_Fal_02_F",
                "arifle_SPAR_01_blk_F",
                "arifle_SPAR_01_khk_F",
                "arifle_SPAR_02_khk_F",
                "arifle_SPAR_02_blk_F",
                "arifle_SPAR_03_khk_F",
                "arifle_SPAR_03_blk_F",
                "RH_fn57",
                "launch_NLAW_F",
                "Skyline_AugA1_01_F",
                "LMG_03_F",
                "srifle_DMR_07_blk_F",
                "arifle_CTAR_GL_blk_F"
            };
            magazines[]=
            {
                "20Rnd_762x51_Mag",
                "RH_20Rnd_57x28_FN",
                "150Rnd_556x45_Drum_Mag_Tracer_F",
                "20Rnd_762x51_Fal",
                "NLAW_F",
                "30Rnd_556x45_Stanag",
                "20Rnd_650x39_Cased_Mag_F",
                "200Rnd_556x45_Box_F",
                "UGL_FlareCIR_F",
                "UGL_FlareRed_F",
                "UGL_FlareGreen_F",
                "UGL_FlareWhite_F"
            };
            items[]=
            {
                "bipod_01_F_blk",
                "DemoCharge_Remote_Mag",
                "SmokeShellWhite",
                "Rangefinder",
                "O_NVGoggles_ghex_F",
                "O_NVGoggles_hex_F",
                "NVGoggles_OPFOR",
                "optic_DMS",
                "optic_Hamr",
                "optic_MRCO",
                "Mask_M40",
                "acc_pointer_IR"
            };
            virtuals[]=
            {
                "camoNet",
                "hedgehog",
                "destroy_archeo",
                "destroy_stand",
                "destroy_field",
                "destroy_labo"
            };
        };
		class prevent
		{
			needed_markers[]={"blackMarket_marker_1","blackMarket_marker_2"};
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

	class west_1
	{
		name="Convoi Guardia di Monti";
		sides[]={"WEST"};
		condition="((player getVariable ['rank',0]) >= 4)";
		price=0;
		vehicle="Alysia_GMC_West_01";
		count_per_reboot=1;
		max_delivery_time=30;
		min_delivery_time=10;
		loop_count_random=35;
		loop_count_min=5;
		class stock
		{
			weapons[]=
			{
				"arifle_ARX_blk_F",
				"Alysia_MG42"
			};
			magazines[]=
			{
				"30Rnd_65x39_caseless_green_mag_Tracer",
				"Alysia_MG42_magazine"
			};
			items[]=
			{
				"bipod_01_F_blk",
				"DemoCharge_Remote_Mag",
				"SmokeShellWhite",
				"Rangefinder",
				"O_NVGoggles_urb_F",
				"O_NVGoggles_ghex_F",
				"O_NVGoggles_hex_F",
				"optic_DMS",
				"optic_ACO_grn_smg",
				"optic_Hamr",
				"optic_MRCO",
				"Mask_M40",
				"NVGoggles"
			};
		};
		class prevent
		{
			needed_markers[]={"blackMarket_marker_1","blackMarket_marker_2"};
		};
	};
};
