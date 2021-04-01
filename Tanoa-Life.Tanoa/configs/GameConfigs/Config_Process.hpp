class ADENIS_PROCESS
{
	// Sons disponibles : "cement_mix" | "collectoil" | "cooking" | "drug_process" | "salt_process" | "smelting"
	/* ====================================== SAMU ===================================== */
	class vaccin_rhume
	{
		name="Fabrication de vaccin contre le Rhume";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"seringue",1},{"millettia",2}};
		};
		class receive
		{
			items_arma[]={"Alysia_Vaccin_Rhume"};
		};
		time_per_item=4;
		time_default=3;
		class target {};
		class factions
		{
			class GUER {};
		};
	};
	class vaccin_toux: vaccin_rhume
	{
		name="Fabrication de vaccin contre la Toux";
		class require
		{
			items_virtual[]={{"seringue",1},{"ginger",1},{"cacaop",2}};
		};
		class receive
		{
			items_arma[]={"Alysia_Vaccin_Toux"};
		};
	};
	/* ====================================== illegal stands ===================================== */
	class archeologue
	{
		name="Rénovation";
		sound="cooking";
		class require
		{
			items_virtual[]={{"artefact",1}};
		};
		class receive
		{
			items_virtual[]={{"artefact_R",1}};
		};
		time_per_item=3;
		time_default=3;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[]={"archeologie"};
			};
		};
	};
	class soufre
	{
		name="Hydratation du soufre";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"soufre",2},{"water",1}};
		};
		class receive
		{
			items_virtual[]={{"hsoufre",2}};
		};
		time_per_item=2;
		time_default=2;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	/* ====================================== laboratories ===================================== */
	class cigare
	{
		name="Traitement du tabac en cigare";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"tabac",1}};
		};
		class receive
		{
			items_virtual[]={{"cigare",1}};
		};
		time_per_item=3;
		time_default=2;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class cigareclothing : cigare
	{
		name="Fabrication : cigare (vêtement)";
		class require
		{
			items_virtual[]={{"cigare",1}};
		};
		class receive
		{
			items_arma[]={"immersion_cigs_cigar0"};
		};
		time_per_item=2;
		time_default=7;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class heroin
	{
		name="Traitement de l'héroine";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"heroin",1}};
		};
		class receive
		{
			items_virtual[]={{"heroinp",1}};
		};
		time_per_item=4;
		time_default=15;
		class target
		{
			smoke_type="SmokeShellYellow";
		};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class seringueheroin: heroin
	{
		name="Traitement des seringues d'héroine";
		class require
		{
			items_virtual[]={{"heroinp",1},{"seringue",2}};
		};
		class receive
		{
			items_virtual[]={{"heroinps",2}};
		};
		time_per_item=2;
		class target {};
	};

	class cocaine
	{
		name="Traitement de la cocaine";
		sound="collectoil";
		class require
		{
			items_virtual[]={{"cocaine",1}};
		};
		class receive
		{
			items_virtual[]={{"cocainep",2}};
		};
		time_per_item=4;
		time_default=10;
		class target
		{
			smoke_type="SmokeShellGreen";
		};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class cocainec: cocaine
	{
		name="Coupe de la cocaine";
		sound="cooking";
		class require
		{
			items_virtual[]={{"cocainep",1},{"glass",2}};
		};
		class receive
		{
			items_virtual[]={{"cocainepc",2}};
		};
		time_per_item=2;
	};

	class meth
	{
		name="Traitement de la Méthamphétamine";
		sound="cooking";
		class require
		{
			items_virtual[]={{"meth",1},{"hsoufre",1}};
		};
		class receive
		{
			items_virtual[]={{"methp",2}};
		};
		time_per_item=4;
		time_default=15;
		class target
		{
			smoke_type="SmokeShellBlue";
		};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class marijuana
	{
		name="Traitement du cannabis";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cannabis",1}};
		};
		class receive
		{
			items_virtual[]={{"marijuana",3}};
		};
		time_per_item=2;
		time_default=7;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class join
	{
		name="Traitement du join de cannabis";
		sound="smelting";
		class require
		{
			items_virtual[]={{"marijuana",3}};
		};
		class receive
		{
			items_arma[]={"HG_Weed_0"};
		};
		time_per_item=2;
		time_default=7;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class mushroom
	{
		name="Séchage des champignons";
		sound="cooking";
		class require
		{
			items_virtual[]={{"mushroom",1}};
		};
		class receive
		{
			items_virtual[]={{"mushroom_dry",2}};
		};
		time_per_item=2;
		time_default=7;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class mushroom_bocal: mushroom
	{
		name="Mise en bocal des champignons";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"mushroom_dry",2},{"bocal",1}};
		};
		class receive
		{
			items_virtual[]={{"mushroom_bocal",1}};
		};
	};

	class bag_01
	{
		name="Fabrication : Mur de sacs de sable";
		class require
		{
			items_virtual[]={{"sand",7}};
		};
		class receive
		{
			items_virtual[]={{"bagfence_01",1}};
		};
		time_per_item=7;
		time_default=5;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class bag_02: bag_01
	{
		name="Fabrication : Mur de sacs de sable courbé";
		class receive
		{
			items_virtual[]={{"bagfence_02",1}};
		};
	};
	class hedgehog: bag_01
	{
		name="Fabrication : Hérisson Tchèque";
		class require
		{
			items_virtual[]={{"steelp",4}};
		};
		class receive
		{
			items_virtual[]={{"hedgehog",1}};
		};
	};
	class watchtower_wood: bag_01
	{
		name="Fabrication : Tour de guet en bois";
		class require
		{
			items_virtual[]={{"woodp",15}};
		};
		class receive
		{
			items_virtual[]={{"watchtower_wood",1}};
		};
	};
	class watchpost_tall: bag_01
	{
		name="Fabrication : Poste de garde (grand)";
		sound="smelting";
		class require
		{
			items_virtual[]={{"ironp",25}};
		};
		class receive
		{
			items_virtual[]={{"watchpost_tall",1}};
		};
	};
	class watchpost_small: bag_01
	{
		name="Fabrication : Poste de garde (petit)";
		sound="smelting";
		class require
		{
			items_virtual[]={{"ironp",10}};
		};
		class receive
		{
			items_virtual[]={{"watchpost_small",1}};
		};
	};
	/* ====================================== cook ANT ====================================== */
	class bean
	{
		name="Epluchage des haricots";
		sound="cooking";
		class require
		{
			items_virtual[]={{"bean",1}};
		};
		class receive
		{
			items_virtual[]={{"bean_prepared",1}};
		};
		time_per_item=1;
		time_default=2;
		class target {};
		class factions
		{
			class EAST {};
		};
	};
	class bean_mash: bean
	{
		name="Cuisson de la purée de haricots";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"bean_prepared",2}};
		};
		class receive
		{
			items_virtual[]={{"bean_mash",1}};
		};
		time_per_item=2;
		time_default=2;
		class target
		{
			smoke_type="SmokeShell";
		};
	};
	class wheat_cake: bean
	{
		name="Cuisson de gateaux secs";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"wheat",2}};
		};
		class receive
		{
			items_virtual[]={{"wheat_cake",1}};
		};
		time_per_item=3;
		time_default=3;
		class target
		{
			smoke_type="SmokeShell";
		};
	};
	/* ====================================== company_glass ====================================== */
	class glass
	{
		name="Transformation du sable en verre";
		sound="salt_process";
		time_per_item=2;
		time_default=5;
		class require
		{
			items_virtual[]={{"sand",1}};
		};
		class receive
		{
			items_virtual[]={{"glass",2}};
		};
		class factions
		{
			class CIV
			{
				licenses[]={"company_glass"};
			};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class cercueilpboisp
	{
		name="Construction d'un cercueil en bois et or";
		sound="salt_process";
		time_per_item=2;
		time_default=5;
		class require
		{
			items_virtual[]={{"woodp",10}};
		};
		class receive
		{
			items_virtual[]={{"Coffin_01_F",1}};
		};
		class factions
		{
			class CIV
			{
				licenses[]={"company_morgue"};
			};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class cercueilpferp
	{
		name="Construction d'un cercueil en fer";
		sound="salt_process";
		time_per_item=2;
		time_default=5;
		class require
		{
			items_virtual[]={{"ironp",10}};
		};
		class receive
		{
			items_virtual[]={{"Coffin_02_F",1}};
		};
		class factions
		{
			class CIV
			{
				licenses[]={"company_morgue"};
			};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class cercueilpboisdrapp
	{
		name="Construction d'un cercueil en bois avec un drapeau";
		sound="salt_process";
		time_per_item=2;
		time_default=5;
		class require
		{
			items_virtual[]={{"ironp",10},{"cottonp",10}};
		};
		class receive
		{
			items_virtual[]={{"Coffin_02_Flag_F",1}};
		};
		class factions
		{
			class CIV
			{
				licenses[]={"company_morgue"};
			};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class bouteille
	{
		name="Fonte du verre en Bouteille";
		sound="smelting";
		time_per_item=2;
		time_default=2;
		class require
		{
			items_virtual[]={{"glass",1}};
		};
		class receive
		{
			items_virtual[]={{"bouteillevide",1}};
		};
		class factions
		{
			class CIV
			{
				licenses[]={"company_glass"};
			};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class bocalp: glass
	{
		name="Fonte du verre en Bocal";
		sound="smelting";
		class require
		{
			items_virtual[]={{"glass",2}};
		};
		class receive
		{
			items_virtual[]={{"bocal",1}};
		};
	};
	class seringue: glass
	{
		name="Fonte du verre en Seringue";
		sound="smelting";
		class require
		{
			items_virtual[]={{"glass",1}};
		};
		class receive
		{
			items_virtual[]={{"seringue",2}};
		};
		time_per_item=1;
	};
	class repair_glass: glass
	{
		name="Fabrication : Vitre";
		class require
		{
			items_virtual[]={{"glass",2}};
		};
		class receive
		{
			items_arma[]={"Alysia_repair_glass"};
		};
		time_per_item=4;
	};
	/* ====================================== company_sugar ====================================== */
	class sugar
	{
		name="Traitement de la canne à sucre";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"sugar_cane",1}};
		};
		class receive
		{
			items_virtual[]={{"sugar",2}};
		};
		time_per_item=1;
		time_default=3;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	/* ====================================== company_wood ====================================== */
	/* ====================================== company_steel ====================================== */
	class iron
	{
		name="Fonte du fer";
		class require
		{
			items_virtual[]={{"iron",1}};
		};
		class receive
		{
			items_virtual[]={{"ironp",1},{"soufre",1}};
		};
		time_per_item=2;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"traitement_fer"};
			};
			class WEST
			{
				licenses[]={"traitement_fer"};
			};
			class GUER
			{
				licenses[]={"traitement_fer"};
			};
		};
	};
	class acier: iron
	{
		name="Transformation du Fer en Acier";
		class require
		{
			items_virtual[]={{"ironp",1},{"charcoal",3}};
		};
		class receive
		{
			items_virtual[]={{"steelp",1}};
		};
		time_per_item=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_steel"};
			};
		};
	};
	class serrurep: iron
	{
		name="Fonte de serrure";
		class require
		{
			items_virtual[]={{"ironp",3},{"iron",3}};
		};
		class receive
		{
			items_virtual[]={{"serrure",1}};
		};
		time_per_item=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_steel"};
			};
		};
	};
	class repair_rotor: iron
	{
		name="Fabrication : Rotor";
		class require
		{
			items_virtual[]={{"steelp",6}};
		};
		class receive
		{
			items_arma[]={"Alysia_repair_rotor"};
		};
	 	time_per_item=15;
	};
	class repair_fuel: iron
	{
		name="Fabrication : Reservoir fuel";
		class require
		{
			items_virtual[]={{"steelp",2}};
		};
		class receive
		{
			items_arma[]={"Alysia_repair_fuel"};
		};
		time_per_item=3;
	};
	class repair_engine: iron
	{
		name="Fabrication : Moteur";
		class require
		{
			items_virtual[]={{"steelp",5}};
		};
		class receive
		{
			items_arma[]={"Alysia_repair_engine"};
		};
		time_per_item=6;
	};
	class repair_body: iron
	{
		name="Fabrication : Carrosserie";
		class require
		{
			items_virtual[]={{"ironp",4}};
		};
		class receive
		{
			items_arma[]={"Alysia_repair_body"};
		};
		time_per_item=4;
	};
	class repair_track: iron
	{
		name="Fabrication : Chenille gauche";
		class require
		{
			items_virtual[]={{"steelp",3}};
		};
		class receive
		{
			items_arma[]={"Alysia_repair_track"};
		};
		time_per_item=5;
	};
	class siphon: iron
	{
		name="Fabrication : Siphon";
		class require
		{
			items_virtual[]={{"ironp",2}};
		};
		class receive
		{
			items_arma[]={"Alysia_siphon"};
		};
		time_per_item=2;
	};
	/* ====================================== company_construction ====================================== */
	class Cimenttr
	{
		name="Traitement de la pierre";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"pierre",2}};
		};
		class receive
		{
			items_virtual[]={{"ciment",1}};
		};
		time_per_item=1;
		time_default=4;
		class factions
		{
			class CIV
			{
				licenses[]={"company_construction"};
			};
		};
	};
	/* ====================================== company_fuel ====================================== */
	class gazole
	{
		name="Traitement : Diesel";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"oilu",1}};
		};
		class receive
		{
			items_virtual[]={{"gazole",10}};
		};
		time_per_item=3;
		time_default=3;
		class factions
		{
			class CIV
			{
				licenses[]={"company_fuel"};
			};
		};
	};
	class kerosene: gazole
	{
		name="Traitement : Kerosene";
		class receive
		{
			items_virtual[]={{"kerosene",10}};
		};
	};
	class sp98: gazole
	{
		name="Traitement : SP98";
		class receive
		{
			items_virtual[]={{"sp98",10}};
		};
	};
	class sp95: gazole
	{
		name="Traitement : SP95";
		class receive
		{
			items_virtual[]={{"sp95",10}};
		};
	};
	class gpl: gazole
	{
		name="Traitement : GPL";
		class receive
		{
			items_virtual[]={{"gpl",10}};
		};
	};
	class milletia: gazole
	{
		name="Traitement des fleurs de Millettia";
		sound="smelting";
		class require
		{
			items_virtual[]={{"millettia",3}};
		};
		class receive
		{
			items_virtual[]={{"bio",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	/* ====================================== company_textile ====================================== */

	class cotton
	{
		name="Traitement du cotton";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cotton",1}};
		};
		class receive
		{
			items_virtual[]={{"cottonp",2}};
		};
		time_per_item=1;
		time_default=4;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class tissue: cotton
	{
		name="Traitement du cotton traité";
		class require
		{
			items_virtual[]={{"cottonp",5}};
		};
		class receive
		{
			items_virtual[]={{"tissue",1}};
		};
	};

	class gilet_MIT1
	{
		name="Gilet Carrier1 MIT";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cottonp",15},{"tissue",5}};
		};
		class receive
		{
			items_arma[]={"V_PlateCarrier1_rgr_noflag_F"};
		};
		time_per_item=3;
		time_default=10;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class corpo_uniform
	{
		name="Uniforme EIT";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cottonp",15},{"tissue",5}};
		};
		class receive
		{
			items_arma[]={"corpo_uniform"};
		};
		time_per_item=3;
		time_default=15;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

		class gilet_MIT2 : gilet_MIT1
		{
			name="Gilet Carrier2 MIT";
			class receive
			{
				items_arma[]={"V_PlateCarrier2_rgr_noflag_F"};
			};
			time_per_item=3;
			time_default=10;
		};

		class corpo_helmet
		{
			name="Casque EIT";
			sound="smelting";
			class require
			{
				items_virtual[]={{"cottonp",10},{"tissue",5}};
			};
			class receive
			{
				items_arma[]={"corpo_helmet"};
			};
			time_per_item=3;
			time_default=6;
			class factions
			{
				class CIV {};
				class WEST {};
				class EAST {};
				class GUER {};
			};
		};

		class corpo_booniehat : corpo_helmet
		{
			name="Bob EIT";
			class receive
			{
				items_arma[]={"corpo_booniehat"};
			};
		};

		class corpo_beret_1 : corpo_helmet
		{
			name="Beret EIT";
			class receive
			{
				items_arma[]={"corpo_beret_1"};
			};
		};

	class textilep
	{
		name="Création de sac à  dos Timberwood vert";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cottonp",25},{"tissue",10}};
		};
		class receive
		{
			items_arma[]={"Maels_backpack_1"};
		};
		time_per_item=3;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_textile"};
			};
		};
	};
	class textile2p: textilep
	{
		name="Création de sac à dos Timberwood bleu";
		class receive
		{
			items_arma[]={"Maels_backpack_2"};
		};
	};
	class textile3p: textilep
	{
		name="Création de sac à dos Timberwood bleu et gris";
		class receive
		{
			items_arma[]={"Maels_backpack_3"};
		};
	};

	class textile4p
	{
		name="Création de costume 1";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cottonp",30},{"tissue",5}};
		};
		class receive
		{
			items_arma[]={"EF_suit_1"};
		};
		time_per_item=2;
		time_default=7;
		class factions
		{
			class CIV
			{
				licenses[]={"company_textile"};
			};
		};
	};
	class textile5p: textile4p
	{
		name="Création de costume 2";
		class receive
		{
			items_arma[]={"EF_suit_2"};
		};
	};
	class textile6p: textile4p
	{
		name="Création de costume 3";
		class receive
		{
			items_arma[]={"EF_suit_3"};
		};
	};
	class textile7p: textile4p
	{
		name="Création de costume 4";
		class receive
		{
			items_arma[]={"EF_suit_4"};
		};
	};
	class textile8p: textile4p
	{
		name="Création de costume 5";
		class receive
		{
			items_arma[]={"EF_suit_5"};
		};
	};
	class textile9p: textile4p
	{
		name="Création de costume 6";
		class receive
		{
			items_arma[]={"EF_suit_6"};
		};
	};
	class textile10p: textile4p
	{
		name="Création de costume 7";
		class receive
		{
			items_arma[]={"EF_MX1"};
		};
	};
	class textile11p: textile4p
	{
		name="Création de costume 8";
		class receive
		{
			items_arma[]={"EF_Maels_suit_7"};
		};
	};
	class textile12p: textile4p
	{
		name="Création de costume 9";
		class receive
		{
			items_arma[]={"EF_Maels_suit_8"};
		};
	};
	class textile13p: textile4p
	{
		name="Création de costume 10";
		class receive
		{
			items_arma[]={"EF_Maels_suit_9"};
		};
	};
	class textile14p: textile4p
	{
		name="Création de costume 11";
		class receive
		{
			items_arma[]={"EF_Maels_suit_10"};
		};
	};
	class textile15p: textile4p
	{
		name="Création de costume Jackt 1";
		class receive
		{
			items_arma[]={"EF_M_jkt4"};
		};
	};
	class textile16p: textile4p
	{
		name="Création de costume Jackt 2";
		class receive
		{
			items_arma[]={"EF_M_jkt42"};
		};
	};

	class girltextilep
	{
		name="Création de Tee-shirt";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cottonp",15},{"tissue",2}};
		};
		class receive
		{
			items_arma[]={"EF_FEM_3_5B"};
		};
		time_per_item=2;
		time_default=7;
		class factions
		{
			class CIV
			{
				licenses[]={"company_textile"};
			};
		};
	};
	class girltextile2p: girltextilep
	{
		name="Création de Tee-shirt 2";
		class receive
		{
			items_arma[]={"EF_FEM_3_5BP"};
		};
	};
	class girltextile3p: girltextilep
	{
		name="Création de Tee-shirt 3";
		class receive
		{
			items_arma[]={"EF_FEM_3_5VP"};
		};
	};
	class girltextile4p: girltextilep
	{
		name="Création de Tee-shirt 4";
		class receive
		{
			items_arma[]={"EF_FEM_3_5RC"};
		};
	};
	class girltextile5p: girltextilep
	{
		name="Création de Tee-shirt 5";
		class receive
		{
			items_arma[]={"EF_FEM_3_5W"};
		};
	};
	class girltextile6p: girltextilep
	{
		name="Création de Tee-shirt 6";
		class receive
		{
			items_arma[]={"EF_FEM_3_52"};
		};
	};
	class girltextile7p: girltextilep
	{
		name="Création de Tee-shirt 7";
		class receive
		{
			items_arma[]={"EF_FEM_3_52BP"};
		};
	};
	class girltextile8p: girltextilep
	{
		name="Création de Tee-shirt 8";
		class receive
		{
			items_arma[]={"EF_FEM_3_52VP"};
		};
	};
	class girltextile9p: girltextilep
	{
		name="Création de Tee-shirt 9";
		class receive
		{
			items_arma[]={"EF_FEM_3_52RC"};
		};
	};
	class girltextile10p: girltextilep
	{
		name="Création de Tee-shirt 10";
		class receive
		{
			items_arma[]={"EF_FEM_3_52W"};
		};
	};
	class girltextile11p: girltextilep
	{
		name="Création de Tee-shirt 11";
		class receive
		{
			items_arma[]={"EF_FEM_4_73"};
		};
	};
	class girltextile12p: girltextilep
	{
		name="Création de Tee-shirt 12";
		class receive
		{
			items_arma[]={"EF_FEM_4_73R"};
		};
	};
	class girltextile13p: girltextilep
	{
		name="Création de Tee-shirt 13";
		class receive
		{
			items_arma[]={"EF_FEM_4_74"};
		};
	};
	class girltextile14p: girltextilep
	{
		name="Création de Tee-shirt 14";
		class receive
		{
			items_arma[]={"EF_FEM_4_74R"};
		};
	};
	class girltextile15p: girltextilep
	{
		name="Création de Tee-shirt 15";
		class receive
		{
			items_arma[]={"EF_FEM_4_75"};
		};
	};
	class girltextile16p: girltextilep
	{
		name="Création de Tee-shirt 16";
		class receive
		{
			items_arma[]={"EF_FEM_4_75R"};
		};
	};
	class girltextile17p: girltextilep
	{
		name="Création de Tee-shirt 17";
		class receive
		{
			items_arma[]={"EF_FEM_4_76"};
		};
	};
	class girltextile18p: girltextilep
	{
		name="Création de Tee-shirt 18";
		class receive
		{
			items_arma[]={"EF_FEM_4_76R"};
		};
	};
	class girltextile19p: girltextilep
	{
		name="Création de Tee-shirt 19";
		class receive
		{
			items_arma[]={"EF_FEM_4_7"};
		};
	};
	class girltextile20p: girltextilep
	{
		name="Création de Tee-shirt 20";
		class receive
		{
			items_arma[]={"EF_FEM_4_7R"};
		};
	};
	class girltextile21p: girltextilep
	{
		name="Création de Tee-shirt 21";
		class receive
		{
			items_arma[]={"EF_FEM_4_72"};
		};
	};
	class girltextile22p: girltextilep
	{
		name="Création de Tee-shirt 22";
		class receive
		{
			items_arma[]={"EF_FEM_4_72R"};
		};
	};
	class girltextile23p: girltextilep
	{
		name="Création de Tee-shirt 23";
		class receive
		{
			items_arma[]={"EF_FEM_4_4B"};
		};
	};
	class girltextile24p: girltextilep
	{
		name="Création de Tee-shirt 24";
		class receive
		{
			items_arma[]={"EF_FEM_4_4BP"};
		};
	};
	class girltextile25p: girltextilep
	{
		name="Création de Tee-shirt 25";
		class receive
		{
			items_arma[]={"EF_FEM_4_4VP"};
		};
	};
	class girltextile26p: girltextilep
	{
		name="Création de Tee-shirt 26";
		class receive
		{
			items_arma[]={"EF_FEM_4_4RC"};
		};
	};
	class girltextile27p: girltextilep
	{
		name="Création de Tee-shirt 27";
		class receive
		{
			items_arma[]={"EF_FEM_4_4W"};
		};
	};
	class girltextile28p: girltextilep
	{
		name="Création de Tee-shirt 28";
		class receive
		{
			items_arma[]={"EF_FEM_4_42"};
		};
	};
	class girltextile29p: girltextilep
	{
		name="Création de Tee-shirt 29";
		class receive
		{
			items_arma[]={"EF_FEM_4_42BP"};
		};
	};
	class girltextile30p: girltextilep
	{
		name="Création de Tee-shirt 30";
		class receive
		{
			items_arma[]={"EF_FEM_4_42VP"};
		};
	};
	class girltextile31p: girltextilep
	{
		name="Création de Tee-shirt 31";
		class receive
		{
			items_arma[]={"EF_FEM_4_42RC"};
		};
	};
	class girltextile32p: girltextilep
	{
		name="Création de Tee-shirt 32";
		class receive
		{
			items_arma[]={"EF_FEM_4_42W"};
		};
	};
	class girltextile33p: girltextilep
	{
		name="Création de Tee-shirt 33";
		class receive
		{
			items_arma[]={"EF_FEM_6"};
		};
	};

	class textile_biker
	{
		name="Création de veste de biker";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cottonp",15},{"tissue",2}};
		};
		class receive
		{
			items_arma[]={"Maels_biker"};
		};
		time_per_item=2;
		time_default=7;
		class factions
		{
			class CIV
			{
				licenses[]={"company_textile"};
			};
		};
	};
	/* ====================================== company_farming ====================================== */
	class cassoulet
	{
		name="Mise en conserve : Cassoulet";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"bean",3},{"conserve",1}};
		};
		class receive
		{
			items_virtual[]={{"cassoulet",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_farming"};
			};
		};
	};
	class red_grape_juicep: cassoulet
	{
		name="Mélange";
		sound="cooking";
		class require
		{
			items_virtual[]={{"raisin_red",10},{"water",1}};
		};
		class receive
		{
			items_virtual[]={{"red_grape_juice",1}};
		};
		time_per_item=3;
		time_default=2;
	};
	class assembling_wine_redp
	{
		name="Assemblage (vin rouge)";
		sound="cooking";
		class require
		{
			items_virtual[]={{"red_grape_juice",1},{"sugar",2}};
		};
		class receive
		{
			items_virtual[]={{"assembling_wine_red",1}};
		};
		time_per_item=3;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class wine_redp
	{
		name="Mise en bouteille du vin rouge";
		sound="cooking";
		class require
		{
			items_virtual[]={{"assembling_wine_red",1},{"bouteillevide",1}};
		};
		class receive
		{
			items_virtual[]={{"wine_red",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class malibu
	{
		name="Assemblage (malibu)";
		sound="cooking";
		class require
		{
			items_virtual[]={{"rhum",1},{"coconut",2}};
		};
		class receive
		{
			items_virtual[]={{"malibu",1}};
		};
		time_per_item=3;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class white_grape_juicep: cassoulet
	{
		name="Mélange";
		sound="cooking";
		class require
		{
			items_virtual[]={{"raisin_white",10},{"water",1}};
		};
		class receive
		{
			items_virtual[]={{"white_grape_juice",1}};
		};
		time_per_item=3;
		time_default=2;
	};
	class assembling_wine_whitep
	{
		name="Assemblage (vin blanc)";
		sound="cooking";
		class require
		{
			items_virtual[]={{"white_grape_juice",1},{"sugar",2}};
		};
		class receive
		{
			items_virtual[]={{"assembling_wine_white",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class wine_whitep
	{
		name="Mise en bouteille du vin blanc";
		sound="cooking";
		class require
		{
			items_virtual[]={{"assembling_wine_white",1},{"bouteillevide",1}};
		};
		class receive
		{
			items_virtual[]={{"wine_white",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class pinked_grape_juicep: cassoulet
	{
		name="Mélange";
		sound="cooking";
		class require
		{
			items_virtual[]={{"raisin_white",5},{"raisin_red",5}};
		};
		class receive
		{
			items_virtual[]={{"pinked_grape_juice",1}};
		};
		time_per_item=2;
		time_default=2;
	};
	class assembling_wine_pinkedp
	{
		name="Assemblage (vin rosé)";
		sound="cooking";
		class require
		{
			items_virtual[]={{"pinked_grape_juice",1},{"sugar",2}};
		};
		class receive
		{
			items_virtual[]={{"assembling_wine_pinked",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class wine_pinkedp
	{
		name="Mise en bouteille du vin rosé";
		sound="cooking";
		class require
		{
			items_virtual[]={{"assembling_wine_white",1},{"bouteillevide",1}};
		};
		class receive
		{
			items_virtual[]={{"wine_pinked",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class assembling_champagne
	{
		name="Assemblage (champagne)";
		sound="cooking";
		class require
		{
			items_virtual[]={{"white_grape_juice",1},{"sugar",2},{"yeast",2}};
		};
		class receive
		{
			items_virtual[]={{"assembling_champagne",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class champagnep
	{
		name="Mise en bouteille du champagne";
		sound="cooking";
		class require
		{
			items_virtual[]={{"assembling_champagne",1},{"bouteillevide",1}};
		};
		class receive
		{
			items_virtual[]={{"champagne",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class Maltagep: cassoulet
	{
		name="Maltage de l'orge";
		sound="smelting";
		class require
		{
			items_virtual[]={{"orge",10},{"water",1}};
		};
		class receive
		{
			items_virtual[]={{"Malte",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class Brassagep: cassoulet
	{
		name="Brassage du Malte";
		sound="smelting";
		class require
		{
			items_virtual[]={{"Malte",1},{"water",1}};
		};
		class receive
		{
			items_virtual[]={{"Brassage",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class Fermentp
	{
		name="Fermentation du moût";
		sound="smelting";
		class require
		{
			items_virtual[]={{"Brassage",1},{"yeast",2}};
		};
		class receive
		{
			items_virtual[]={{"Ferment_whisky",1}};
		};
		time_per_item=2;
		time_default=3;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class Whiskyp
	{
		name="Mise en bouteille du Whisky";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"Ferment_whisky",1},{"bouteillevide",1}};
		};
		class receive
		{
			items_virtual[]={{"Whisky",1}};
		};
		time_per_item=2;
		time_default=3;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class brewingp: cassoulet
	{
		name="Houblonnage du houblon";
		sound="smelting";
		class require
		{
			items_virtual[]={{"Malte",1},{"houblon",3}};
		};
		class receive
		{
			items_virtual[]={{"brewing",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class Ferment_beerp
	{
		name="Fermentation du Houblon";
		sound="smelting";
		class require
		{
			items_virtual[]={{"brewing",1},{"yeast",2}};
		};
		class receive
		{
			items_virtual[]={{"ferment_beer",2}};
		};
		time_per_item=2;
		time_default=3;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class Beerp
	{
		name="Mise en bouteille de la Bierre";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"Ferment_beer",1},{"bouteillevide",1}};
		};
		class receive
		{
			items_virtual[]={{"beer",1}};
		};
		time_per_item=2;
		time_default=3;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};
	class Pressing_olivep: cassoulet
	{
		name="Pressage des olives";
		sound="smelting";
		class require
		{
			items_virtual[]={{"olive",10}};
		};
		class receive
		{
			items_virtual[]={{"olive_oil",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class Olive_oilp: cassoulet
	{
		name="Mise en bouteille de l'huile d'olive";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"olive_oil",1},{"bouteillevide",1}};
		};
		class receive
		{
			items_virtual[]={{"olive_oil_bottle",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class Mixer_olivep: cassoulet
	{
		name="Mixage d'olive";
		sound="smelting";
		class require
		{
			items_virtual[]={{"olive",10}};
		};
		class receive
		{
			items_virtual[]={{"olive_paste",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class Tapenadep: cassoulet
	{
		name="Faire une tapenade";
		sound="smelting";
		class require
		{
			items_virtual[]={{"olive_oil",1},{"olive_paste",1}};
		};
		class receive
		{
			items_virtual[]={{"tapenade",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class Olive_cocktail: cassoulet
	{
		name="Cocktail";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"olive_oil",1},{"olive",10}};
		};
		class receive
		{
			items_virtual[]={{"Olive_cocktail",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class Grinding_flourp: cassoulet
	{
		name="Broyage";
		sound="smelting";
		class require
		{
			items_virtual[]={{"wheat",2}};
		};
		class receive
		{
			items_virtual[]={{"flour",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class doughp: cassoulet
	{
		name="Faire une pâte à pain";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"flour",2},{"salt",1},{"water",1}};
		};
		class receive
		{
			items_virtual[]={{"dough",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class baguettep: cassoulet
	{
		name="Cuisson du pain";
		sound="smelting";
		class require
		{
			items_virtual[]={{"dough",1}};
		};
		class receive
		{
			items_virtual[]={{"baguette",2}};
		};
		time_per_item=2;
		time_default=3;
	};
	class puff_pastryp: cassoulet
	{
		name="Faire pâte feuilletée";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"flour",3},{"egg",1},{"butter",1}};
		};
		class receive
		{
			items_virtual[]={{"puff_pastry",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class cutting_puff_pastryp: cassoulet
	{
		name="Découper la pâte feuilletée";
		sound="smelting";
		class require
		{
			items_virtual[]={{"puff_pastry",1}};
		};
		class receive
		{
			items_virtual[]={{"uncooked_croissant",5}};
		};
		time_per_item=2;
		time_default=3;
	};
	class baking_croissantp: cassoulet
	{
		name="Cuisson des croissants nature";
		sound="smelting";
		class require
		{
			items_virtual[]={{"uncooked_croissant",1}};
		};
		class receive
		{
			items_virtual[]={{"cooked_croissant",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class cutting_puff_chocolatep: cassoulet
	{
		name="Préparation des pains au chocolat";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"puff_pastry",1},{"cacaop",1}};
		};
		class receive
		{
			items_virtual[]={{"uncooked_chocolate_croissant",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class baking_chocolate_croissant: cassoulet
	{
		name="Cuisson des pains au chocolat";
		sound="smelting";
		class require
		{
			items_virtual[]={{"uncooked_chocolate_croissant",1}};
		};
		class receive
		{
			items_virtual[]={{"cooked_chocolate_croissant",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	/* ====================================== company_cook ====================================== */
	class sea_foodp
	{
		name="Préparation du Plateau de fruit de mer";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"oursin",6},{"crevette",6},{"crabe",6}};
		};
		class receive
		{
			items_virtual[]={{"sea_food",2}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class cuissedepouletcookesca
	{
		name="Préparation du Poulet en escalope";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"pouletcook",1}};
		};
		class receive
		{
			items_virtual[]={{"escalopepouletcook",4}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class cuissedepouletcookpcuissep
	{
		name="Préparation du Poulet en cuisse de poulet";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"pouletcook",1}};
		};
		class receive
		{
			items_virtual[]={{"cuissedepouletcook",2}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class cuissedepouletcookpnuggets
	{
		name="Préparation du Poulet en nuggets";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"pouletcook",1}};
		};
		class receive
		{
			items_virtual[]={{"nuggetscook",30}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class cuissedepouletcookpouletroti
	{
		name="Préparation du Poulet en poulet rôti";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"pouletcook",1}};
		};
		class receive
		{
			items_virtual[]={{"pouletroticook",5}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class rationmilpouletp
	{
		name="Préparation des rations militaires au poulet";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"escalopepouletcook",2},{"raisin_white",4},{"raisin_red",1},{"fraise",2},{"bean",2},{"macaron",2}};
		};
		class receive
		{
			items_virtual[]={{"rationmilpoulet",5}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class rationmilboeufp
	{
		name="Préparation des rations militaires au boeuf";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"beefsteak_beef",2},{"raisin_white",4},{"white_grape_juice",1},{"tabchoco",2},{"purer",2}};
		};
		class receive
		{
			items_virtual[]={{"rationmilboeuf",5}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class rationmilporcp
	{
		name="Préparation des rations militaires au porc";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"chop_pork",2},{"raisin_red",4},{"red_grape_juice",1},{"tabchoco",2},{"wheat",4}};
		};
		class receive
		{
			items_virtual[]={{"rationmilporc",1}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class nukaorangep
	{
		name="Confection du Nuka Orange";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"sparklingwater",4},{"coconut",2}};
		};
		class receive
		{
			items_virtual[]={{"nukaorange",4}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class nukavictoryp
	{
		name="Confection du Nuka Victory";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"sparklingwater",4},{"marijuana",2},{"rhum",2}};
		};
		class receive
		{
			items_virtual[]={{"nukavictory",4}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class nukaquartzp
	{
		name="Confection du Nuka Quartz";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"sparklingwater",4},{"banana",2},{"volcano",1}};
		};
		class receive
		{
			items_virtual[]={{"nukaquartz",4}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class nukadarkp
	{
		name="Confection du Nuka Dark";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"rhum",2},{"Whisky",2},{"crevette",2}};
		};
		class receive
		{
			items_virtual[]={{"nukadark",4}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class nukaquantump
	{
		name="Confection du Nuka Quantum";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"sparklingwater",4},{"crabe",2},{"cacaop",2}};
		};
		class receive
		{
			items_virtual[]={{"nukaquantum",4}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class nukagrappep
	{
		name="Confection du Nuka Grappe";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"sparklingwater",4},{"red_grape_juice",2}};
		};
		class receive
		{
			items_virtual[]={{"nukagrappe",4}};
		};
		time_per_item=2;
		time_default=10;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cook"};
			};
		};
	};
	class cake_batterp: sea_foodp
	{
		name="Préparation de la pâte à gâteau";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"flour",3},{"sugar",2},{"milk",1}};
		};
		class receive
		{
			items_virtual[]={{"cake_batter",3}};
		};
		time_per_item=2;
		time_default=3;
	};
	class cake_smeltp: sea_foodp
	{
		name="Cuisson du gâteau";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cake_batter",1}};
		};
		class receive
		{
			items_virtual[]={{"cake",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class cake_chocolate_batterp: sea_foodp
	{
		name="Préparation de la pâte à gâteau";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"cake_batter",1},{"cacaop",3}};
		};
		class receive
		{
			items_virtual[]={{"cake_chocolate_batter",3}};
		};
		time_per_item=2;
		time_default=3;
	};
	class cake_chocolate_smeltp: sea_foodp
	{
		name="Cuisson gâteau au chocolat";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cake_chocolate_batter",1}};
		};
		class receive
		{
			items_virtual[]={{"cake_chocolate",1}};
		};
		time_per_item=2;
		time_default=3;
	};
	class roast_porkp: sea_foodp
	{
		name="Découpe et Cuisson du rôti de porc";
		sound="smelting";
		class require
		{
			items_virtual[]={{"pork",1}};
		};
		class receive
		{
			items_virtual[]={{"roast_pork",10}};
		};
		time_per_item=2;
		time_default=3;
	};
	class chop_porkp: roast_porkp
	{
		name="Découpe et Cuisson des côtes de porc";
		sound="smelting";
		class require
		{
			items_virtual[]={{"pork",1}};
		};
		class receive
		{
			items_virtual[]={{"chop_pork",15}};
		};
	};
	class filet_mignonp: roast_porkp
	{
		name="Découpe et Cuisson du filet mignon";
		sound="smelting";
		class require
		{
			items_virtual[]={{"pork",1}};
		};
		class receive
		{
			items_virtual[]={{"filet_mignon",10}};
		};
	};
	class beefp: sea_foodp
	{
		name="Découpe et Cuisson des rumsteaks";
		sound="smelting";
		class require
		{
			items_virtual[]={{"beef",1}};
		};
		class receive
		{
			items_virtual[]={{"rumsteak_beef",15}};
		};
		time_per_item=2;
		time_default=3;
	};
	class beef_steak_beef: beefp
	{
		name="Découpe et Cuisson des beefsteaks";
		sound="smelting";
		class require
		{
			items_virtual[]={{"beef",1}};
		};
		class receive
		{
			items_virtual[]={{"beefsteak_beef",25}};
		};
	};
	class ground_beef: beefp
	{
		name="Découpe et Cuisson des steaks hachés";
		sound="smelting";
		class require
		{
			items_virtual[]={{"beef",1}};
		};
		class receive
		{
			items_virtual[]={{"ground_beef",10}};
		};
	};
	class rib_coast_beef: beefp
	{
		name="Découpe et Cuisson des côtes de boeuf";
		sound="smelting";
		class require
		{
			items_virtual[]={{"beef",1}};
		};
		class receive
		{
			items_virtual[]={{"rib_coast_beef",10}};
		};
	};
	class beef_tenderloin_beef: beefp
	{
		name="Découpe et Cuisson des filets de boeuf";
		sound="smelting";
		class require
		{
			items_virtual[]={{"beef",1}};
		};
		class receive
		{
			items_virtual[]={{"beef_tenderloin_beef",5}};
		};
	};
	class rib_steak_beef: beefp
	{
		name="Découpe et Cuisson des entrecôtes";
		sound="smelting";
		class require
		{
			items_virtual[]={{"beef",1}};
		};
		class receive
		{
			items_virtual[]={{"rib_beef_steak",10}};
		};
	};
	/* ====================================== company_cacao ====================================== */
	/* ====================================== company_rhum ====================================== */
	class rhum
	{
		name="Mise en bouteille : Rhum";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"sugar",2},{"bouteillevide",1}};
		};
		class receive
		{
			items_virtual[]={{"rhum",1}};
		};
		time_per_item=2;
		time_default=3;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class assembling_gin
	{
		name="Assemblage (gin)";
		sound="cooking";
		class require
		{
			items_virtual[]={{"corn",1},{"orge",2}};
		};
		class receive
		{
			items_virtual[]={{"Tonneau_gin",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};

	class ginp
	{
		name="Mise en bouteille du gin";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"Tonneau_gin",1},{"bouteillevide",5}};
		};
		class receive
		{
			items_virtual[]={{"gin",5}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_rhum"};
			};
		};
	};

	class assembling_sake : assembling_gin
	{
		name="Assemblage (sake)";
		class require
		{
			items_virtual[]={{"riz",10}};
		};
		class receive
		{
			items_virtual[]={{"Tonneau_sake",1}};
		};
	};

	class sakep : ginp
	{
		name="Mise en bouteille du sake";
		class require
		{
			items_virtual[]={{"Tonneau_sake",1},{"bouteillevide",5}};
		};
		class receive
		{
			items_virtual[]={{"sake",5}};
		};
	};

	class assembling_ricard : assembling_gin
	{
		name="Assemblage (ricard)";
		class require
		{
			items_virtual[]={{"anis",10}};
		};
		class receive
		{
			items_virtual[]={{"Tonneau_ricard",1}};
		};
	};

	class ricardp : ginp
	{
		name="Mise en bouteille du ricard";
		class require
		{
			items_virtual[]={{"Tonneau_ricard",1},{"bouteillevide",5}};
		};
		class receive
		{
			items_virtual[]={{"ricard",5}};
		};
	};

	class assembling_vodka : assembling_gin
	{
		name="Assemblage (vodka)";
		class require
		{
			items_virtual[]={{"corn",2},{"orge",2},{"patate",6}};
		};
		class receive
		{
			items_virtual[]={{"Tonneau_vodka",1}};
		};
	};

	class vodkap : ginp
	{
		name="Mise en bouteille de la vodka";
		class require
		{
			items_virtual[]={{"Tonneau_vodka",1},{"bouteillevide",5}};
		};
		class receive
		{
			items_virtual[]={{"vodka",5}};
		};
	};

	class assembling_suze : assembling_gin
	{
		name="Assemblage (suze)";
		class require
		{
			items_virtual[]={{"gentiane",10}};
		};
		class receive
		{
			items_virtual[]={{"Tonneau_suze",1}};
		};
	};

	class suzep : ginp
	{
		name="Mise en bouteille de la suze";
		class require
		{
			items_virtual[]={{"Tonneau_suze",1},{"bouteillevide",5}};
		};
		class receive
		{
			items_virtual[]={{"suze",5}};
		};
	};

	class smectap
	{
		name="Confection du Smecta";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"gentiane",3}};
		};
		class receive
		{
			items_virtual[]={{"smecta",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_laboratoiremedical"};
			};
		};
	};

	class paracetamolp
	{
		name="Confection du Doliprane";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"corn",3}};
		};
		class receive
		{
			items_virtual[]={{"doliprane",1}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_laboratoiremedical"};
			};
		};
	};

	class alcool_testp
	{
		name="Création d'Alcool test";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"iron",2},{"glass",2}};
		};
		class receive
		{
			items_virtual[]={{"alcool_test",2}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_laboratoiremedical"};
			};
		};
	};

	class adnp
	{
		name="Création de test ADN";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"iron",2},{"glass",2}};
		};
		class receive
		{
			items_virtual[]={{"adn",2}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_laboratoiremedical"};
			};
		};
	};

	class scalpelp
	{
		name="Création de scalpel";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"ironp",2},{"steelp",2}};
		};
		class receive
		{
			items_virtual[]={{"scalpel",4}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_laboratoiremedical"};
			};
		};
	};
	class stethoscopep
	{
		name="Création de Stethoscope";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"ironp",2},{"steelp",2}};
		};
		class receive
		{
			items_virtual[]={{"stethoscope",4}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_laboratoiremedical"};
			};
		};
	};
	/* ====================================== company_coffee ====================================== */
	class coffeep
	{
		name="Moudre du café";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"coffee",4}};
		};
		class receive
		{
			items_virtual[]={{"coffeem",2}};
		};
		time_per_item=1;
		time_default=2;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class cafeep2: coffeep
	{
		name="Mise en conserve du café moulu";
		class require
		{
			items_virtual[]={{"conserve",1},{"coffeem",2}};
		};
		class receive
		{
			items_virtual[]={{"coffeec",1}};
		};
	};
	class cafeep3: coffeep
	{
		name="Mise en thermos du café";
		class require
		{
			items_virtual[]={{"coffeec",1},{"water",2}};
		};
		class receive
		{
			items_virtual[]={{"cafe",15}};
		};
	};
	/* ====================================== company_furniture ====================================== */
	class furniture
	{
		name="Fabrication des meubles";
		sound="smelting";
		class require
		{
			items_virtual[]={{"woodp",5}};
		};
		class receive
		{
			items_virtual[]={{"furniture",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"company_furniture"};
			};
			class WEST
			{
				licenses[]={"company_furniture"};
			};
			class GUER
			{
				licenses[]={"company_furniture"};
			};
		};
	};
	class chair_wood: furniture
	{
		name="Fabrication : Chaise en bois";
		class require
		{
			items_virtual[]={{"woodp",4}};
		};
		class receive
		{
			items_virtual[]={{"chair_wood",1}};
		};
		time_per_item=2;
	};
	class table_wood: furniture
	{
		name="Fabrication : Table en bois";
		class require
		{
			items_virtual[]={{"woodp",8}};
		};
		class receive
		{
			items_virtual[]={{"table_wood",1}};
		};
		time_per_item=5;
	};
	/* ====================================== company_tabac ====================================== */
	class tabac
	{
		name="Tubage des cigarettes";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"tabac",1}};
		};
		class receive
		{
			items_virtual[]={{"cigarette",2}};
		};
		time_per_item=2;
		time_default=2;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class cigarettesclothing
	{
		name="Retubage des cigarettes";
		class require
		{
			items_virtual[]={{"cigarette",1}};
		};
		class receive
		{
			items_arma[]={"murshun_cigs_cig0"};
		};
		time_per_item=2;
		time_default=7;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class holosight
	{
		name= "Fabrication : Viseur Holosight";
		class require
		{
			items_virtual[]={{"steelp",1}, {"glass",1}};
		};
		class receive
		{
			items_arma[]={"optic_Holosight"};
		};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
		time_per_item=2;
		time_default=1;
	};
	/* ====================================== company_gun ====================================== */
	class shoulder
	{
		name="Fabrication : crosse";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"shoulderp",3}};
		};
		time_per_item=2;
		time_default=1;
		class factions
		{
			class CIV
			{
				licenses[]={"company_gun"};
			};
			class WEST: CIV {};
			class EAST: CIV {};
			class GUER: CIV {};
		};
	};
	class intermediary_shoulder: shoulder
	{
		name="Fabrication : Crosse intermediaire";
		class require
		{
			items_virtual[]={{"steelp",1},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_shoulderp",2}};
		};
		time_per_item=3;
	};
	class military_shoulder: shoulder
	{
		name="Fabrication : Crosse Militaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1},{"woodp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_shoulderp",1}};
		};
		time_per_item=4;
	};

	class barrel: shoulder
	{
		name="Fabrication : Canon";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"barrelp",2}};
		};
		time_per_item=2;
		time_default=1;
	};

	class intermediary_barrel: shoulder

	{
		name="Fabrication : Canon intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_barrelp",1}};
		};
		time_per_item=3;
	};
	class military_barrel: shoulder
	{
		name="Fabrication : Canon Militaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"military_barrelp",1}};
		};
		time_per_item=4;
	};

	class receiver: shoulder
	{
		name="Fabrication : Culasse";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"receiverp",3}};
		};
		time_per_item=2;
	};
	class intermediary_receiver: shoulder
	{
		name="Fabrication : Culasse intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_receiverp",2}};
		};
		time_per_item=3;
		time_default=1;
	};

	class military_receiver: shoulder
	{
		name="Fabrication : Culasse Militaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_receiverp",1}};
		};
		time_per_item=4;
	};

	class grip: shoulder
	{
		name="Fabrication : Poignée";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"gripp",3}};
		};
		time_per_item=2;
	};
	class intermediary_grip: shoulder
	{
		name="Fabrication : Poignée intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_gripp",2}};
		};
		time_per_item=3;

		time_default=1;
	};

	class military_grip: shoulder
	{
		name="Fabrication : Poignée Militaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1},{"woodp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_gripp",1}};
		};
		time_per_item=4;
	};

	class slapper: shoulder
	{
		name="Fabrication : Percuteur";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"slapperp",3}};
		};
		time_per_item=2;
	};
	class intermediary_slapper: shoulder
	{
		name="Fabrication : Percuteur intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_slapperp",2}};
		};
		time_per_item=3;
		time_default=1;
	};

	class military_slapper: shoulder

	{
		name="Fabrication : Percuteur Militaire";
		class require
		{
			items_virtual[]={{"steelp",2}};
		};
		class receive
		{
			items_virtual[]={{"military_slapperp",2}};
		};
		time_per_item=4;
	};

	class frame: shoulder
	{
		name="Fabrication : Armature";
		class require
		{
			items_virtual[]={{"steelp",2}};
		};
		class receive
		{
			items_virtual[]={{"framep",2}};
		};
		time_per_item=2;
	};
	class intermediary_frame: shoulder
	{
		name="Fabrication : Armature intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_framep",1}};
		};
		time_per_item=3;
		time_default=1;
	};

	class military_frame: shoulder
	{
		name="Fabrication : Armature Militaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"military_framep",1}};
		};
		time_per_item=4;
	};

	class magazine: shoulder
	{
		name="Fabrication : Chargeur";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"magazinep",8}};
		};
		time_per_item=2;
	};
	class military_magazine: shoulder
	{
		name="Fabrication : Chargeur Militaire";
		class require
		{
			items_virtual[]={{"steelp",1},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_magazinep",3}};
		};
		time_per_item=4;
	};

	class bullet: shoulder
	{
		name="Fabrication : Balles";
		class require
		{
			items_virtual[]={{"steelp",1},{"soufre",10}};
		};
		class receive
		{
			items_virtual[]={{"bulletp",40}};
		};
		time_per_item=2;
	};
	class military_bullet: shoulder
	{
		name="Fabrication : Balles Militaire";
		class require
		{
			items_virtual[]={{"steelp",1},{"soufre",20}};
		};
		class receive
		{
			items_virtual[]={{"military_bulletp",30}};
		};
		time_per_item=2;
	};
	class chevrotine: shoulder
	{
		name="Fabrication : chevrotine";
		class require
		{
			items_virtual[]={{"steelp",1},{"soufre",40}};
		};
		class receive
		{
			items_virtual[]={{"chevrotinep",15}};
		};
		time_per_item=2;
	};

	class cylinder: shoulder
	{
		name="Fabrication : Barillet";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"cylinderp",3}};
		};
		time_per_item=2;
	};

	class trigger: shoulder
	{
		name="Fabrication : Détente";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"triggerp",4}};
		};
		time_per_item=2;
	};

	/* ====================================== guns ====================================== */
	class tec9
	{
		name="Fabrication : TEC9";
		sound="smelting";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_tec9"};
		};
		time_per_item=16;
		time_default=2;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class micro_uzi: tec9
	{
		name="Fabrication : Micro Uzi";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_muzi"};
		};
	};
	class m9: tec9
	{
		name="Fabrication : M9";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_m9"};
		};
	};
	class ruger_mk2: tec9
	{
		name="Fabrication : Ruger Mk2";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_mk2"};
		};
	};
	class taurus_tracker_455_gold: tec9
	{
		name="Fabrication : Taurus Tracker 455 Gold";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_ttracker_g"};
		};
	};
	class taurus_tracker_455: tec9
	{
		name="Fabrication : Taurus Tracker 455";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_ttracker"};
		};
	};
	class gsh_18: tec9
	{
		name="Fabrication : GSH18";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_gsh18"};
		};
	};
	class sig_p226: tec9
	{
		name="Fabrication : SIG P226";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_p226"};
		};
	};
	class vp_70: tec9
	{
		name="Fabrication : VP70";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_vp70"};
		};
	};
	class m1911: tec9
	{
		name="Fabrication : M1911";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_m1911"};
		};
	};
	class cz_75: tec9
	{
		name="Fabrication : CZ75";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_cz75"};
		};
	};
	class pm_9mm: tec9
	{
		name="Fabrication : PM 9mm";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"hgun_Pistol_01_F"};
		};
	};
	class desert_eagle_gold: tec9
	{
		name="Fabrication : Desert Eagle Gold";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_Deagleg"};
		};
	};
	class desert_eagle: tec9
	{
		name="Fabrication : Desert Eagle";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_deagle"};
		};
	};
	class desert_eagle_silver: tec9
	{
		name="Fabrication : Desert Eagle Silver";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_Deagles"};
		};
	};
	class desert_eagle_modern: tec9
	{
		name="Fabrication : Desert Eagle Modern";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_Deaglem"};
		};
	};
	class protector: tec9
	{
		name="Fabrication : Protector";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_shoulderp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"SMG_05_F"};
		};
	};
	class ump_45: tec9
	{
		name="Fabrication : UMP45";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_shoulderp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Skyline_UMP45_01_F"};
		};
		time_per_item=1;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_gun"};
			};
			class WEST
			{
				licenses[]={"company_gun"};
			};
			class GUER
			{
				licenses[]={"company_gun"};
			};
		};
	};
	class RH_g17: tec9
	{
		name="Fabrication : Glock 17";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_shoulderp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_g17"};
		};
		time_per_item=1;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_gun"};
			};
			class WEST
			{
				licenses[]={"company_gun"};
			};
			class GUER
			{
				licenses[]={"company_gun"};
			};
		};
	};
	class RH_17Rnd_9x19_g17
	{
		name="Fabrication :Chargeur de Glock 17";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",19}};
		};
		class receive
		{
			items_arma[]={"RH_17Rnd_9x19_g17"};
		};
		time_per_item=1;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_gun"};
			};
			class WEST
			{
				licenses[]={"company_gun"};
			};
			class GUER
			{
				licenses[]={"company_gun"};
			};
		};
	};
	class fnp_45: tec9
	{
		name="Fabrication : FNP45";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_fnp45"};
		};
	};
	class pm73_rak: tec9
	{
		name="Fabrication : PM73 RAK";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Skyline_pm73rak_01_F"};
		};
	};
	class rook_40: tec9
	{
		name="Fabrication : Rook 40";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"hgun_Rook40_F"};
		};
	};
	class sw_659: tec9
	{
		name="Fabrication : SW 659";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_sw659"};
		};
	};
	class tt_33: tec9
	{
		name="Fabrication : TT 33";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_tt33"};
		};
	};
	class g17: tec9
	{
		name="Fabrication : G17";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_g17"};
		};
	};
	class blaser_b95: tec9
	{
		name="Fabrication : Blaser B95";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",2},{"intermediary_gripp",1},{"intermediary_slapperp",2},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Skyline_B95_01_F"};
		};
	};
	class glock_18: tec9
	{
		name="Fabrication : Glock 18";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_g18"};
		};
	};
	class glock_17: tec9
	{
		name="Fabrication : Glock 17";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_g17"};
		};
	};
	class kimber_night_warrior: tec9
	{
		name="Fabrication : Kimber Night Warrior";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_kimber_nw"};
		};
	};
	class mateba_model_6_unica: tec9
	{
		name="Fabrication : Mateba Unica";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_mateba"};
		};
	};
	class taurus_raging_bull: tec9
	{
		name="Fabrication : Taurus Raging bull";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_bull"};
		};
	};
	class usp_40_match: tec9
	{
		name="Fabrication : USP 40";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_uspm"};
		};
	};
	class vz61_skorpion: tec9
	{
		name="Fabrication : VZ61 Skorpion";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"RH_vz61"};
		};
	};
	class mp5: tec9
	{
		name="Fabrication : MP5";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"ffaa_armas_hkmp5pdw"};
		};
	};
	class mp7: tec9
	{
		name="Fabrication : MP7";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"C1987_MP7"};
		};
	};
	class sdar: tec9
	{
		name="Fabrication : SDAR";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Fett_SDAR"};
		};
	};
	class vermin_smg: tec9
	{
		name="Fabrication : Vermin SMG";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"SMG_01_F"};
		};
	};

	class AKM
	{
		name="Fabrication : AK74 MTK";
		sound="smelting";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"hlc_rifle_ak74_MTK"};
		};
		time_per_item=25;
		time_default=2;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class aug_a1
	{
		name="Fabrication : AUG A1";
		sound="smelting";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Skyline_AugA1_01_F"};
		};
		time_per_item=25;
		time_default=2;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class mp44: AKM
	{
		name="Fabrication : MP 44";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Alysia_MP44"};
		};
	};
	class car_95: AKM
	{
		name="Fabrication : CAR 95";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"arifle_CTAR_blk_F"};
		};
	};
	class car_95_1: AKM
	{
		name="Fabrication : CAR 95 (1)";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"arifle_CTARS_ghex_F"};
		};
	};
	class M4A1: AKM
	{
		name="Fabrication : M4A1";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"hlc_rifle_M4"};
		};
	};
	class DP_28: AKM
	{
		name="Fabrication : DP28";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Skyline_DP28_01_F"};
		};
	};
	class AKS: AKM
	{
		name="Fabrication : AKS";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"hlc_rifle_aks74_MTK"};
		};
	};
	class M4A1_COMPACT: AKM
	{
		name="Fabrication : M4A1 Compact";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"hlc_rifle_M4"};
		};
	};
	class MOSIN: AKM
	{
		name="Fabrication : Mosin";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Skyline_Mosin9130_01_F"};
		};
	};
	class MOSIN_BAILLONETTE: AKM
	{
		name="Fabrication : Mosin Baillonette";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Skyline_Mosin9130_Bayonette_02_F"};
		};
	};
	class AK12: AKM
	{
		name="Fabrication : AK12";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"arifle_AK12_F"};
		};
	};
	class SVD: AKM
	{
		name="Fabrication : SVD";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"Skyline_SVD_01_F"};
		};
	};
	class fn_fall: AKM
	{
		name="Fabrication : FN FALL";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"hlc_rifle_M4"};
		};
	};
	class katiba: fn_fall
	{
		name="Fabrication : Katiba";
		class receive
		{
			items_arma[]={"arifle_Katiba_C_F"};
		};
	};

	class hk416: AKM
	{
		name="Fabrication : HK 416";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"R3F_HK416S_HG"};
		};
	};

	class hk417: AKM
	{
		name="Fabrication : HK 417";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1}};
		};
		class receive
		{
			items_arma[]={"R3F_HK417S_HG"};
		};
	};

	class magazine_akm
	{
		name="Fabrication : Chargeur AKM";
		sound="smelting";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30}};
		};
		class receive
		{
			items_arma[]={"hlc_30Rnd_545x39_B_AK"};
		};
		time_default=3;
		time_per_item=2;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class magazine_m4a1: magazine_akm
	{
		name="Fabrication : Chargeur M4A1";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30}};
		};
		class receive
		{
			items_arma[]={"hlc_30rnd_556x45_EPR"};
		};
	};

	class magazine_hk416: magazine_akm
	{
		name="Fabrication : Chargeur HK 416";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30}};
		};
		class receive
		{
			items_arma[]={"R3F_30Rnd_556x45_HK416"};
		};
	};

	class magazine_hk417: magazine_akm
	{
		name="Fabrication : Chargeur HK 417";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30}};
		};
		class receive
		{
			items_arma[]={"R3F_20Rnd_762x51_HK417"};
		};
	};
	class magazine_dp28: magazine_akm
	{
		name="Fabrication : Chargeur DP28";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",47}};
		};
		class receive
		{
			items_arma[]={"47Rnd_DP28_Mag"};
		};
	};
	class magazine_micro_uzi: magazine_akm
	{
		name="Fabrication : Chargeur Micro Uzi";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",30}};
		};
		class receive
		{
			items_arma[]={"RH_30Rnd_9x19_UZI"};
		};
	};
	class magazine_ruger_mk2: magazine_akm
	{
		name="Fabrication : Chargeur Ruger Mk2";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",10}};
		};
		class receive
		{
			items_arma[]={"RH_10Rnd_22LR_mk2"};
		};
	};
	class magazine_aks: magazine_akm
	{
		name="Fabrication : Chargeur AKS";
		class receive
		{
			items_arma[]={"hlc_30Rnd_545x39_B_AK"};
		};
	};
	class magazine_mosin: magazine_akm
	{
		name="Fabrication : Chargeur Mosin";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",5}};
		};
		class receive
		{
			items_arma[]={"5Rnd_762x54_Mosin"};
		};
	};
	class magazine_ak_12: magazine_akm
	{
		name="Fabrication : Chargeur AK-12";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30}};
		};
		class receive
		{
			items_arma[]={"30Rnd_762x39_Mag_F"};
		};
	};
	class magazine_svd: magazine_akm
	{
		name="Fabrication : Chargeur SVD";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",10}};
		};
		class receive
		{
			items_arma[]={"10Rnd_SVD_Mag"};
		};
	};
	class magazine_desert_eagle_gold: magazine_akm
	{
		name="Fabrication : Chargeur Desert Eagle Gold";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"bulletp",7}};
		};
		class receive
		{
			items_arma[]={"RH_7Rnd_50_AE"};
		};
	};
	class magazine_desert_eagle: magazine_akm
	{
		name="Fabrication : Chargeur Desert Eagle";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"bulletp",7}};
		};
		class receive
		{
			items_arma[]={"RH_7Rnd_50_AE"};
		};
	};
	class magazine_desert_eagle_silver: magazine_akm
	{
		name="Fabrication : Chargeur Desert Eagle Silver";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"bulletp",7}};
		};
		class receive
		{
			items_arma[]={"RH_7Rnd_50_AE"};
		};
	};
	class magazine_desert_eagle_modern: magazine_akm
	{
		name="Fabrication : Chargeur Desert Eagle Modern";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"bulletp",7}};
		};
		class receive
		{
			items_arma[]={"RH_7Rnd_50_AE"};
		};
	};
	class magazine_makarov: magazine_akm
	{
		name="Fabrication : Chargeur Makarov";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",8}};
		};
		class receive
		{
			items_arma[]={"RH_8Rnd_9x18_Mak"};
		};
	};
	class magazine_taurus_tracker_455: magazine_akm
	{
		name="Fabrication : Chargeur Taurus Tracker 455";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",6}};
		};
		class receive
		{
			items_arma[]={"RH_6Rnd_45ACP_Mag"};
		};
	};
	class magazine_gsh_18: magazine_akm
	{
		name="Fabrication : Chargeur GSH-18";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",18}};
		};
		class receive
		{
			items_arma[]={"RH_18Rnd_9x19_gsh"};
		};
	};
	class magazine_sig_p226: magazine_akm
	{
		name="Fabrication : Chargeur Sig P226";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",15}};
		};
		class receive
		{
			items_arma[]={"RH_15Rnd_9x19_SIG"};
		};
	};
	class magazine_vp_70: magazine_akm
	{
		name="Fabrication : Chargeur VP-70";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",18}};
		};
		class receive
		{
			items_arma[]={"RH_18Rnd_9x19_VP"};
		};
	};
	class magazine_m1911: magazine_akm
	{
		name="Fabrication : Chargeur M1911";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",7}};
		};
		class receive
		{
			items_arma[]={"RH_7Rnd_45cal_m1911"};
		};
	};
	class magazine_cz_75: magazine_akm
	{
		name="Fabrication : Chargeur CZ 75";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",16}};
		};
		class receive
		{
			items_arma[]={"RH_16Rnd_9x19_CZ"};
		};
	};
	class magazine_pm_9mm: magazine_akm
	{
		name="Fabrication : Chargeur PM 9mm";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",10}};
		};
		class receive
		{
			items_arma[]={"10Rnd_9x21_Mag"};
		};
	};
	class magazine_g17: magazine_akm
	{
		name="Fabrication : Chargeur G17";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",17}};
		};
		class receive
		{
			items_arma[]={"RH_17Rnd_9x19_g17"};
		};
	};
	class magazine_protector: magazine_akm
	{
		name="Fabrication : Chargeur Protector";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",30}};
		};
		class receive
		{
			items_arma[]={"30Rnd_9x21_Mag_SMG_02"};
		};
	};
	class magazine_ump45: magazine_akm
	{
		name="Fabrication : Chargeur UMP45";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",25}};
		};
		class receive
		{
			items_arma[]={"25Rnd_45ACP_Mag"};
		};
	};
	class magazine_fnp_45: magazine_akm
	{
		name="Fabrication : Chargeur FNP 45";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",15}};
		};
		class receive
		{
			items_arma[]={"RH_15Rnd_45cal_fnp"};
		};
	};
	class magazine_pm73_rak: magazine_akm
	{
		name="Fabrication : Chargeur PM73_RAK";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",25}};
		};
		class receive
		{
			items_arma[]={"25Rnd_380_Mag"};
		};
	};
	class magazine_rook_40: magazine_akm
	{
		name="Fabrication : Chargeur Rook 40";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",16}};
		};
		class receive
		{
			items_arma[]={"16Rnd_9x21_Mag"};
		};
	};
	class magazine_sw_659: magazine_akm
	{
		name="Fabrication : Chargeur SW 659";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",14}};
		};
		class receive
		{
			items_arma[]={"RH_14Rnd_9x19_sw"};
		};
	};
	class magazine_tt_33: magazine_akm
	{
		name="Fabrication : Chargeur TT 33";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",8}};
		};
		class receive
		{
			items_arma[]={"RH_8Rnd_762_tt33"};
		};
	};
	class magazine_blaser_b95: magazine_akm
	{
		name="Fabrication : Chargeur Blaser B95";
		class require
		{
			items_virtual[]={{"magazinep",1},{"chevrotinep",2}};
		};
		class receive
		{
			items_arma[]={"2Rnd_B95_Mag"};
		};
	};
	class magazine_glock_18: magazine_akm
	{
		name="Fabrication : Chargeur Glock 18";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",19}};
		};
		class receive
		{
			items_arma[]={"RH_19Rnd_9x19_g18"};
		};
	};
	class magazine_glock_17: magazine_akm
	{
		name="Fabrication : Chargeur Glock 17";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",19}};
		};
		class receive
		{
			items_arma[]={"RH_17Rnd_9x19_g17"};
		};
	};
	class magazine_tec9: magazine_akm
	{
		name="Fabrication : Chargeur Tec 9";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",19}};
		};
		class receive
		{
			items_arma[]={"RH_32Rnd_9x19_tec"};
		};
	};
	class magazine_kimber_night_warrior: magazine_akm
	{
		name="Fabrication : Chargeur Kimber Night Warrior";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",7}};
		};
		class receive
		{
			items_arma[]={"RH_7Rnd_45cal_m1911"};
		};
	};
	class magazine_mateba_model_6_unica: magazine_akm
	{
		name="Fabrication : Chargeur Mateba Model 6 Unica";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",6}};
		};
		class receive
		{
			items_arma[]={"RH_6Rnd_44_Mag"};
		};
	};
	class magazine_taurus_raging_bull: magazine_akm
	{
		name="Fabrication : Chargeur Taurus Raging Bull";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",6}};
		};
		class receive
		{
			items_arma[]={"RH_6Rnd_454_Mag"};
		};
	};
	class magazine_usp_40_match: magazine_akm
	{
		name="Fabrication : Chargeur USP 40 Match";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",16}};
		};
		class receive
		{
			items_arma[]={"RH_16Rnd_40cal_usp"};
		};
	};
	class magazine_m9: magazine_akm
	{
		name="Fabrication : Chargeur M9";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",15}};
		};
		class receive
		{
			items_arma[]={"RH_15Rnd_9x19_M9"};
		};
	};
	class magazine_vz61: magazine_akm
	{
		name="Fabrication : Chargeur VZ61";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",20}};
		};
		class receive
		{
			items_arma[]={"RH_20Rnd_32cal_vz61"};
		};
	};
	class magazine_mp5: magazine_akm
	{
		name="Fabrication : Chargeur MP5";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",20}};
		};
		class receive
		{
			items_arma[]={"ffaa_9x19_mp5"};
		};
	};
	class magazine_mp7: magazine_akm
	{
		name="Fabrication : Chargeur MP7";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",20}};
		};
		class receive
		{
			items_arma[]={"C1987_40Rnd_46x30_mp7"};
		};
	};
	class magazine_sdar: magazine_akm
	{
		name="Fabrication : Chargeur SDAR";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",20}};
		};
		class receive
		{
			items_arma[]={"Fett_20Rnd_556x45_UW_mag"};
		};
	};
	class magazine_vermin_smg_45_acp: magazine_akm
	{
		name="Fabrication : Chargeur Vermin SMG .45 ACP";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",30}};
		};
		class receive
		{
			items_arma[]={"30Rnd_45ACP_Mag_SMG_01"};
		};
	};
	class magazine_aug_a1: magazine_akm
	{
		name="Fabrication : Chargeur Aug A1";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30}};
		};
		class receive
		{
			items_arma[]={"30Rnd_556x45_Stanag"};
		};
	};
	class magazine_mp44: magazine_akm
	{
		name="Fabrication : Chargeur MP 44";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30}};
		};
		class receive
		{
			items_arma[]={"Alysia_MP44_magazine"};
		};
	};
	class magazine_car_95: magazine_akm
	{
		name="Fabrication : Chargeur CAR 95";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30}};
		};
		class receive
		{
			items_arma[]={"30Rnd_580x42_Mag_F"};
		};
	};
	class magazine_car_95_1: magazine_akm
	{
		name="Fabrication : Chargeur CAR 95 1";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",100}};
		};
		class receive
		{
			items_arma[]={"100Rnd_580x42_Mag_F"};
		};
	};
	class magazine_fn_fall: magazine_akm
	{
		name="Fabrication : Chargeur FN Fall";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",20}};
		};
		class receive
		{
			items_arma[]={"20Rnd_762x51_Fal"};
		};
	};
	class magazine_katiba: magazine_fn_fall
	{
		name="Fabrication : Chargeur Katiba";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30}};
		};
		class receive
		{
			items_arma[]={"30Rnd_65x39_caseless_green"};
		};
	};
	/* ========== LABO GUN ========== */
	class acier_deprecated
	{
		name="Transformation du Fer en Acier";
		class require
		{
			items_virtual[]={{"charcoal",2},{"ironp",4}};
		};
		class receive
		{
			items_virtual[]={{"steelp",1}};
		};
		time_per_item=3;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class shoulder_deprecated
	{
		name="Fabrication : crosse";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"shoulderp",1}};
		};
		time_per_item=2;
		time_default=5;
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class intermediary_shoulder_deprecated: shoulder_deprecated
	{
		name="Fabrication : Crosse intermediaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_shoulderp",1}};
		};
		time_per_item=3;
	};
	class military_shoulder_deprecated: shoulder_deprecated
	{
		name="Fabrication : Crosse Militaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",3},{"woodp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_shoulderp",1}};
		};
		time_per_item=4;
	};

	class barrel_deprecated: shoulder_deprecated
	{
		name="Fabrication : Canon";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"barrelp",1}};
		};
		time_per_item=2;
	};
	class intermediary_barrel_deprecated: shoulder_deprecated
	{
		name="Fabrication : Canon intermediaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_barrelp",2}};
		};
		time_per_item=3;
	};
	class military_barrel_deprecated: shoulder_deprecated
	{
		name="Fabrication : Canon Militaire";
		class require
		{
			items_virtual[]={{"steelp",4},{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"military_barrelp",1}};
		};
		time_per_item=4;
	};

	class receiver_deprecated: shoulder_deprecated
	{
		name="Fabrication : Culasse";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"receiverp",2}};
		};
		time_per_item=2;
	};
	class intermediary_receiver_deprecated: shoulder_deprecated
	{
		name="Fabrication : Culasse intermediaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_receiverp",2}};
		};
		time_per_item=3;
	};
	class military_receiver_deprecated: shoulder_deprecated
	{
		name="Fabrication : Culasse Militaire";
		class require
		{
			items_virtual[]={{"steelp",4},{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"military_receiverp",1}};
		};
		time_per_item=4;
	};

	class grip_deprecated: shoulder_deprecated
	{
		name="Fabrication : Poignée";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"gripp",2}};
		};
		time_per_item=2;
	};
	class intermediary_grip_deprecated: shoulder_deprecated
	{
		name="Fabrication : Poignée intermediaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_gripp",2}};
		};
		time_per_item=3;
	};
	class military_grip_deprecated: shoulder_deprecated
	{
		name="Fabrication : Poignée Militaire";
		class require
		{
			items_virtual[]={{"steelp",4},{"ironp",2},{"woodp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_gripp",1}};
		};
		time_per_item=4;
	};

	class slapper_deprecated: shoulder_deprecated
	{
		name="Fabrication : Percuteur";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"slapperp",3}};
		};
		time_per_item=2;
	};
	class intermediary_slapper_deprecated: shoulder_deprecated
	{
		name="Fabrication : Percuteur intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_slapperp",2}};
		};
		time_per_item=3;
	};
	class military_slapper_deprecated: shoulder_deprecated
	{
		name="Fabrication : Percuteur Militaire";
		class require
		{
			items_virtual[]={{"steelp",3}};
		};
		class receive
		{
			items_virtual[]={{"military_slapperp",1}};
		};
		time_per_item=4;
	};

	class frame_deprecated: shoulder_deprecated
	{
		name="Fabrication : Armature";
		class require
		{
			items_virtual[]={{"steelp",2}};
		};
		class receive
		{
			items_virtual[]={{"framep",1}};
		};
		time_per_item=2;
	};
	class intermediary_frame_deprecated: shoulder_deprecated
	{
		name="Fabrication : Armature intermediaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_framep",2}};
		};
		time_per_item=3;
	};
	class military_frame_deprecated: shoulder_deprecated
	{
		name="Fabrication : Armature Militaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",3}};
		};
		class receive
		{
			items_virtual[]={{"military_framep",1}};
		};
		time_per_item=4;
	};

	class magazine_deprecated: shoulder_deprecated
	{
		name="Fabrication : Chargeur";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"magazinep",5}};
		};
		time_per_item=2;
	};
	class military_magazine_deprecated: shoulder_deprecated
	{
		name="Fabrication : Chargeur Militaire";
		class require
		{
			items_virtual[]={{"steelp",1},{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"military_magazinep",3}};
		};
		time_per_item=4;
	};

	class bullet_deprecated: shoulder_deprecated
	{
		name="Fabrication : Balles";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"bulletp",40}};
		};
		time_per_item=2;
	};
	class military_bullet_deprecated: shoulder_deprecated
	{
		name="Fabrication : Balles Militaire";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_bulletp",15}};
		};
		time_per_item=2;
	};
	class chevrotine_deprecated: shoulder_deprecated
	{
		name="Fabrication : chevrotine";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"chevrotinep",10}};
		};
		time_per_item=2;
	};

	class cylinder_deprecated: shoulder_deprecated
	{
		name="Fabrication : Barillet";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"cylinderp",2}};
		};
		time_per_item=2;
	};

	class trigger_deprecated: shoulder_deprecated
	{
		name="Fabrication : Détente";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"triggerp",3}};
		};
		time_per_item=2;
	};
	//Traitements civils
