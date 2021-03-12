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
			"cassouletemba"
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
			"horn_west",
			"perqui",
			"destroy_labo",
			"blueprint_glock",
			"blueprint_g17"
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
			"cone",
			"barriere",
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
			"marijuana",
			"methp",
			"heroinps",
			"cocainepc",
			"mushroom_bocal",
			"cacaop",
			"tabchoco",
			"cassoulet",
			"coffeec",
			"sugar",
			"rare_earth",
			"champagne",
			"rhum",
			"beer",
			"glass"
			"ironp",
			"soufre",
			"steelp",
			"cigarette",
			"furniture",
			"cottonp",
			"wood",
			"woodp",
			"amethyste",
			"saphir",
			"topaze",
			"volcano",
			"artefact_R",
			"artefact",
			"objvaleur",
			"turtle",
			"cigare",
			"corail",
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
			"beer"
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
		sell[]={"woodp"};
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
			"lab_meth",
			"lab_cocaine",
			"lab_heroin",
			"lab_cigare",
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
