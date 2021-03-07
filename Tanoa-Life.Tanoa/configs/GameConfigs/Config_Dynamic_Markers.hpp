class ADENIS_DYN_MARKERS
{
	//- DRUGS FIELDS
	class cocaine_field_marker_1
	{
		text="Champ de coca";
		type="Maels_illegal_field";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_field";
		positions="champs";
		distance=20;
		class shop
		{
			price=15000000;
		};
	};
	class cannabis_field_marker_1: cocaine_field_marker_1
	{
		text="Champ de cannabis";
		class shop
		{
			price=2000000;
		};
	};
	class meth_field_marker_1: cocaine_field_marker_1
	{
		text="Champ d'ephedra";
		class shop
		{
			price=20000000;
		};
	};
	class heroin_field_marker_1: cocaine_field_marker_1
	{
		text="Champ de pavot";
		class shop
		{
			price=15000000;
		};
	};
	class mushroom_field_marker_1: cocaine_field_marker_1
	{
		text="champignonnière";
		positions="mushroom";
		class shop
		{
			price=2000000;
		};
	};

	//- Blanchiment
	//- BLACKMARKETS
	class blackMarket_marker_1
	{
		text="Marché noir";
		type="Maels_sell";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		linked="blackMarket_stand_1";
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_stand";
		positions="stands_general";
		distance=5;
		class shop
		{
			price=6000000;
		};
	};
	class blackMarket_marker_2: blackMarket_marker_1
	{
		linked="blackMarket_stand_2";
		class shop: shop {};
	};

	//- RECELEURS
	class cars_seller_marker_1
	{
		text="Receleur de véhicules";
		type="Maels_luxe_car";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		linked="cars_seller_stand_1";
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_stand";
		positions="stands_general";
		distance=5;
		class shop
		{
			price=1000000;
		};
	};
	class cars_seller_marker_2: cars_seller_marker_1
	{
		linked="cars_seller_stand_2";
		class shop: shop {};
	};

	//- DEALERS
	class drugs_seller_marker_1
	{
		text="Dealeur";
		type="Maels_sell";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		linked="drugs_seller_stand_1";
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_stand";
		positions="stands_general";
		distance=5;
	};
	class drugs_seller_marker_2: drugs_seller_marker_1
	{
		linked="drugs_seller_stand_2";
	};

	//- ARCHEOLOGIE
	class archeologie_field_marker_1
	{
		text="Site archéologique";
		type="Maels_archeo";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_archeo";
		positions="archeologie";
		distance=20;
		class shop
		{
			price=2000000;
		};
	};
	class renovation_marker
	{
		text="Rénovation d'artefacts";
		type="Maels_archeo_renove";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		linked="archeologie_process_stand_1";
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_stand";
		positions="stands_general";
		distance=5;
		class shop
		{
			price=2000000;
		};
	};

	//- PILLAGE
	class pillage_field_marker_1
	{
		text="Pillage d'épave";
		type="Maels_archeo";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_field";
		positions="pillage";
		distance=20;
		class shop
		{
			price=2000000;
		};
	};

	//- METH PROCESS
	class soufre_process_marker_1
	{
		text="Hydratation du soufre";
		type="Maels_sell";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		linked="soufre_process_stand_1";
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_stand";
		positions="stands_general";
		distance=5;
		class shop
		{
			price=5000000;
		};
	};

	//- REBELS
	class rebel_marker_1
	{
		text="Fournisseur illégal";
		type="Maels_rebel";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		linked="rebel_stand_1";
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_stand";
		positions="rebels";
		distance=5;
	};
	class rebel_marker_2: rebel_marker_1
	{
		linked="rebel_stand_2";
	};

	class corail_field_marker_1
	{
		text="Barrière de corail";
		type="Maels_corail";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_field";
		positions="recif";
		distance=20;
		class shop
		{
			price=2000000;
		};
	};

	class launder_1
	{
		text="Blanchisseur";
		type="Maels_rebel";
		color="ColorRed";
		shape="ICON";
		size=0.55;
		linked="launder_stand_1";
		destroy[]={"WEST","EAST"};
		destroy_item="destroy_stand";
		positions="rebels";
		distance=5;
	};
};
