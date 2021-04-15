class ADENIS_SHOPS_VIRTUAL
{
	/* GLOBAL MARKET */
	class fishmarket
	{
		name="Poissonnerie";
		side="CIV";
		sell[]=
		{
			"crabe",
			"crevette",
			"star",
			"oursin"
		};
	};

	class farmingmarket
	{
		name="Marché";
		side="CIV";
		buy[]=
		{
			"coffee_seed",
			"corn_seed",
			"bean_seed",
			"cotton_seed",
			"wheatseed",
			"tabac_seed",
			"engrais"
		};
		sell[]=
		{
			"ginger",
			"banana",
			"sugar_cane",
			"cotton",
			"bean",
			"corn",
			"wheat",
			"coconut"
		};
	};

	class station_service
	{
		name="Station service";
		buy[]=
		{
			"chips",
			"chocolat",
			"villagoise",
			"eau50"
		};
	};

	class market
	{
		name="Supérette";
		buy[]=
		{
			"water",
			"sparklingwater",
			"soda",
			"sandwich"
		};
	};

	class barrecereales
	{
		name="Commerçant de barre de céréales";
		sell[]=
		{
			"barrecereales",
			"bounty"
		};
	};

	class exportateur_ciment
	{
		name="Exportateur de ciment";
		sell[]=
		{
			"ciment"
		};
	};

	class hopital
	{
		name="Hopital";
		buy[]=
		{
			"patch",
			"water",
			"sandwich"
		};
	};

	class companies
	{
		name="Réserve d'entreprises";
		side="CIV";
		buy[]=
		{
			"oilu",
			"barriere",
			"barriere3",
			"cone",
			"coneflash",
			"tmpgauche",
			"tmpdroite",
			"p50temp",
			"p30temp",
			"raisin_black_seed",
			"raisin_white_seed",
			"olive_seed",
			"houblon_seed",
			"orge_seed",
			"yeast",
			"egg",
			"butter",
			"salt",
			"milk",
			"pork",
			"beef",
			"pouletcook",
			"frite",
			"caviar",
			"fraise",
			"burger",
			"kebab",
			"lasagne",
			"macaron",
			"carbo",
			"purer",
			"saucisson",
			"bolo",
			"homar",
			"langouste",
			"chantilly",
			"firework",
			"peinture",
			"shotalcool",
			"riz_seed",
			"patate_seed",
			"gentiane_seed",
			"anis_seed",
			"tomato_seed",
			"pumpkin_seed",
			"zucchini_seed",
			"sunflower_seed",
		};
		sell[]=
		{
			"furniture",
			"furniturepa",
			"Cigarettepa",
			"glassemba",
			"tabchocoemba",
			"steelppa",
			"planchefruitdemer",
			"cassouletemba",
			"cafeemballe"
		};
	};

	/* FACTIONS */
	class west
	{
		name="Réserve de la Garde";
		side="WEST";
		buy[]=
		{
			"sifflet",
			"handcuffs",
			"handcuffkeys",
			"cone",
			"barriere",
			"bargate",
			"spikeStrip",
			"horn_west"
		};
	};
	class east
	{
		name="Réserve de l'armée";
		side="EAST";
		buy[]=
		{
			"sifflet",
			"handcuffs",
			"handcuffkeys",
			"perqui",
			"destroy_archeo",
			"destroy_stand",
			"destroy_field",
			"destroy_labo",
			"cone",
			"barriere",
			"bargate",
			"spikeStrip",
			"horn_east"
		};
	};
	class guer
	{
		name="Réserve du SAMU";
		side="GUER";
		buy[]=
		{
			"horn_guer",
			"brancard",
			"medoc_rhume",
			"medoc_toux_1",
			"medoc_toux_2",
			"medoc_depression"
			};
		sell[]=
		{
			"smecta",
			"doliprane"
		};
	};
	//////////////////////////////////Moderation/////////////////////////////
	class adminshop
	{
		name="Shop Modération";
		side="CIV";
		buy[]=
		{
			"amethyste",
			"artefact_R",
			"artefact",
			"barriere",
			"barriere3",
			"beef",
			"beer",
			"bolo",
			"burger",
			"butter",
			"cacaop",
			"carbo",
			"cassoulet",
			"caviar",
			"champagne",
			"chantilly",
			"cigarette",
			"cigare",
			"coffeec",
			"cone",
			"coneflash",
			"corail",
			"cottonp",
			"egg",
			"firework",
			"fraise",
			"frite",
			"furniture",
			"glass",
			"handcuffs",
			"handcuffkeys",
			"homar",
			"houblon_seed",
			"ironp",
			"kebab",
			"langouste",
			"lasagne",
			"macaron",
			"medoc_rhume",
			"medoc_toux_1",
			"milk",
			"nitro",
			"objvaleur",
			"oilu",
			"olive_seed",
			"orge_seed",
			"p50temp",
			"p30temp",
			"peinture",
			"pork",
			"pouletcook",
			"purer",
			"raisin_black_seed",
			"raisin_white_seed",
			"rare_earth",
			"rhum",
			"salt",
			"saphir",
			"saucisson",
			"shotalcool",
			"soufre",
			"steelp",
			"sugar",
			"tabchoco",
			"tmpgauche",
			"tmpdroite",
			"topaze",
			"turtle",
			"volcano",
			"wood",
			"woodp",
			"yeast"
		};
	};

	class adminshopBP
	{
		name="Shop Modération BP";
		side="CIV";
		buy[]=
		{
			"blueprint_uniformeMIT",
			"blueprint_helmetMIT",
			"blueprint_giletMIT",
			"blueprint_gsh18",
			"blueprint_sig",
			"blueprint_RH_g17",
			"blueprint_g17",
			"blueprint_mp44",
			"blueprint_tec9",
			"blueprint_micro_uzi",
			"blueprint_vp70",
			"blueprint_m9",
			"blueprint_m1911",
			"blueprint_cz75",
			"blueprint_protector",
			"blueprint_ump_45",
			"blueprint_fnp_45",
			"blueprint_pm73_rak",
			"blueprint_rook_40",
			"blueprint_pm_9mm",
			"blueprint_sw_659",
			"blueprint_tt_33",
			"blueprint_blaser_b95",
			"blueprint_glock",
			"blueprint_kimber_night_warrior",
			"blueprint_umateba_model_6_unica",
			"blueprint_usp_40_match",
			"blueprint_taurus_raging_bull",
			"blueprint_vermin_smg",
			"blueprint_ruger_mk2",
			"blueprint_taurus_tracker_455",
			"blueprint_desert_eagle",
			"blueprint_akm",
			"blueprint_car_95",
			"blueprint_M4A1",
			"blueprint_DP_28",
			"blueprint_AKS",
			"blueprint_AK12",
			"blueprint_SVD",
			"blueprint_sdar",
			"blueprint_mp5",
			"blueprint_vz61",
			"blueprint_mp7",
			"blueprint_hk416",
			"blueprint_hk417",
			"blueprint_guardia",
			"blueprint_CONEXUS",
			"blueprint_hedgehog",
			"blueprint_watchpost_tall",
			"blueprint_watchpost_small",
			"blueprint_watchtower_wood"
		};
	};

	class adminshopDrg
	{
		name="Shop Modération Drogues";
		side="CIV";
		buy[]=
		{
			"cannabis_seed",
			"cocainepc",
			"cocaine_seed",
			"heroinps",
			"heroin_seed",
			"lab_marijuana",
			"marijuana",
			"methp",
			"meth_seed",
			"mushroom_bocal",
			"mushroom_seed"
		};
	};
	/* RESSOURCES */
	class dealer
	{
		name="Dealer";
		side="CIV";
		sell[]={"marijuana","methp","heroinps","cocainepc","mushroom_bocal"};
	};
	class cacao: dealer
	{
		name="Commerçant de cacao";
		sell[]={"cacaop","tabchoco"};
	};
	class coffee: dealer
	{
		name="Commerçant de café";
		sell[]={"coffeec"};
	};
	class cassoulet: dealer
	{
		name="Commerçant de cassoulet";
		sell[]={"cassoulet"};
	};
	class sugar: dealer
	{
		name="Commerçant de sucre de canne";
		sell[]={"sugar"};
	};
	class earth: dealer
	{
		name="Commerçant de Terres rares";
		sell[]={"rare_earth"};
	};
	class alcohol: dealer
	{
		name="Commerçant d'alcool";
		sell[]={
			"champagne",
			"rhum",
			"beer",
			"beer_canette",
			"nukaquartz"
		};
	};
	class glass: dealer
	{
		name="Commerçant de verre";
		sell[]={"glass"};
	};
	class iron: dealer
	{
		name="Commerçant de fer";
		sell[]={"ironp","soufre","steelp"};
	};
	class tabac: dealer
	{
		name="Commerçant de cigarette";
		sell[]={"cigarette"};
	};
	class furniture: dealer
	{
		name="Commerçant de meuble";
		sell[]={"furniture"};
	};
	class textile: dealer
	{
		name="Commerçant de textile";
		sell[]={"cottonp"};
	};
	class wood: dealer
	{
		name="Commerçant de bûche";
		sell[]={"wood"};
	};
	class woodp: dealer
	{
		name="Commerçant de planche";
		sell[]={"woodp", "cartonp"};
	};
	class volcano: dealer
	{
		name="Commerçant de roche volcanique";
		sell[]={"amethyste","saphir","topaze","volcano"};
	};
	class rebel: dealer
	{
		name="Marché rebelle";
		buy[]=
		{
			"handcuffs",
			"handcuffkeys",
			"lab_marijuana",
			"lab_mushroom",
			"lab_heal",
			"lab_gun",
			"lab_construction"
		};
	};
	class black_market: dealer
	{
		name="Marché noir";
		sell[]=
		{
			"artefact_R",
			"artefact",
			"objvaleur",
			"turtle",
			"cigare",
			"corail",
			"amethyste",
			"saphir",
			"topaze",
			"volcano"
		};
		buy[]=
		{
			"handcuffs",
			"handcuffkeys",
			"nitro",
			"cannabis_seed",
			"lab_marijuana",
			"heroin_seed",
			"cocaine_seed",
			"meth_seed",
			"mushroom_seed"
		};
	};
};