class clousp: iron
	{
		name="Fabrication de clous";
		class require
		{
			items_virtual[]={{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"clous",2}};
		};
		time_per_item=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_steel"};
			};
		};
	};
	class conserve: iron
	{
		name="Fonte du fer en conserve";
		class require
		{
			items_virtual[]={{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"conserve",3}};
		};
		class factions
		{
			class CIV
			{
				licenses[]={"traitement_fer"};
			};
		};
	};
	class light_double: iron
	{
		name="Fabrication : Lampe de Camping";
		class require
		{
			items_virtual[]={{"ironp",7}};
		};
		class receive
		{
			items_virtual[]={{"light_double",1}};
		};
		time_per_item=4;
		class factions
		{
			class CIV
			{
				licenses[]={"traitement_fer"};
			};
		};
	};
	class serrure: iron
	{
		name="Fabrication : Lampe de Camping";
		class require
		{
			items_virtual[]={{"ironp",4},{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"serrure",1}};
		};
		time_per_item=20;
		class factions
		{
			class CIV
			{
				licenses[]={"company_steel"};
			};
		};
	};
	class bombe_vide: iron
	{
		name="Fabrication : Aérosol vide";
		class require
		{
			items_virtual[]={{"ironp",3}};
		};
		class receive
		{
			items_virtual[]={{"bombe_vide",1}};
		};
		time_per_item=4;
		class factions
		{
			class CIV
			{
				licenses[]={"company_steel"};
			};
		};
	};
	class bombe_peinture: iron
	{
		name="Fabrication : Bombe de peinture blanche";
		class require
		{
			items_virtual[]={{"peinture",1},{"bombe_vide",5}};
		};
		class receive
		{
			items_virtual[]={{"bombe_peinture",5}};
		};
		time_per_item=4;
		class factions
		{
			class CIV
			{
				licenses[]={"company_garagist"};
			};
		};
	};
	class cacao
	{
		name="Transformation du cacao";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"cacao",1}};
		};
		class receive
		{
			items_virtual[]={{"cacaop",4}};
		};
		time_per_item=1;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"traitement_cacao"};
			};
			class WEST
			{
				licenses[]={"traitement_cacao"};
			};
			class GUER
			{
				licenses[]={"traitement_cacao"};
			};
		};
	};
	class tabchocop
	{
		name="Création des tablettes de chocolat";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"cacaop",4}};
		};
		class receive
		{
			items_virtual[]={{"tabchoco",2}};
		};
		time_per_item=1;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_cacao"};
			};
			class WEST
			{
				licenses[]={"company_cacao"};
			};
			class GUER
			{
				licenses[]={"company_cacao"};
			};
		};
	};
	class planchefruitdemerp
	{
		name="Création des Planche de Fruit de Mer";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"woodp",1},{"crevette",2},{"star",3},{"crabe",2},{"oursin",1}};
		};
		class receive
		{
			items_virtual[]={{"planchefruitdemer",2}};
		};
		time_per_item=1;
		time_default=2;
		class factions
		{
			class CIV
			{
				licenses[]={"company_fish"};
			};
			class WEST
			{
				licenses[]={"company_fish"};
			};
			class GUER
			{
				licenses[]={"company_fish"};
			};
		};
	};
	class wood
	{
		name="Scierie";
		sound="smelting";
		class require
		{
			items_virtual[]={{"wood",1}};
		};
		class receive
		{
			items_virtual[]={{"woodp",2},{"ecorce",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"traitement_bois"};
			};
			class WEST
			{
				licenses[]={"traitement_bois"};
			};
			class GUER
			{
				licenses[]={"traitement_bois"};
			};
		};
	};
	class palette
	{
		name="Fabrication de palette";
		sound="smelting";
		class require
		{
			items_virtual[]={{"woodp",4}};
		};
		class receive
		{
			items_virtual[]={{"palette",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"company_wood"};
			};
			class WEST
			{
				licenses[]={"company_wood"};
			};
			class GUER
			{
				licenses[]={"company_wood"};
			};
		};
	};
	class cartonp
	{
		name="Fabrication de carton";
		sound="smelting";
		class require
		{
			items_virtual[]={{"ecorce",2}};
		};
		class receive
		{
			items_virtual[]={{"carton",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"company_wood"};
			};
			class WEST
			{
				licenses[]={"company_wood"};
			};
			class GUER
			{
				licenses[]={"company_wood"};
			};
		};
	};
	class bounty
	{
		name="Fabrication des Bountys";
		sound="smelting";
		class require
		{
			items_virtual[]={{"coconut",1},{"cacaop",2}};
		};
		class receive
		{
			items_virtual[]={{"bounty",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"traitement_barrecereales"};
			};
			class WEST
			{
				licenses[]={"traitement_barrecereales"};
			};
			class GUER
			{
				licenses[]={"traitement_barrecereales"};
			};
		};
	};

	class barrecereales
	{
		name="Fabrication des barres de céréales";
		sound="smelting";
		class require
		{
			items_virtual[]={{"wheat",1},{"banana",1}};
		};
		class receive
		{
			items_virtual[]={{"barrecereales",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"traitement_barrecereales"};
			};
			class WEST
			{
				licenses[]={"traitement_barrecereales"};
			};
			class GUER
			{
				licenses[]={"traitement_barrecereales"};
			};
		};
	};
	class emballageressources_furniture
	{
		name="Usine d'emballage des Meubles";
		sound="smelting";
		class require
		{
			items_virtual[]={{"furniture",5},{"palette",2}};
		};
		class receive
		{
			items_virtual[]={{"furniturepa",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"emballageressources"};
			};
			class WEST
			{
				licenses[]={"emballageressources"};
			};
			class GUER
			{
				licenses[]={"emballageressources"};
			};
		};
	};
	class emballageressources_cassoulet
	{
		name="Usine d'emballage du cassoulet";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cassoulet",10},{"palette",2}};
		};
		class receive
		{
			items_virtual[]={{"cassouletemba",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"emballageressources"};
			};
			class WEST
			{
				licenses[]={"emballageressources"};
			};
			class GUER
			{
				licenses[]={"emballageressources"};
			};
		};
	};
	class emballageressources_steelp
	{
		name="Usine d'emballage des Barres d'acier";
		sound="smelting";
		class require
		{
			items_virtual[]={{"steelp",10},{"palette",2}};
		};
		class receive
		{
			items_virtual[]={{"steelppa",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"emballageressources"};
			};
			class WEST
			{
				licenses[]={"emballageressources"};
			};
			class GUER
			{
				licenses[]={"emballageressources"};
			};
		};
	};
	class emballageressources_glassemba
	{
		name="Usine d'emballage du verre";
		sound="smelting";
		class require
		{
			items_virtual[]={{"glass",10},{"palette",2}};
		};
		class receive
		{
			items_virtual[]={{"glassemba",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"emballageressources"};
			};
			class WEST
			{
				licenses[]={"emballageressources"};
			};
			class GUER
			{
				licenses[]={"emballageressources"};
			};
		};
	};
	class emballageressources_tabchocoemba
	{
		name="Usine d'emballage du chocolat";
		sound="smelting";
		class require
		{
			items_virtual[]={{"tabchoco",10},{"palette",2}};
		};
		class receive
		{
			items_virtual[]={{"tabchocoemba",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"emballageressources"};
			};
			class WEST
			{
				licenses[]={"emballageressources"};
			};
			class GUER
			{
				licenses[]={"emballageressources"};
			};
		};
	};
	class emballageressources_cigarette
	{
		name="Usine d'emballage des Cigarettes";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cigarette",10},{"palette",2}};
		};
		class receive
		{
			items_virtual[]={{"cigarettepa",1}};
		};
		time_per_item=1;
		time_default=5;
		class factions
		{
			class CIV
			{
				licenses[]={"emballageressources"};
			};
			class WEST
			{
				licenses[]={"emballageressources"};
			};
			class GUER
			{
				licenses[]={"emballageressources"};
			};
		};
	};
};
