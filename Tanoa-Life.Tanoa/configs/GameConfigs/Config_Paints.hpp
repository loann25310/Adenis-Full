#define true 1
#define false 0

class ADENIS_PAINTS
{
	class Colors
	{

		class noir // only alphanumeric characters
		{
			displayName = "Noir"; // only string
			price = 75000; // in $ (only int)
			color[] = {0, 0, 0}; // or => color = "\Path\to\texture.paa";
			time = 1200; // in seconds
			saveDB = 1; // 1 => if you want to save in the database | 0 => if you do not want
			donorLevel = 0; // 0 = non-donor | 1 or more = donor
			class require
			{
				items_virtual[]={{"bombe_peinture",3}};
			};
		};

		class blanc
		{
			displayName = "Blanc";
			price = 25000;
			color[] = {255, 255, 255};
			time = 900;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",3}};
			};
		};

		class rouge
		{
			displayName = "Rouge";
			price = 25000;
			color[] = {100, 0, 0};
			time = 720;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",3}};
			};
		};

		class vert
		{
			displayName = "Vert";
			price = 25000;
			color[] = {0, 100, 0};
			time = 720;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",3}};
			};
		};

		class bleu
		{
			displayName = "Bleu";
			price = 25000;
			color[] = {0, 0, 100};
			time = 720;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",3}};
			};
		};

		class magenta
		{
			displayName = "Magenta";
			price = 25000;
			color[] = {100, 0, 100};
			time = 720;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",3}};
			};
		};

		class silver
		{
			displayName = "Silver";
			price = 65000;
			color[] = {52, 52, 52};
			time = 720;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",3}};
			};
		};

		class gris
		{
			displayName = "Gris";
			price = 65000;
			color[] = {24, 24, 24};
			time = 900;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",3}};
			};
		};

		class violet
		{
			displayName = "Violet";
			price = 50000;
			color[] = {37, 0, 37};
			time = 13;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",3}};
			};
		};

		class saumon
		{
			displayName = "Saumon";
			price = 75000;
			color[] = {70, 32, 8};
			time = 1680;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",5}};
			};
		};

		class bleu_clair
		{
			displayName = "Bleu clair Algue marine";
			price = 75000;
			color[] = {21, 148, 148};
			time = 1500;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",5}};
			};
		};

		class caramel
		{
			displayName = "Caramel";
			price = 75000;
			color[] = {57, 21, 0};
			time = 1680;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",5}};
			};
		};

		class jaune_or
		{
			displayName = "Jaune Or";
			price = 210000;
			color[] = {126, 51, 0};
			time = 2100;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",10}};
			};
		};

		class rouge_andrinople
		{
			displayName = "Rouge d'Andrinople";
			price = 80000;
			color[] = {69, 1, 0};
			time = 1500;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",6}};
			};
		};

		class sarcelle
		{
			displayName = "Sarcelle";
			price = 80000;
			color[] = {0, 38, 38};
			time = 1680;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",6}};
			};
		};

		class amethyste
		{
			displayName = "Améthyste";
			price = 80000;
			color[] = {26, 7, 57};
			time = 1680;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",6}};
			};
		};

		class vert_imperial
		{
			displayName = "Vert Impérial";
			price = 80000;
			color[] = {0, 56, 2};
			time = 1500;
			saveDB = 1;
			donorLevel = 0;
			class require
			{
				items_virtual[]={{"bombe_peinture",6}};
			};
		};

	};
};
