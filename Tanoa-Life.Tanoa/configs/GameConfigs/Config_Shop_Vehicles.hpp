class ADENIS_SHOPS_VEHICLES
{
	
	class CIV_air
	{
		name="Concessionnaire aérien";
		createVehicle=1;
		stock[]=
		{
			"sab_a2",
			"Skyline_Vehicule_A3_M900_F",
			"Skyline_Vehicule_A3_Orca_F",
			"EC135Blanclu",
			"EC135Grislu",
			"Skyline_Vehicule_APEX_Caesar_BTT_F",
			/* Do-228 */
			"do228_ch_ac",
			"Loann_Do228_Lufthansa",
			"Cocazou_Do228_Swiss",
			/* C-17 */
			"USAF_C17",
			/* A320 */
			"A320_ch_AZ",
			"A320_ch_SN",
			"A320_ch_LH",
			/* B777 */
			"Loann_B777_Alitalia",
			"B777_ch_SING",
			"B777_ch_emirates"
		};
	};
	
	class CIV_ship: CIV_air
	{
		name="Concessionnaire maritime";
		stock[]=
		{
			"B_Boat_Transport_01_F",
			"C_Boat_Civil_01_F",
			"C_Scooter_Transport_01_F",
			"Skyline_Vehicule_APEX_RHIB_01_F",
			"C_Grady_White_01_F",
			"sab_boat"
		};
	};
	class CIV_concess: CIV_air
	{
		name="Concessionnaire entreprise Motors";
		createVehicle=0;
		stock[]=
		{
			"d3s_C63S_14",
			"d3s_amgGT_19_63S",
			"d3s_s560_18",
			"d3s_gl63AMG_12_SE",
			"d3s_panamera_turbo_17",
			"d3s_cayenne_turbo_s_16",
			"d3s_f87_17_ACH",
			"d3s_f80_14_SE",
			"d3s_f90_18_FE",
			"d3s_G07_x50i_19",
			"d3s_RS6_20_D",
			"d3s_Q7_15_D",
			"d3s_Ftype_19_SVR",
			"d3s_raptor_17",
			"d3s_stelvio_18_Ti",
			"d3s_evo_12_FQ",
			"d3s_svr_17_HSE",
			"d3s_boss_19",
			"d3s_evoque_16_se",
			"d3s_xesv_17",
			"d3s_xes_15_SE",
			"d3s_vogue_14_HSE",
			"d3s_e60_09_ACS5",
			"d3s_challenger_15_DM",
			"d3s_g65amg_Mansory",
			"d3s_urusMANS_19",
			"d3s_LP700_11_L",
			"d3s_amgGT_20_B",
			"d3s_malibu_18_Prem"
		};
	};
	class CIV_land_normal: CIV_air
	{
		name="Concessionnaire automobiles";
		stock[]=
		{
			"Mrshounka_Alfa_Romeo_civ",
			"Mrshounka_a3_dodge15_civ",
			"Mrshounka_mercedes_190_p_civ",
			"Mrshounka_a3_smart_civ",
			"shounka_avalanche",
			"shounka_a3_rs5_civ",
			"DAR_ChallengerCiv",
			"DAR_M3Civ",
			"Skyline_Audi_RS4",
			"Skyline_Ford_Transit",
			"Skyline_Peugeot_308",
			"Skyline_Vehicule_Jonzie_Mini_Cooper",
			"Skyline_Vehicule_Jonzie_Datsun_510",
			"Skyline_Vehicule_Jonzie_Corolla",
			"Skyline_Vehicule_Jonzie_Datsun_Z432",
			"Skyline_Vehicule_Jonzie_Raptor",
			"Skyline_Vehicule_Jonzie_Ceed",
			"Skyline_Vehicule_Jonzie_30CSL",
			"Skyline_Vehicule_Jonzie_XB",
			"Skyline_Jeep_Wrangler_Rubicon",
			"Skyline_Jeep_Wrangler",
			"Skyline_GMC_Vandura",
			"Skyline_Vehicule_APEX_MB_4WD",
			"Skyline_Vehicule_A3_Offroad",
			"C_Van_01_transport_F",
			"C_Van_01_box_F",
			"SAL_AudiCiv",
			"RDS_Golf4_Civ_01",
			"Dieter_Apolia_Chevrolet_ElCamino_aqua",
			"GeK_Cadillac_Fleetwood_Brougham_85",
			"GeK_M6",
			"Dieter_Apolia_Citroen_DS3_aqua",
			"GeK_Fiorino",
			"GeK_IS",
			"GeK_Insignia",
			"Dieter_Apolia_Peugot_107_aqua",
			"Dieter_Apolia_Clio",
			"GeK_Impreza",
			"GeK_Supra",
			"Dieter_Apolia_Golf_R_noir",
			"GeK_C30",
			"GeK_S60",
			"GeK_Zil",
			"Dieter_Apolia_UAZ_aqua",
			"GeK_Audi_Quattro",
			"chevrolet_Apache_chris20215",
			"Polaris_RZR_Turbo_chris20215",
			"Skyline_Mercedes_Sprinter",
			"AM_M939A2_chris20215_m939",
			"Golf2_16D",
			"Lemon_Jeep",
			"Lemon_Citroen_2CV",
			"Lemon_Volkswagen_Karmann_Ghia",
			"Lemon_Bronco",
			"Lemon_BMW_750i",
			"Lemon_Ford_A",
			"Lemon_Citroen_SM",
			"Lemon_Ural_Farm",
			"Lemon_Dac_Farm",
			"C_Truck_02_covered_F"
		};
	};
	class CIV_land_occasion: CIV_air
	{
		name="Concessionnaire d'occasions";
		stock[]=
		{
			"C_Quadbike_01_F",
			"RDS_Lada_Civ",
			"RDS_Gaz24_Civ",
			"ADM_Ford_F100",
			"Lemon_Peugeot_205_Turbo_16_Occasion",
			"Lemon_Citroen_2CV_Occasion",
			"Lemon_F350_Farm_1970",
			"Lemon_QUAD_HONDA_TRX450",
			"Lemon_Dac_Farm_Occasion"
		};
	};
	class CIV_land_Luxe: CIV_air
	{
		name="Concessionnaire de Luxe";
		stock[]=
		{
			"madsa_zl1_f",
			"shounka_monsteur",
			"Mrshounka_lykan_c",
			"Skyline_Vehicule_Shounka_F430_Scuderia",
			"Skyline_Vehicule_Shounka_McLaren_MP4",
			"Skyline_Vehicule_Shounka_Porsche911",
			"Skyline_Vehicule_Jonzie_Quattroporte",
			"Skyline_Vehicule_Jonzie_Viper",
			"Skyline_Lotus_Esprit",
			"GeK_250GT",
			"GeK_Mustang",
			"GeK_911_1972",
			"GeK_GTR",
			"GeK_Mercedes_ML63",
			"Lemon_Mercedes_300SL_1955"
		};
	};
	class CIV_jobs: CIV_air
	{
		name="Concessionnaire entreprises";
		side="CIV";
		createVehicle=0;
		stock[]=
		{
			/* company_transport_people */
			"Lemon_Chrysler_300C_Limousine",
			"Maels_Taxi",
			"Maels_Ikarus",
			/* company_garagist */
			"depanren_glr",
			"chdepanpl_glr",
			"chTransport_L_glr",
			"Skyline_Scania_G420_Depanneuse",
			"Skyline_Mercedes_Sprinter_Depannage",
			"Maels_Mercedes_Sprinter_fast_repair",
			"Skyline_Jeep_Wrangler_Rubicon_Depannage_01_F",
			"Alysia_garage_01",
			/* compagny_sevice */
			"chpush_back",
			"chchariot",
			"Cocazou_Pickup_Secu_Airwan",
			"Cocazou_Transport_Airwan_White_Gyro",
			/* company_money_tranfer */
			"Skyline_Brinks_01_F",
			/* company_farming */
			"RDS_Zetor6945_Base",
			/* company_location_sea */
			"Burnes_mk10",
			/* company_location_land */
			"Skyline_Scania_Streamline_Box",
			"d3s_actros_14",
			"Skyline_Vehicule_Shounka_Renault_Magnum",
			"GeK_Iveco_Stralis",
			/* company_fuel */
			"Skyline_Scania_Streamline_Citerne",
			/* company_press */
			/* company_driving_school */
			"Touareg_AET",
			"Maels_Lexus_is_AET",
			"Maels_Ikarus_AET",
			"Maels_magnum_AET",
			"Maels_ducati_AET",
			"Maels_boat_aet",
			"chcitan_civ_fm",
			"chcitan_vlcg",
			/* company_tourism */
			"R_HotairBalloon",
			/* company_music_label */
			"Maels_Vandura_GMC_special",
			"ADENIS_GMC_Fiestanoa",
			"depanren",
			"chdepanpl",
			"plateau",
			"chbenne",
			"chbetonniere"
			/* company_car_shop
			"Lemon_Peterbilt_1999",
			"Lemon_Navistar"*/
		};
	};
	class CIV_land_moto: CIV_air
	{
		name="Concessionnaire deux roues";
		stock[]=
		{
			"Mrshounka_ducati_p_base",
			"Mrshounka_yamaha_p_base",
			"shounka_harley_a3",
			"Lemon_Ducati_Diavel",
			"GSXR_ch",
			"690duke_ch",
			"fatboy_ch",
			"1150RT_ch",
			"1200RT_ch",
			"S1000RR_2013_ch",
			"xj6_ch",
			"FJR1300_ch",
			"bmx_ch",
			"course2_ch",
			"cruiser_ch",
			"vtt_ch"
		};
	};
	class CIV_rebelle: CIV_air
	{
		name="Concessionnaire rebelle";
		side="CIV";
		createVehicle=0;
		stock[]=
		{
			"Mrshounka_hummer_civ",
			"madsa_hummer_h2",
			"Skyline_Vehicule_A3_Offroad_Rebelle",
			"Skyline_Vehicule_A3_Offroad_Armed_Rebelle",
			"Skyline_MTVR_4X4",
			"Skyline_MTVR_MK23",
			"Skyline_MTVR_MK27T",
			"Skyline_MTVR_MK27",
			"Skyline_MTVR_LHS_16",
			"Skyline_Vehicule_A3_M900_F_rebel",
			"Skyline_Vehicule_A3_MH9_Unarmed_F_rebel",
			"GeK_Raptor",
			"GeK_G65",
			"Lemon_Mercedes_ML_63_Rebelle",
			"Lemon_Mercedes_ML_63_Rebelle_Kaki",
			"Skyline_Vehicule_APEX_RHIB_02_F",
			"MH9_EIT",
			"ffaa_ar_lcm",
			"AlessioRS4MatGofast",
			"AlessioRS5GoFastMat",
			"AlessioM5GofastMat",
			"AlessioMustangGoFastMat",
			"AlessioC63Black_mat"
		};
	};

	class GUER
	{
		name="Concessionnaire SAMU";
		createVehicle=0;
		side="GUER";
		stock[]=
		{
			/* Véhicules Terrestres */
			"Skyline_Mercedes_Sprinter_Samu",
			"Skyline_VW_TouaregR50_Samu_01_F",
			"Skyline_VW_TouaregR50_Samu_02_F",
			"Jonzie_Ambulance",
			"Mrshounka_corbillard_base_p",
			"GeK_TLC100_Medic",
			"FPTL_BSPP",
			"RealMan_FPTScaniaBSPSG",
			"CCRM_BSPP",
			"chepa_Scania_124L",
			"Iveco_Daily_VPC_BSPP",
			"chOshkosh_striker_3000",
			"RealMan_X3VL",
			"RealMan_Megane4VL",
			"RealMan_SprinterG3",
			"RealMan_Master3VSAVBSPSG",
			"RealMan_Trafic3VBECL",
			"devidoirch",
			"brancardch",
			"CSP_BSPP",
			"umh_down",
			"trafic3_ml",
			"Realman_X3VLI",
			"RealMan_Megane4SAMU",
			/* Véhicules Aériens */
			"Skyline_Agusta_Bell_01_F",
			"EC635_ADAC",
			/* Véhicules Navals */
			"Maels_boat_samu"
		};
	};

	class EAST
	{
		name="Concessionnaire ANT";
		createVehicle=0;
		side="EAST";
		stock[]=
		{
			/* Véhicules Terrestres non armés */
			"Alysia_GMC_East_Base",
			"Alysia_R71_East_Base",
			"Alysia_Opelblitz_East_Base",
			"Alysia_Minicooper_East_Base",
			"Gurkha_f5",
			"B_Truck_01_ammo_F",
			"iD_Jeep_Willys_Cmd",
			"Alysia_Willys_philidor",
			"Alysia_Willys_rochefort",
			"Alysia_Willys_droolens",
			"Alysia_Willys_gomez",
			"Alysia_Willys_matariki",
			"Lemon_Jeep_ANT",
			"Lemon_Bronco_ANT",
			"ANT_Prowler",
            "Skyline_Vehicule_APEX_Prowler_01_F",
			/* Véhicules Terrestres armés */
			"Gurkha_M60",
			"Alysia_Willys_philidor_armed",
			"Alysia_Willys_rochefort_armed",
			"Alysia_Willys_droolens_armed",
			"Alysia_Willys_gomez_armed",
			"Alysia_Willys_matariki_armed",
			"Alysia_APC_East",
			/* Véhicules Navals */
			"B_Boat_Armed_01_minigun_F",
			"ANT_RHIB",
			"Maels_boat_ant",
			/* Véhicules Aériens */
			"Alysia_heli_light_East_01",
			"Alysia_EC635_East_01",
			"B_T_VTOL_01",
			"Alysia_Hellcat_East_01",
			"MH9_BDR",
			"EC135Unarmedlu"
		};
	};

	class WEST
	{
		name="Concessionnaire Cuba";
		createVehicle=0;
		side="WEST";
		stock[]=
		{
			/* Véhicules Terrestres non armés */
			"Skyline_Vehicule_A3_Offroad_05_F",
			"Skyline_MTVR_4X4",
			"Skyline_MTVR_MK23",
			"Skyline_MTVR_MK27",
			"Skyline_MTVR_MK27T",
			"RDS_JAWA353_Civ_01",
			"Lemon_Jeep_kaki",
			"Skyline_Vehicule_APEX_MB_4WD_05_F",
			"RDS_tt650_Civ_01",
			"GeK_Cadillac_Fleetwood_Brougham_85_09",
			/* Véhicules Terrestres armés */
			/* Véhicules Navals */
			/* Véhicules Aériens */
			"I_C_Heli_Light_01_civil_F"

		};
	};
};
