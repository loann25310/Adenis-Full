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
			"il18d",
			"il62m",
			"il76td",
			"il86",
			"tu114",
			"TU134",
			"tu154",
			"Mi2NO_Cargo",
			"an12bkv3",
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
			"AlessioR8",
			"V12_X6S_MET",
			"V12_ESCALADE",
			"V12_BELAIR_BLANC",
			"V12_CORVETTE_MK12_BLANC",
			"V12_CHEVELLESSBJ_NOIR",
			"V12_RT",
			"V12_DEMON_BLANC",
			"Alessio458",
			"AlessioGTB",
			"V12_GTC4_BLANC",
			"AlessioSuperfast",
			"AlessioMustang",
			"AlessioAventador",
			"V12_GHIBLI",
			"AlessioGTR",
			"V12_M600",
			"AlessioCayman",
			"Alessio918",
			"AlessioAgera",
			"V12_GHOST_BLANC",
			"V12_ROYAL_BLANC",
			"V12_DIVORB",
			"V12_GT2RS_ROUGE",
			"AlessioHuayra",
			"V12_EMPEROR",
			"AlessioPanamera",
			"AlessioGallardoMat"
		};
	};
	class CIV_concess_2: CIV_air
	{
		name="Concessionnaire entreprise Nora Auto";
		createVehicle=0;
		stock[]=
		{
			"AlessioQuadrifoglio",
			"AlessioRS4",
			"AlessioRS5",
			"V12_RS6AV_BLANCM",
			"V12_E46_NOIRM",
			"V12_GTS3",
			"AlessioBM4",
			"V12_FOCUSST12_BLANC",
			"V12_FREIGHTLINER3",
			"V12_VENDURA_BLANC",
			"V12_CIVIC_NOIR",
			"V12_AMGGT_BLANCM",
			"V12_CL65",
			"V12_GL63AMG_BLANC",
			"AlessioC63N",
			"AlessioIXMR",
			"V12_SVR_BLANC",
			"AlessioVIR",
			"AlessioTouareg",
			"V12_R34M_NOIR"
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
			// "AM_M939A2_chris20215_m939",
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
			"GeK_Civilian_H1",
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
			"Skyline_Vehicule_APEX_RHIB_02_F",
			"AlessioRS5GoFastMat",
			"AlessioM5GofastMat",
			"AlessioC63Black_mat",
			"Peck_MercedesBenz_G65_Rebelle_1",
			"Peck_MercedezBenz_ML63_Rebelle_1"
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
			"AdenisUMH",
			"AdenisVSAV_Sprinter_G3",
			"AdenisVSAV_Master_3",
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
		name="Concessionnaire RAC";
		createVehicle=0;
		side="EAST";
		stock[]=
		{
			"B_T_LSV_01_unarmed_F",
			"Diablo_Ford_F150_SMP",
			"B_Heli_Light_01_F",
			"B_Boat_Transport_01_F",
			"JB_mkvsoc",
			"SRB_JEEP_MP",
			"SRB_Prowler_Multicam",
			"SRB_KAMAZ_AMMO",
			"SRB_KAMAZ_COVERED",
			"I_MRAP_03_F",
			"SRB_Heli_Light_01_F",
			"I_Heli_light_03_unarmed_F",
			"I_Heli_Transport_02_F"
		};
	};

	class CIV_casino
	{
		name="Concessionnaire casino";
		createVehicle=1;
		stock[]=
		{

			"V12_RS7_BLANC",
			"V12_RS7BW_BLANC"
		};
	};

	class WEST
	{
		name="Concessionnaire CSC";
		createVehicle=0;
		side="WEST";
		stock[]=
		{
			"RDS_JAWA353_Civ_01",
			"RDS_tt650_Civ_01",
			"V12_MEGANERS18BANA"
		};
	};
};
