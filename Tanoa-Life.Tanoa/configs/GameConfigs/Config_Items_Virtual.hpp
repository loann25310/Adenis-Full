class ADENIS_ITEMS
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                     EXEMPLE
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // class exemple - DO NOT EDIT ! EXEMPLE -
    // {
    //     name="Exemple";- Displayname -
    //     weight=1;- Must be > 0 -
    //     illegal=1;- Is item illegal ? 0=no | 1=yes IMPORTANT: Illegal items give illegal money when sold -
    //     image="Alysia_Client\Textures\Items_virtual\exemple.paa";- image path. Leave empty for no picture -
    //     store[]={};- Leave empty for default item storage behavior. If defined (classnames array such as chest) will be the only storage possible for item -
    //     class remove - Add possibility to remove object from inventory -
    //     {
    //         disableSuitcase=1;-Disable suitcase creation? 0=no | 1=yes -
    //         all=1;- Remove 1 item = 0 | Remove all item stack = 1  -
    //     };
    //     price_buy=40;- Item buy price (override if class market is define) -
    //     price_sell=10;- Item sell price (override if class market is define) -
    //     class market -Add item to market-
    //     {
    //         max=400;- Item market max sell price (max must be > min) -
    //         min=120;- Item market min sell price (min must be < max) -
    //     };
    //     class food - Add possibility to consumme item. WARNING: Class FOOD and USE cannot be defined at the same time -
    //     {
    //         hunger=5;- Hunger operation (can be negative) -
    //         thirst=-5;- Thirst operation (can be negative) -
    //         sound="eat_biscuit";- Consumme sound. Leave empty for no sound -
    //         alcool=0.15;- Alcool percentage -
    //         unlimitedRun=10;- Time in secondes player will have unlimited run if item is consumed -
    //     };
    //     class use - Add possibility to use item. WARNING: Class FOOD and USE cannot be defined at the same time -
    //     {
    //         action="hint 'hi there !';";-Script execution -
    //     };
    //     buy_license_CIV="drive";- License require to buy item 'exemple' as CIVILIAN (civ) -
    //     sell_license_CIV="drive";- License require to sell item 'exemple' as CIVILIAN (civ) -
    //     buy_rank_CIV=1;- Rank require to buy item 'exemple' as CIVILIAN (civ) -
    //     sell_rank_CIV=1;- Rank require to sell item 'exemple' as CIVILIAN (civ) -
    //     buy_license_EAST="boat";- License require to buy item 'exemple' as EAST (opfor) -
    //     sell_license_EAST="boat";- License require to sell item 'exemple' as EAST (opfor) -
    //     buy_rank_EAST=2;- Rank require to buy item 'exemple' as EAST (opfor) -
    //     sell_rank_EAST=2;- Rank require to sell item 'exemple' as EAST (opfor) -
    //     buy_license_WEST="drive";- License require to buy item 'exemple' as WEST (blufor) -
    //     sell_license_WEST="drive";- License require to sell item 'exemple' as WEST (blufor) -
    //     buy_rank_WEST=3;- Rank require to buy item 'exemple' as WEST (blufor) -
    //     sell_rank_WEST=3;- Rank require to sell item 'exemple' as WEST (blufor) -
    //     buy_license_GUER="drive";- License require to buy item 'exemple' as GUER (independent) -
    //     sell_license_GUER="drive";- License require to sell item 'exemple' as GUER (independent) -
    //     buy_rank_GUER=4;- Rank require to buy item 'exemple' as GUER (independent) -
    //     sell_rank_GUER=4;- Rank require to sell item 'exemple' as GUER (independent) -
    // };
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class illegal_money
    {
        name="$ (argent sale)";
        weight=0;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\money.paa";
        class use
        {
            action="closeDialog 0; createDialog 'RscDivideIllegalMoney';";
        };
        class remove
        {
            all=1;
        };
    };

    class engrais
    {
        name="Engrais";
        weight=1;
        price_buy=38;
        image="Alysia_Client\Textures\Items_virtual\engrais.paa";
        class remove {};
    };

    class handcuffs
    {
        name="Menottes";
        weight=2;
        price_buy=120;
        image="Alysia_Client\Textures\Items_virtual\menottes.paa";
        class remove {};
    };

    class fauxpapiers
    {
        name="Kit de faux papiers";
        weight=1;
        illegal=1;
        class remove {};
        class use
        {
            action="[false] spawn AlysiaClient_fnc_item_fauxPapiers;";
        };
    };

    class handcuffkeys
    {
        name="Clés de menottes";
        weight=1;
        price_buy=12;
        image="Alysia_Client\Textures\Items_virtual\clee_menottes.paa";
        class remove {};
    };

    class medoc_rhume
    {
        name="Comprimé de Nurofex";
        buy_license_CIV="admin";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\medoc_rhume.paa";
        price_buy=200;
        class food
        {
            sound="painkiller_01";
        };
        class remove {};
    };
    class medoc_toux_1
    {
        name="Bouteille de Sirop de Tussidax";
        buy_license_CIV="admin";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\medoc_toux_1.paa";
        price_buy=520;
        class food
        {
            thirst=10;
            sound="drink_water";
        };
        class remove {};
    };
    class medoc_toux_2
    {
        name="Comprimé de Padéryx";
        buy_license_CIV="admin";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\medoc_toux_2.paa";
        price_buy=200;
        class food
        {
            sound="painkiller_01";
        };
        class remove {};
    };
    class medoc_depression
    {
        name="Antidépresseurs";
        buy_license_CIV="admin";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\medoc_toux_2.paa";
        price_buy=180;
        class food
        {
            sound="painkiller_01";
        };
        class remove {};
    };

    class adn
    {
        name="Test ADN";
        buy_license_GUER="guer_gen";
        buy_license_CIV="admin";
        buy_rank_GUER=1;
        weight=3;
        price_buy=24500;
        image="Alysia_Client\Textures\Items_virtual\adn.paa";
        class remove {};
    };
    class scalpel
    {
        name="Scalpel chirurgical";
        buy_license_GUER="guer_chirurgien";
        buy_license_CIV="admin";
        buy_rank_GUER=1;
        weight=1;
        price_buy=9500;
        image="Alysia_Client\Textures\Items_virtual\scalpel.paa";
        class remove {};
    };
    class stethoscope
    {
        name="Stethoscope";
        buy_license_GUER="guer_medical";
        buy_license_CIV="admin";
        buy_rank_GUER=1;
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\stethoscope.paa";
        price_buy=1600;
        class remove {};
    };
    class brancard
    {
        name="Brancard";
        buy_rank_GUER=1;
        buy_license_CIV="admin";
        weight=7;
        image="Alysia_Client\Textures\Items_virtual\brancard.paa";
        price_buy=350;
        class use
        {
            action="['brancard'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };

    class nitro
    {
        name="Nitro";
        weight=4;
        price_buy=5750;
        image="Alysia_Client\Textures\Items_virtual\nitroboost.paa";
        class use
        {
            action="[cursorObject] spawn AlysiaClient_fnc_item_nitro;";
        };
        class remove {};
    };

    class barriere
    {
        name="Barrière";
        weight=1;
        price_buy=50;
        image="Alysia_Client\Textures\Items_virtual\barriere.paa";
        buy_license_CIV="company_garagist";
        class use
        {
            action="['barriere'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class barriere3
    {
        name="Barrière x3";
        weight=3;
        price_buy=50;
        image="Alysia_Client\Textures\Items_virtual\barriere.paa";
        buy_license_CIV="company_garagist";
        class use
        {
            action="['barriere3'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class cone
    {
        name="Cône";
        weight=1;
        price_buy=50;
        buy_license_CIV="company_garagist";
        image="Alysia_Client\Textures\Items_virtual\cone.paa";
        class use
        {
            action="['cone'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class coneflash
    {
        name="Cône Flash";
        weight=1;
        price_buy=50;
        buy_license_CIV="company_garagist";
        image="Alysia_Client\Textures\Items_virtual\cone.paa";
        class use
        {
            action="['coneflash'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class tmpgauche
    {
        name="Gauche Temporaire";
        weight=1;
        price_buy=50;
        buy_license_CIV="company_garagist";
        image="Alysia_Client\Textures\Items_virtual\cone.paa";
        class use
        {
            action="['tmpgauche'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class tmpdroite
    {
        name="Droite Temporaire";
        weight=1;
        price_buy=50;
        buy_license_CIV="company_garagist";
        image="Alysia_Client\Textures\Items_virtual\cone.paa";
        class use
        {
            action="['tmpdroite'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class p50temp
    {
        name="50 Temporaire";
        weight=1;
        price_buy=50;
        buy_license_CIV="company_garagist";
        image="Alysia_Client\Textures\Items_virtual\cone.paa";
        class use
        {
            action="['p50temp'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class p30temp
    {
        name="30 Temporaire";
        weight=1;
        price_buy=50;
        buy_license_CIV="company_garagist";
        image="Alysia_Client\Textures\Items_virtual\cone.paa";
        class use
        {
            action="['p30temp'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };

    class bargate
    {
        name="Barrière (porte)";
        weight=11;
        price_buy=550;
        image="Alysia_Client\Textures\Items_virtual\bargate.paa";
        class use
        {
            action="['bargate'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class table_wood
    {
        name="Table en bois";
        weight=9;
        image="Alysia_Client\Textures\Items_virtual\table_wood.paa";
        class use
        {
            action="['table_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class chair_wood
    {
        name="Chaise en bois";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\chair_wood.paa";
        class use
        {
            action="['chair_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class light_double
    {
        name="Lampe de Camping";
        weight=3;
        image="";
        class use
        {
            action="['light_double'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class bagfence_01
    {
        name="Mur de sacs de sable";
        weight=4;
        image="";
        class use
        {
            action="['bagfence_01'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class bagfence_02: bagfence_01
    {
        name="Mur de sacs de sable courbé";
        image="";
        class use
        {
            action="['bagfence_02'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class spikeStrip
    {
        name="Herse";
        weight=5;
        price_buy=130;
        image="Alysia_Client\Textures\Items_virtual\herse.paa";
        class use
        {
            action="['spikeStrip'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class Coffin_01_F
    {
        name="Cercueil bois et or";
        weight=6;
        class use
        {
            action="['Coffin_01_F'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class Coffin_02_F
    {
        name="Cercueil fer";
        weight=6;
        class use
        {
            action="['Coffin_02_F'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class Coffin_02_Flag_F
    {
        name="Cercueil bois avec drapeau";
        weight=6;
        class use
        {
            action="['Coffin_02_Flag_F'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class hedgehog
    {
        name="Hérisson Tchèque";
        weight=6;
        class use
        {
            action="['hedgehog'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class watchtower_wood
    {
        name="Tour de guet en bois";
        weight=20;
        class use
        {
            action="['watchtower_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class watchpost_tall
    {
        name="Poste de garde (grand)";
        weight=30;
        class use
        {
            action="['watchpost_tall'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class watchpost_small
    {
        name="Poste de garde (petit)";
        weight=22;
        class use
        {
            action="['watchpost_small'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class camoNet
    {
        name="Filet de camouflage";
        weight=10;
        class use
        {
            action="['camoNet'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };

    class tabac_seed
    {
        name="Graine (tabac)";
        weight=1;
        price_buy=80;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class tabac
    {
        name="Tabac";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\tabac.paa";
        class remove {};
    };
    class cigare
    {
        name="Cigare";
        weight=2;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\cigare.paa";
        class market
        {
            max=1675;
            min=573;
        };
        class remove {};
    };
    class cigarette
    {
        name="Cigarette";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cigarette.paa";
        entrepriseItem = 1;
        class market
        {
            max=2500;
            min=1000;
        };
        class remove {};
    };
    class cigarettepa
    {
        name="Cigarette Emballé";
        weight=10;
        image="Adenis_Textures\carton.paa";
        entrepriseItem = 1;
        class market
        {
            max=34000;
            min=14000;
        };
        class remove {};
    };

    class cassouletemba
    {
        name="Cassoulet Emballé";
        weight=28;
        image="Adenis_Textures\carton.paa";
        entrepriseItem = 1;
        class market
        {
            max=55000;
            min=45000;
        };
        class remove {};
    };

    class cafeemballe
    {
        name="Café Emballé";
        weight=30;
        image="Adenis_Textures\carton.paa";
        entrepriseItem = 1;
        class market
        {
            max=85000;
            min=70000;
        };
        class remove {};
    };

    class objvaleur
    {
        name="Objet de valeur";
        weight=2;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\objet_de_valeur.paa";
        class market
        {
            max=700;
            min=270;
        };
        class remove {};
    };

    class artefact
    {
        name="Artefact";
        weight=4;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\artefact.paa";
        class market
        {
            max=1500;
            min=450;
        };
        class remove {};
    };
    class artefact_R
    {
        name="Artefact rénové";
        weight=4;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\artefact_R.paa";
        class market
        {
            max=2750;
            min=825;
        };
        class remove {};
    };

    class wood
    {
        name="Buche de bois";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\tas_bois.paa";
        class market
        {
            max=588;
            min=324;
        };
        class remove {};
    };

    class ecorce
    {
        name="Ecorce de bois";
        weight=2;
        image="Adenis_Textures\ecorce.paa";
        class remove
        {
            disableSuitcase=1;
            all=1;
        };
    };

    class woodp
    {
        name="Planche";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\planche.paa";
        class market
        {
            max=756;
            min=416;
        };
        class remove {};
    };
    class furniture
    {
        name="Meuble";
        weight=5;
        image="Alysia_Client\Textures\Items_virtual\meuble.paa";
        entrepriseItem = 1;
        class market
        {
            max=5800;
            min=3639;
        };
        class remove {};
    };

    class furniturepa
    {
        name="Meuble Emballé";
        weight=25;
        image="Adenis_Textures\carton.paa";
        entrepriseItem = 1;
        class market
        {
            max=64000;
            min=48000;
        };
        class remove {};
    };

    class palette
    {
        name="Palette";
        weight=2;
        image="Adenis_Textures\palette.paa";
        entrepriseItem = 1;
        class remove {};
    };

    class iron
    {
        name="Minerai de fer";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\minerai_fer.paa";
        class remove {};
    };
    class ironp
    {
        name="Lingot de fer";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\lingot_fer.paa";
        class market
        {
            max=1192;
            min=774;
        };
        class remove {};
    };
    class soufre
    {
        name="Soufre";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\soufre.paa";
        price_sell=70;
        class remove {};
    };
    class hsoufre
    {
        name="Hydrate de soufre";
        weight=2;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\soufre_hydrate.paa";
        class remove {};
    };
    class steelp
    {
        name="Barre Acier";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\steel.paa";
        entrepriseItem = 1;
        class market
        {
            max=4500;
            min=2500;
        };
        class remove {};
    };
    class steelppa
    {
        name="Barre Acier Emballé";
        weight=20;
        image="Adenis_Textures\carton.paa";
        entrepriseItem = 1;
        class market
        {
            max=59000;
            min=48000;
        };
        class remove {};
    };
    class charcoal
    {
        name="Charbon";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\charbon.paa";
        class remove {};
    };

    class sand
    {
        name="Sable";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\sable.paa";
        class remove {};
    };
    class glass
    {
        name="Verre";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\verre.paa";
        entrepriseItem = 1;
        class market
        {
            max=1200;
            min=800;
        };
        class remove {};
    };
    class glassemba
    {
        name="Verre Emballé";
        weight=15;
        image="Adenis_Textures\carton.paa";
        entrepriseItem = 1;
        class market
        {
            max=31000;
            min=20000;
        };
        class remove {};
    };
    class seringue
    {
        name="Seringue";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\seringue_vide.paa";
        class remove {};
    };
    class bouteillevide
    {
        name="Bouteille vide";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\bouteillevide.paa";
        class remove {};
    };
    class conserve
    {
        name="Conserve vide";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\conserve.paa";
        class remove {};
    };

    class cocaine_seed
    {
        name="Graine (coca)";
        weight=1;
        price_buy=324;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class cocaine
    {
        name="Feuille de coca";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\coca.paa";
        class remove {};
    };
    class cocainep
    {
        name="Cocaïne pure";
        weight=1;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\cocaine.paa";
        class food
        {
            sound="snif";
            hunger=-30;
            thirst=-35;
            alcool=0.1;
            unlimitedRun=120;
        };
        class remove {};
    };
    class cocainepc
    {
        name="Cocaïne coupée";
        weight=1;
        illegal=1;
        lockShop=1;
        image="Alysia_Client\Textures\Items_virtual\cocaine_coupe.paa";
        class market
        {
            max=6284;
            min=853;
        };
        class food
        {
            sound="snif";
            hunger=-10;
            thirst=-15;
            alcool=0.2;
            unlimitedRun=68;
        };
        class remove {};
    };

    class heroin_seed
    {
        name="Graine (pavot)";
        weight=1;
        price_buy=410;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class heroin
    {
        name="Fleur de pavot";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\pavot.paa";
        class remove {};
    };
    class heroinp
    {
        name="Heroïne pure";
        weight=2;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\heroine.paa";
        class remove {};
    };
    class heroinps
    {
        name="Seringue d'héroïne pure";
        weight=1;
        illegal=1;
        lockShop=1;
        image="Alysia_Client\Textures\Items_virtual\seringue_heroine.paa";
        class market
        {
            max=7200;
            min=900;
        };
        class remove {};
        class food
        {
            sound="heroin";
            thirst=-15;
            alcool=0.1;
            unlimitedRun=150;
        };
    };

    class meth_seed
    {
        name="Graine (Ephedra)";
        weight=1;
        price_buy=660;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class meth
    {
        name="Feuille d'ephedra";
        weight=4;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\ephedra.paa";
        class remove {};
    };
    class methp
    {
        name="Cristal de Méthamphétamine";
        weight=1;
        illegal=1;
        lockShop=1;
        image="Alysia_Client\Textures\Items_virtual\methamphetamine.paa";
        class market
        {
            max=10650;
            min=4095;
        };
        class food
        {
            sound="eat_biscuit";
            hunger=-10;
            thirst=-15;
            alcool=0.6;
            unlimitedRun=120;
        };
        class remove {};
    };

    class cannabis_seed
    {
        name="Graine (cannabis)";
        weight=1;
        price_buy=141;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class cannabis
    {
        name="Plant de cannabis";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\canabis.paa";
        class remove {};
    };
    class marijuana
    {
        name="Marijuana";
        weight=1;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\marijuana.paa";
        lockShop=1;
        class market
        {
            max=1400;
            min=870;
        };
        class food
        {
            sound="briquet";
            hunger=-5;
            thirst=-25;
            alcool=0.05;
        };
        class remove {};
    };
    class mushroom_seed
    {
        name="Spore (champignon)";
        weight=1;
        price_buy=141;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class mushroom
    {
        name="Pied de Champignon hallucinogène";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\mushroom.paa";
        class food
        {
            sound="eat_biscuit";
        };
        class remove {};
    };
    class bocal
    {
        name="Bocal";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\bocal.paa";
        class remove {};
    };
    class mushroom_dry
    {
        name="Champignon hallucinogène séché";
        weight=1;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\mushroom_dry.paa";
        class food
        {
            sound="eat_biscuit";
            hunger=5;
            thirst=-5;
            alcool=0.1;
        };
        class remove {};
    };
    class mushroom_bocal
    {
        name="Bocal de champignon séché";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\bocal_mushroom.paa";
        lockShop=1;
        class market
        {
            max=3370;
            min=800;
        };
        class food
        {
            sound="eat_biscuit";
            hunger=5;
            thirst=-5;
            alcool=0.1;
        };
        class remove {};
    };

    class fishingpoles
    {
        name="Filet de pêche";
        weight=1;
        price_buy=100;
        image="Alysia_Client\Textures\Items_virtual\filet_peche.paa";
        class remove {};
    };

    class bean_seed
    {
        name="Graine (haricot)";
        weight=1;
        price_buy=18;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class bean
    {
        name="Haricot";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\haricot.paa";
        class market
        {
            max=147;
            min=81;
        };
        class remove {};
    };
    class bean_prepared
    {
        name="Haricot épluché";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\haricot.paa";
        class remove {};
        class food
        {
            hunger=2;
            sound="eat_biscuit";
        };
    };
    class bean_mash
    {
        name="Ration alimentaire (purée de haricots)";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\prison_food.paa";
        class remove {};
        class food
        {
            hunger=50;
            thirst=30;
            sound="eat_biscuit";
        };
    };

    class corn_seed
    {
        name="Graine (maïs)";
        weight=1;
        price_buy=17;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class corn
    {
        name="Maïs";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\mais.paa";
        class market
        {
            max=147;
            min=81;
        };
        class food
        {
            hunger=10;
            sound="eat_biscuit";
        };
        class remove {};
    };

    class wheatseed
    {
        name="Graine (blé)";
        weight=1;
        price_buy=8;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class wheat
    {
        name="Blé";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\ble.paa";
        class market
        {
            max=189;
            min=104;
        };
        class remove {};
    };
    class wheat_cake
    {
        name="Ration alimentaire (gateaux secs)";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\prison_food.paa";
        class remove {};
        class food
        {
            hunger=70;
            thirst=0;
            sound="eat_biscuit";
        };
    };

    class cotton_seed
    {
        name="Graine (coton)";
        weight=1;
        price_buy=50;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class cotton
    {
        name="Coton";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\coton.paa";
        class market
        {
            max=370;
            min=204;
        };
        class remove {};
    };
    class cottonp
    {
        name="Coton traité";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\boule_coton.paa";
        class market
        {
            max=546;
            min=301;
        };
        class remove {};
    };
    class crabe
    {
        name="Crabe";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\crabe.paa";
        class market
        {
            max=225;
            min=78;
        };
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class crevette
    {
        name="Crevette";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\crevette.paa";
        class market
        {
            max=319;
            min=89;
        };
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class star
    {
        name="Etoile de mer";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\star.paa";
        class market
        {
            max=450;
            min=132;
        };
        class remove {};
    };
    class oursin
    {
        name="Oursin";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\oursin.paa";
        class market
        {
            max=798;
            min=201;
        };
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class sifflet
    {
        name="Sifflet";
        weight=1;
        price_buy=3;
        image="Alysia_Client\Textures\Items_virtual\sifflet.paa";
        class remove {};
    };
    class alcool_test
    {
        name="Alcootest";
        price_buy=15;
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\alcool_test.paa";
        class remove {};
    };
    class pierre
    {
        name="Pierre";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\pierre.paa";
        class remove {};
    };
    class ciment
    {
        name="Ciment";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\ciment.paa";
        entrepriseItem = 1;
        class market
        {
            max=2400;
            min=1000;
        };
        class remove {};
    };
    class clous
    {
        name="Boite de clous";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\steel.paa";
        entrepriseItem = 1;
        class remove {};
    };
    class chips
    {
        name="Paquet de chips";
        weight=1;
        price_buy=41;
        image="Alysia_Client\Textures\Items_virtual\chips.paa";
        class food
        {
            hunger=20;
            thirst=-10;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class chocolat
    {
        name="Barre chocolaté";
        weight=1;
        price_buy=14;
        image="Alysia_Client\Textures\Items_virtual\chocolat.paa";
        class food
        {
            hunger=10;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class villagoise
    {
        name="Villagoise";
        weight=1;
        price_buy=71;
        image="Alysia_Client\Textures\Items_virtual\villageoise.paa";
        class food
        {
            hunger=-5;
            thirst=15;
            sound="drink_wine";
            alcool=0.06;
        };
        class remove {};
    };
    class eau50
    {
        name="Bouteille d'eau de 50cl";
        weight=1;
        price_buy=23;
        image="Alysia_Client\Textures\Items_virtual\eau50.paa";
        class food
        {
            thirst=15;
            sound="drink_water";
        };
        class remove {};
    };
    class prison_food
    {
        name="Plateau repas de prison";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\prison_food.paa";
        class food
        {
            hunger=100;
            thirst=80;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class cassoulet
    {
        name="Conserve de Cassoulet";
        weight=2;
        image="Alysia_Client\Textures\Items_Inventaire\Cassoulet.paa";
        entrepriseItem = 1;
        class food
        {
            hunger=50;
            thirst=-10;
            sound="eat_biscuit";
            unlimitedRun=240;
        };
        class remove {};
        class market
        {
            max=4000;
            min=2500;
        };
    };

    class water
    {
        name="Bouteille d'eau";
        weight=1;
        price_buy=4;
        image="Alysia_Client\Textures\Items_virtual\bouteille_eau.paa";
        class food
        {
            thirst=40;
            sound="drink_water";
        };
        class remove {};
    };
    class sparklingwater
    {
        name="Eau gazeuse";
        weight=1;
        price_buy=6;
        image="Alysia_Client\Textures\Items_virtual\bouteille_eau_gazeuse.paa";
        class food
        {
            thirst=40;
            sound="drink_water";
        };
        class remove {};
    };
    class soda
    {
        name="Soda";
        weight=1;
        price_buy=5;
        image="Alysia_Client\Textures\Items_virtual\soda.paa";
        class food
        {
            thirst=30;
            hunger=5;
            sound="drink_soda";
            unlimitedRun=3;
        };
        class remove {};
    };
    class cafe
    {
        name="Thermos de café";
        weight=1;
        price_buy=12;
        image="Alysia_Client\Textures\Items_virtual\cafe.paa";
        class food
        {
            thirst=10;
            hunger=-5;
            unlimitedRun=120;
            sound="drink_water";
        };
        class remove {};
    };

    class pizza
    {
        name="Pizza";
        weight=2;
        price_buy=45;
        image="Alysia_Client\Textures\Items_virtual\pizza.paa";
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class sandwich
    {
        name="Sandwich au jambon";
        weight=1;
        price_buy=35;
        image="Alysia_Client\Textures\Items_virtual\sandwich_jambon.paa";
        class food
        {
            hunger=35;
            thirst=-5;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class cleuniverselle
    {
        name="clé universelle serrure";
        weight=1;
        price_buy=3000;
        buy_license_CIV="company_garagist";
        image="";

        class remove {};
    };
    class petitbeurre
    {
        name="Boîte de petits beurres";
        weight=1;
        price_buy=30;
        image="Alysia_Client\Textures\Items_virtual\petitbeurre.paa";
        class food
        {
            hunger=18;
            thirst=-5;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class croissant
    {
        name="Croissant";
        weight=1;
        price_buy=3;
        image="Alysia_Client\Textures\Items_virtual\croissant.paa";
        class food
        {
            hunger=15;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class cerealbar
    {
        name="Barre de céréale";
        weight=1;
        price_buy=2;
        image="Alysia_Client\Textures\Items_virtual\barre_de_cereale.paa";
        class food
        {
            hunger=15;
            thirst=-3;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class donut
    {
        name="Beignet";
        weight=1;
        price_buy=1;
        image="Alysia_Client\Textures\Items_virtual\beignet.paa";
        class food
        {
            hunger=8;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class cookie
    {
        name="Cookie";
        weight=1;
        price_buy=2;
        image="Alysia_Client\Textures\Items_virtual\cookie.paa";
        class food
        {
            hunger=5;
            sound="eat_biscuit";
        };
        class remove {};
    };

    class oilu
    {
        name="Pétrole";
        weight=10;
        price_buy=200;
        image="Alysia_Client\Textures\Items_virtual\petrole.paa";
        buy_license_CIV="company_fuel";
        store[]=
        {
            "Skyline_Scania_Streamline_Citerne_01_F",
            "Skyline_Scania_Streamline_Citerne_02_F",
            "Skyline_Scania_Streamline_Citerne_03_F",
            "Skyline_Scania_Streamline_Citerne_04_F",
            "Skyline_Scania_Streamline_Citerne_05_F",
            "Skyline_Scania_Streamline_Citerne_06_F",
            "Skyline_Scania_Streamline_Citerne_07_F",
            "Skyline_Scania_Streamline_Citerne_08_F",
            "Skyline_Scania_Streamline_Citerne_09_F",
            "Skyline_Scania_Streamline_Citerne_10_F",
            "Skyline_Scania_Streamline_Citerne_11_F",
            "Skyline_Scania_Streamline_Citerne_12_F",
            "Skyline_Scania_Streamline_Citerne_13_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_01_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_02_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_03_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_04_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_05_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_06_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_07_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_08_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_09_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_10_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_11_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_12_F",
            "Skyline_Vehicule_Jonzie_Tanker_Truck_13_F",
            "Diablo_Coffre_Small",
            "Diablo_Coffre_Medium",
            "Diablo_Coffre_Large",
            "Diablo_Coffre_Extra",
            "Diablo_Coffre_Mega",
			"USAF_C17",
			"A320_ch_AZ",
			"A320_ch_LX",
			"A320_ch_LH",
			"A320_ch_SN",
			"Loann_B777_Alitalia",
			"B777_ch_SING",
			"B777_ch_emirates",
			"do228_ch_ac",
			"Loann_Do228_Lufthansa",
			"Cocazou_Do228_Swiss",
            "Skyline_Vehicule_APEX_RHIB_01_F",
            "Skyline_Vehicule_APEX_RHIB_02_F",
            "ANT_RHIB"
        };
        class remove {};
    };
    class sp98: oilu
    {
        name="SansPlomb 98";
        weight=1;
        price_buy=0;
        buy_license_CIV="";
        image="Alysia_Client\Textures\Items_virtual\sp98.paa";
        class remove {};
    };
    class sp95: sp98
    {
        name="SansPlomb 95";
        image="Alysia_Client\Textures\Items_virtual\sp95.paa";
        class remove {};
    };
    class gazole: sp98
    {
        name="Gazole";
        image="Alysia_Client\Textures\Items_virtual\gazole.paa";
        class remove {};
    };
    class gpl: sp98
    {
        name="GPL";
        image="Alysia_Client\Textures\Items_virtual\gpl.paa";
        class remove {};
    };
    class kerosene: sp98
    {
        name="Kérosène";
        image="Alysia_Client\Textures\Items_virtual\kerosene.paa";
        class remove {};
    };
    class bio: sp98
    {
        name="Biocarburant";
        image="Alysia_Client\Textures\Items_virtual\sp95.paa";
        class remove {};
    };

    class turtle
    {
        name="Viande de tortue";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\tortue.paa";
        class market
        {
            max=3650;
            min=420;
        };
        class remove {};
    };

    class destroy_archeo
    {
        name="Kit (Archélogie)";
        weight=6;
        image="Alysia_Client\Textures\Items_virtual\boite1.paa";
	buy_rank_EAST=12;
	price_buy=1000;
        class remove {};
    };
    class destroy_stand: destroy_archeo
    {
        name="Kit (Infrastructure)";
        image="Alysia_Client\Textures\Items_virtual\boite3.paa";
        class remove {};
    };
    class destroy_field: destroy_archeo
    {
        name="Kit (Champs)";
        image="Alysia_Client\Textures\Items_virtual\boite4.paa";
        class remove {};
    };
    class destroy_labo: destroy_archeo
    {
        name="Kit (Laboratoire)";
        image="Alysia_Client\Textures\Items_virtual\boite2.paa";
        class remove {};
    };

    class lab_marijuana
    {
        name="Laboratoire de marijuana";
        price_buy=400000;
        weight=40;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
        class use
        {
            action="['lab_marijuana'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_mushroom
    {
        name="Laboratoire de champignon";
        price_buy=200000;
        weight=40;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
        buy_license_CIV="rebelle_1";
        class use
        {
            action="['lab_mushroom'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_meth: lab_marijuana
    {
        name="Laboratoire de methamphetamine";
        price_buy=1000000;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
        class use
        {
            action="['lab_meth'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_cocaine: lab_marijuana
    {
        name="Laboratoire de cocaïne";
        price_buy=800000;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
        class use
        {
            action="['lab_cocaine'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_heroin: lab_marijuana
    {
        name="Laboratoire d'héroïne";
        price_buy=800000;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
        class use
        {
            action="['lab_heroin'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_cigare: lab_marijuana
    {
        name="Usine à cigares";
        price_buy=200000;
        image="Alysia_Client\Textures\Items_virtual\lab_cigare.paa";
        class use
        {
            action="['lab_cigare'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_heal: lab_marijuana
    {
        name="Table d'opération illégale";
        price_buy=300000;
        image="Alysia_Client\Textures\Items_virtual\lab_heal.paa";
        class use
        {
            action="['lab_heal'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_gun: lab_marijuana
    {
        name="Etabli illégale d'armement";
        price_buy=1000000;
        image="";
        class use
        {
            action="['lab_gun'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_construction: lab_marijuana
    {
        name="Etabli illégale de constructions";
        price_buy=150000;
        image="Alysia_Client\Textures\Items_virtual\construction.paa";
        class use
        {
            action="['lab_construction'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };

    class money_transfer
    {
        name="Valise de billets de banque";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\money_transfer.paa";
        store[]=
        {
            "Skyline_Brinks_01_F",
            "Diablo_Coffre_Small",
            "Diablo_Coffre_Medium",
            "Diablo_Coffre_Large",
            "Diablo_Coffre_Extra",
            "Diablo_Coffre_Mega"
        };
        class remove {};
    };

    class kit_chien
    {
        name="Niche de Chien";
        weight=1;
        price_buy=5000;
        buy_license_WEST="east_dog";
        buy_license_CIV="east_dog";
        class use
        {
            action="[] spawn AlysiaClient_fnc_dog_get;";
        };
    };

    class serrure
    {
        name="Serrure neuve";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\serrure.paa";
        class use
        {
            action="[] spawn AlysiaClient_fnc_item_serrure;";
        };
        class remove {};
    };

    class horn_east
    {
        name="Sirène 1 (ANT)";
        weight=5;
        price_buy=1000;
        image="Alysia_Client\Textures\Items_virtual\sirene.paa";
        class remove {};
    };
    class horn_guer: horn_east
    {
        name="Sirène (SAMU)";
        class remove {};
    };
    class horn_west: horn_east
    {
        name="Sirène (GDM)";
        class remove {};
    };

    class perqui
    {
        name="Mandat de perquisition";
        weight=1;
        price_buy=5000;
        buy_rank_EAST=15;
        image="Alysia_Client\Textures\Items_virtual\perqui_north.paa";
        class remove {};
    };

    class ginger
    {
        name="Gingembre";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\ginger.paa";
        class market
        {
            max=94;
            min=43;
        };
        class remove {};
    };

    class cacao
    {
        name="Cabosse";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\cacaop.paa";
        class remove {};
    };
    class cacaop
    {
        name="Fève de cacao";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cacao.paa";
        class market
        {
            max=635;
            min=305;
        };
        class remove {};
    };

    class tabchoco
    {
        name="Tablette de Chocolat";
        weight=1;
        image="Adenis_Textures\Chocolat.paa";
        entrepriseItem = 1;
        class market
        {
            max=2200;
            min=1200;
        };
        class food
        {
            hunger=40;
            sound="eat_biscuit";
        };
        class remove {};
    };

    class planchefruitdemer
    {
        name="Plan de Fruit de Mer";
        weight=1;
        image="";
        entrepriseItem = 1;
        class market
        {
            max=5200;
            min=2200;
        };
        class food
        {
            hunger=40;
            sound="eat_biscuit";
        };
        class remove {};
    };

    class tabchocoemba
    {
        name="Tablette de Chocolat Emballé";
        weight=15;
        image="Adenis_Textures\carton.paa";
        entrepriseItem = 1;
        class market
        {
            max=43000;
            min=35000;
        };
        class remove {};
    };
    class coffee_seed
    {
        name="Graine (Café)";
        weight=1;
        price_buy=15;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class coffee
    {
        name="Grain de café";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cafe_2.paa";
        class remove {};
    };
    class coffeem
    {
        name="Café moulu";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\cafemoulu.paa";
        class remove {};
    };
    class coffeec
    {
        name="Café en conserve";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\cafeconserve.paa";
        entrepriseItem = 1;
        class market
        {
            max=6925;
            min=4000;
        };
        class remove {};
    };

    class banana
    {
        name="Bananes";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\banana.paa";
        class market
        {
            max=42;
            min=24;
        };
        class remove {};
    };

    class barrecereales
    {
        name="Barre de céréales";
        weight=1;
        image="Adenis_Textures\barrecereales.paa";
        class food
        {
            hunger=2;
            thirst=0;
            sound="eat_biscuit";
        };
        class market
        {
            max=1850;
            min=800;
        };
        class remove {};
    };

    class bounty
    {
        name="Bounty";
        weight=1;
        image="Adenis_Textures\bounty.paa";
        class food
        {
            hunger=2;
            thirst=0;
            sound="eat_biscuit";
            unlimitedRun=20;
        };
        class market
        {
            max=1800;
            min=800;
        };
        class remove {};
    };

    class cartonp
    {
        name="Carton";
        weight=1;
        image="Adenis_Textures\carton.paa";
        class market
        {
            max=1800;
            min=800;
        };
        class remove {};
    };
    class sugar_cane
    {
        name="Canne à sucre";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\sugar_cane.paa";
        class market
        {
            max=68;
            min=59;
        };
        class remove {};
    };
    class sugar
    {
        name="Sucre de canne";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\sugar.paa";
        class food
        {
            hunger=10;
            thirst=-1;
            sound="eat_biscuit";
        };
        class market
        {
            max=287;
            min=158;
        };
        class remove {};
    };
    class rhum
    {
        name="Bouteille de Rhum";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\rhum.paa";
        entrepriseItem = 1;
        class food
        {
            hunger=-5;
            thirst=25;
            sound="drink_wine";
            alcool=0.6;
        };
        class market
        {
            max=3344;
            min=2290;
        };
        class remove {};
    };

    class smecta
    {
        name="Boite de Smecta";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\smecta.paa";
        entrepriseItem = 1;
        class market
        {
            max=2450;
            min=1000;
        };
        class remove {};
    };

    class doliprane
    {
        name="Boite de Doliprane";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\doliprane.paa";
        entrepriseItem = 1;
        class market
        {
            max=2450;
            min=1000;
        };
        class remove {};
    };

    class millettia
    {
        name="Fleur de Millettia";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\millettia.paa";
        class remove {};
    };

    class rare_earth
    {
        name="Terres rares";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\rare_earth.paa";
        class market
        {
            max=352;
            min=226;
        };
        class remove {};
    };

    class amethyste
    {
        name="Améthyste";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\amethyste.paa";
        class market
        {
            max=2500;
            min=2250;
        };
        class remove {};
    };
    class saphir
    {
        name="Saphir";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\saphir.paa";
        class market
        {
            max=33000;
            min=18000;
        };
        class remove {};
    };
    class topaze
    {
        name="Topaze";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\topaze.paa";
        class market
        {
            max=4250;
            min=2475;
        };
        class remove {};
    };
    class volcano
    {
        name="Roche volcanique";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\volcano.paa";
        price_sell=20;
        class remove
        {
            disableSuitcase=1;
            all=1;
        };
    };

    class corail
    {
        name="Corail";
        weight=2;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\corail.paa";
        class market
        {
            max=2800;
            min=540;
        };
        class remove {};
    };

    class coconut
    {
        name="Noix de coco";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\coconut.paa";
        class market
        {
            max=98;
            min=52;
        };
        class remove {};
    };
    class tissue
    {
        name="Tissue";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\tissue.paa";
        class remove {};
    };

    class raisin_black_seed
    {
        name="Graine (raisin noir)";
        weight=1;
        price_buy=90;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\Master_seed.paa";
        buy_license_CIV="company_farming";
        class remove {};
    };
    class raisin_red
    {
        name="Grappe de raisin noir";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\raisin_black.paa";
        class remove {};
        class food
        {
            hunger=5;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class wine_red
    {
        name="Bouteille de vin rouge";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\wine_red.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=30;
            sound="drink_wine";
            alcool=0.13;
        };
    };
    class red_grape_juice
    {
        name="Jus de raisin rouge";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\red_grape_juice.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=60;
            sound="drink_water";
        };
    };
    class assembling_wine_red
    {
        name="Assemblage du vin rouge";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\assembling.paa";
        class remove {};
    };
    class raisin_white_seed
    {
        name="Graine (raisin blanc)";
        weight=1;
        price_buy=90;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\Master_seed.paa";
        buy_license_CIV="company_farming";
        class remove {};
    };
    class raisin_white
    {
        name="Grappe de raisin blanc";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\raisin_white.paa";
        class remove {};
        class food
        {
            hunger=5;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class wine_white
    {
        name="Bouteille de vin blanc";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\wine_white.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=30;
            sound="drink_wine";
            alcool=0.12;
        };
    };
    class white_grape_juice
    {
        name="Jus de raisin blanc";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\white_grape_juice.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=60;
            sound="drink_water";
        };
    };
    class assembling_wine_white
    {
        name="Assemblage du vin blanc";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\assembling.paa";
        class remove {};
    };
    class champagne
    {
        name="Bouteille de champagne";
        weight=1;
        image="Adenis_Textures\champagne.paa";
        entrepriseItem = 1;
        class remove {};
        class food
        {
            hunger=0;
            thirst=35;
            sound="drink_wine";
            alcool=0.1;
        };
        class market
        {
            max=6000;
            min=3443;
        };
    };
    class assembling_champagne
    {
        name="Assemblage du Champagne";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\assembling.paa";
        class remove {};
    };
    class wine_pinked
    {
        name="Bouteille de vin rosé";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\wine_pinked.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=30;
            sound="drink_wine";
            alcool=0.12;
        };
    };
    class pinked_grape_juice
    {
        name="Jus de raisin rosé";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\red_grape_juice.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=60;
            sound="drink_water";
        };
    };
    class assembling_wine_pinked
    {
        name="Assemblage du vin rosé";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\assembling.paa";
        class remove {};
    };
    class cd_lafouine
    {
        name="Album de José Lafouine";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cd_lafouine.paa";
        class remove {};
    };

    class sea_food
    {
        name="Plateau de fruit de mer";
        weight=4;
        image="";
        class food
        {
            hunger=60;
            thirst=30;
            sound="eat_biscuit";
        };
        class remove {};
    };

    class orge_seed
    {
        name="Graine (orge)";
        weight=1;
        price_buy=90;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\Master_seed.paa";
        buy_license_CIV="company_farming";
        class remove {};
    };
    class orge
    {
        name="Orge";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\orge.paa";
        class remove {};
    };
    class yeast
    {
        name="Levure";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\levure.paa";
        price_buy=10;      
        class remove {};
    };
    class Malte
    {
        name="Malte";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\malte.paa";
        class remove {};
    };
    class Brassage
    {
        name="moût";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\brassage.paa";
        class remove {};
    };
    class ferment_whisky
    {
        name="Whisky fermenté";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\ferment.paa";
        class remove {};
    };
    class Whisky
    {
        name="Bouteille de Whisky";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\whisky.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=30;
            sound="drink_wine";
            alcool=0.40;
        };
    };

    class houblon_seed
    {
        name="Graine (houblon)";
        weight=1;
        price_buy=90;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\Master_seed.paa";
        buy_license_CIV="company_farming";
        class remove {};
    };
    class houblon
    {
        name="houblon";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\houblon.paa";
        class remove {};
    };
    class brewing
    {
        name="Houblonnage";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\brewing.paa";
        class remove {};
    };
    class ferment_beer
    {
        name="Bierre fermenté";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\fermenter.paa";
        class remove {};
    };
    class beer
    {
        name="Bierre";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\beer.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=30;
            sound="drink_wine";
            alcool=0.09;
        };
        class market
        {
            max=4944;
            min=2790;
        };
    };
    //////////////// OLIVE ////////////////
    class olive_seed
    {
        name="Graine (olivier)";
        weight=1;
        price_buy=90;
        canUseByTractor = 1;
        image="Alysia_Client\Textures\Items_virtual\Master_seed.paa";
        buy_license_CIV="company_farming";
        class remove {};
    };
    class olive
    {
        name="olive";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\olive.paa";
        class remove {};
        class food
        {
            hunger=5;
            thirst=5;
            sound="eat_biscuit";
        };
    };
    class olive_oil
    {
        name="Huile d'olive";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\olive.paa";
        class remove {};
    };
    class olive_oil_bottle
    {
        name="Bouteille d'huile d'olive";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\olive_oil_bottle.paa";
        class remove {};
    };
    class olive_paste
    {
        name="Pâte d'olive";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\olive_paste.paa";
        class remove {};
    };
    class tapenade
    {
        name="Tapenade";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\tapenade.paa";
        class remove {};
        class food
        {
            hunger=30;
            thirst=15;
            sound="eat_biscuit";
        };
    };
    class olive_cocktail
    {
        name="Cocktail";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\olive_cocktail.paa";
        class remove {};
        class food
        {
            hunger=10;
            thirst=20;
            sound="eat_biscuit";
        };
    };
    class flour
    {
        name="Farine";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\flour.paa";
        class remove {};
    };
    class Dough
    {
        name="Pâte a pain";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\Dough.paa";
        class remove {};
    };
    class baguette
    {
        name="Baguette";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\baguette.paa";
        class remove {};
        class food
        {
            hunger=12;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class salt
    {
        name="Sel";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\flour.paa";
        buy_license_CIV="company_cook";
        price_buy=20;
        class remove {};
    };
    class egg
    {
        name="Oeuf";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\egg.paa";
        buy_license_CIV[]={"company_cook","company_farming"};
        price_buy=7;
        class remove {};
    };
    class butter
    {
        name="Beurre";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\butter.paa";
        buy_license_CIV="company_cook";
        price_buy=17;
        class remove {};
    };
    class puff_pastry
    {
        name="Pâte Feuilleté";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\puff_pastry.paa";
        class remove {};
    };
    class uncooked_croissant
    {
        name="Croissant cru";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\uncooked_croissant.paa";
        class remove {};
    };
    class uncooked_chocolate_croissant
    {
        name="Pain au chocolat cru";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\uncooked_chocolate_croissant.paa";
        class remove {};
    };
    class cooked_croissant
    {
        name="Croissant nature";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cooked_croissant.paa";
        class remove {};
        class food
        {
            hunger=40;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class cooked_chocolate_croissant
    {
        name="Pain au chocolat";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cooked_chocolate_croissant.paa";
        class remove {};
        class food
        {
            hunger=24;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class cake_batter
    {
        name="Pâte à gâteau";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cake_batter.paa";
        class remove {};
    };
    class cake_chocolate_batter
    {
        name="Pâte à gâteau au chocolat";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cake_chocolate_batter.paa";
        class remove {};
    };
    class cake
    {
        name="Gâteau nature";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cake.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=-5;
            sound="eat_biscuit";
        };
    };
    class cake_chocolate: cake
    {
        name="Gâteau au chocolat";
        image="Alysia_Client\Textures\Items_virtual\cake_chocolate.paa";
        class food
        {
            hunger=60;
            thirst=-5;
            sound="eat_biscuit";
        };
    };

    class milk
    {
        name="Bouteille de lait";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\milk.paa";
        price_buy=22;
        buy_license_CIV[]={"company_cook","company_farming"};
        class remove {};
        class food
        {
            hunger=0;
            thirst=20;
            sound="drink_water";
        };
    };

    class nukaorange
    {
        name="Nuka Orange";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\nukaorange.paa";
        price_buy=22;
        buy_license_CIV[]={"company_cook"};
        class remove {};
        class food
        {
            hunger=0;
            thirst=20;
            sound="drink_water";
        };
    };

    class nukavictory
    {
        name="Nuka Victory";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\nujavictory.paa";
        price_buy=22;
        buy_license_CIV[]={"company_cook"};
        class remove {};
        class food
        {
            hunger=0;
            thirst=-30;
            sound="drink_water";
            unlimitedRun=300;
        };
    };

    class nukaquartz
    {
        name="Nuka Quartz";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\nukaquartz.paa";
        price_buy=22;
        buy_license_CIV[]={"company_cook"};
        class remove {};
        class food
        {
            hunger=0;
            thirst=-10;
            sound="drink_water";
            unlimitedRun=60;
        };
        class market
        {
            max=4000;
            min=2500;
        };
    };

    class nukadark
    {
        name="Nuka Dark";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\nukadark.paa";
        price_buy=22;
        buy_license_CIV[]={"company_cook"};
        class remove {};
        class food
        {
            hunger=0;
            thirst=-15;
            sound="drink_water";
            alcool=0.8;
        };
    };

    class nukaquantum
    {
        name="Nuka Quantum";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\nukaquantum.paa";
        price_buy=22;
        buy_license_CIV[]={"company_cook"};
        class remove {};
        class food
        {
            hunger=40;
            thirst=10;
            sound="drink_water";
        };
    };

    class nukagrappe
    {
        name="Nuka Grappe";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\nukagrappe.paa";
        price_buy=22;
        buy_license_CIV[]={"company_cook"};
        class remove {};
        class food
        {
            hunger=0;
            thirst=80;
            sound="drink_water";
        };
    };

    class pork
    {
        name="Porc";
        weight=2;
        price_buy=200;
        image="Alysia_Client\Textures\Items_virtual\pork.paa";
        buy_license_CIV="company_cook";
        class remove {};
    };

    class pouletcook
    {
        name="Poulet complet";
        weight=2;
        price_buy=150;
        image="";
        buy_license_CIV="company_cook";
        class remove {};
    };

    class cuissedepouletcook
    {
        name="Cuisse de poulet";
        weight=2;
        price_buy=200;
        image="";
        buy_license_CIV="company_cook";
        class remove {};
        class food
        {
            hunger=50;
            thirst=-15;
            sound="eat_biscuit";
        };
    };

    class nuggetscook
    {
        name="Nuggets";
        weight=1;
        price_buy=200;
        image="";
        buy_license_CIV="company_cook";
        class remove {};
        class food
        {
            hunger=30;
            thirst=-30;
            sound="eat_biscuit";
        };
    };

    class escalopepouletcook
    {
        name="Escalope de poulet";
        weight=2;
        price_buy=200;
        image="";
        buy_license_CIV="company_cook";
        class remove {};
        class food
        {
            hunger=40;
            thirst=-10;
            sound="eat_biscuit";
        };
    };

    class pouletroticook
    {
        name="Poulet rôti";
        weight=2;
        price_buy=200;
        image="";
        buy_license_CIV="company_cook";
        class remove {};
        class food
        {
            hunger=85;
            thirst=-50;
            sound="eat_biscuit";
        };
    };

    class rationmilporc
    {
        name="Ration militaire au porc";
        weight=2;
        price_buy=200;
        image="Alysia_Client\Textures\Items_virtual\conserve.paa";
        buy_license_CIV="company_cook";
        class remove {};
        class food
        {
            hunger=60;
            thirst=60;
            sound="eat_biscuit";
        };
    };

    class rationmilboeuf
    {
        name="Ration militaire au boeuf";
        weight=2;
        price_buy=200;
        image="Alysia_Client\Textures\Items_virtual\conserve.paa";
        buy_license_CIV="company_cook";
        class remove {};
        class food
        {
            hunger=70;
            thirst=70;
            sound="eat_biscuit";
        };
    };

    class rationmilpoulet
    {
        name="Ration militaire au poulet";
        weight=2;
        price_buy=200;
        image="Alysia_Client\Textures\Items_virtual\conserve.paa";
        buy_license_CIV="company_cook";
        class remove {};
        class food
        {
            hunger=55;
            thirst=55;
            sound="eat_biscuit";
        };
    };
    class peinture
    {
        name="Pot de peinture blanche";
        weight=10;
        price_buy=20000;
        buy_license_CIV="company_garagist";
        image="Adenis_Textures\bombe_peinture.paa";
        class remove {};
    };

    class bombe_vide
    {
        name="Aérosol vide";
        weight=2;
        image="Adenis_Textures\bombe_peinture.paa";
        class remove {};
    };

    class bombe_peinture
    {
        name="Bombe de peinture blanche";
        weight=3;
        image="Adenis_Textures\bombe_peinture.paa";
        class remove {};
    };

    class chop_pork
    {
        name="Côte de porc";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\chop_pork.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class roast_pork
    {
        name="Roti de porc";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\roast_pork.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class filet_mignon
    {
        name="Filet mignon de porc";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\filet_mignon.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=0;
            sound="eat_biscuit";
        };
    };

    class Beef
    {
        name="Boeuf";
        weight=2;
        price_buy=400;
        image="Alysia_Client\Textures\Items_virtual\beef.paa";
        buy_license_CIV="company_cook";
        class remove {};
    };
    class rumsteak_beef
    {
        name="Roti de boeuf";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\rumsteak_beef.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class beefsteak_beef
    {
        name="Beefsteak";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\beefsteak_beef.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class ground_beef
    {
        name="Steak Haché";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\ground_beef.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class rib_coast_beef
    {
        name="Côte de boeuf";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\rib_coast_beef.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class beef_tenderloin_beef
    {
        name="Filet de boeuf";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\beef_tenderloin_beef.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class rib_beef_steak
    {
        name="Entrecôte";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\rib_steak_beef.paa";
        class remove {};
        class food
        {
            hunger=60;
            thirst=0;
            sound="eat_biscuit";
        };
    };

    class bourbon
    {
        name="Bouteille de bourbon";
        weight=2;
        price_buy=80;
        price_sell=1097;
        image="Adenis_Textures\Bourbon.paa";
        class food
        {
            hunger=-5;
            thirst=25;
            sound="drink_wine";
            alcool=0.6;
        };
        class remove {};
    };
    class vodka
    {
        name="Bouteille de vodka";
        weight=2;
        price_buy=80;
        price_sell=1097;
        image="Adenis_Textures\Vodka.paa";
        class food
        {
            hunger=-5;
            thirst=25;
            sound="drink_wine";
            alcool=0.6;
        };
        class remove {};
    };
    class banana_liqueur
    {
        name="Liqueur de banane";
        weight=2;
        price_buy=80;
        price_sell=1097;
        image="Adenis_Textures\LiqueurDeBanane.paa";
        class food
        {
            hunger=-5;
            thirst=25;
            sound="drink_wine";
            alcool=0.6;
        };
        class remove {};
    };
    class malibu
    {
        name="Alcool de coco";
        weight=2;
        price_buy=80;
        price_sell=1097;
        image="Adenis_Textures\AlcoolDeCoco.paa";
        class food
        {
            hunger=-5;
            thirst=25;
            sound="drink_wine";
            alcool=0.6;
        };
        class remove {};
    };
	class frite
    {
        name="Paquet de frite";
        weight=1;
        image="Adenis_Textures\paquet_frites.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=20;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class caviar
    {
        name="Caviar";
        weight=1;
        image="Adenis_Textures\Caviar.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=20;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class fraise
    {
        name="Ravier de fraises";
        weight=1;
        image="Adenis_Textures\Fraise.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=5;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class shotalcool
    {
        name="Shot d'alcool";
        weight=1;
        image="Adenis_Textures\shot_alcool.paa";
        price_buy=100;
        buy_license_CIV="company_cook";
        class food
        {
            hunger=5;
            thirst=5;
            sound="drink_wine";
            alcool=0.13;
        };
        class remove {};
    };
    class burger
    {
        name="Hamburger";
        weight=1;
        image="Adenis_Textures\Hamburger.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=30;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class homar
    {
        name="Homar";
        weight=1;
        image="Adenis_Textures\Homard.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=15;
            thirst=5;
            sound="eat_biscuit";
        };
    };
    class kebab
    {
        name="Kebab";
        weight=1;
        image="Adenis_Textures\kebab.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=30;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class langouste
    {
        name="Langouste";
        weight=1;
        image="Adenis_Textures\Langouste.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=15;
            thirst=5;
            sound="eat_biscuit";
        };
    };
    class lasagne
    {
        name="Lasagne";
        weight=1;
        image="Adenis_Textures\Lasagne.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=25;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class macaron
    {
        name="Macaron";
        weight=1;
        image="Adenis_Textures\Macaron.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=5;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class carbo
    {
        name="Pâte Carbonara";
        weight=1;
        image="Adenis_Textures\Pate_Carbonara.paa";
        price_buy=100;
        buy_license_CIV="company_cook";
        class remove {};
        class food
        {
            hunger=30;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class purer
    {
        name="Purée";
        weight=1;
        image="Adenis_Textures\puree.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=5;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class chantilly
    {
        name="Ravier de chantilly";
        weight=1;
        image="Adenis_Textures\ravier_chantilly.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=2;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class saucisson
    {
        name="Saucisson";
        weight=1;
        image="Adenis_Textures\Saucisson.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=10;
            thirst=-5;
            sound="eat_biscuit";
        };
    };
    class bolo
    {
        name="Spaghetti Bolognaise";
        weight=1;
        image="Adenis_Textures\Spaghetti_Bolognaise.paa";
        buy_license_CIV="company_cook";
        price_buy=100;
        class remove {};
        class food
        {
            hunger=30;
            thirst=0;
            sound="eat_biscuit";
        };
    };

    class firework
    {
        name="Fusée d'artifice";
        weight=2;
        image="";
        price_buy=8000;
        buy_license_CIV="company_night_club";
        class remove {};
        class use
        {
            action="[] call AlysiaClient_fnc_item_firework;";
        };
    };

    class riz_seed
    {
        name="Graine (riz)";
        weight=1;
        price_buy=90;
        canUseByTractor = 1;
        image="Adenis_Textures\riz_seed.paa";
        buy_license_CIV="company_farming";
        class remove {};
    };

    class riz
    {
        name="riz";
        weight=1;
        image="Adenis_Textures\riz.paa";
        class remove {};
    };

    class patate_seed : riz_seed
    {
        name="Graine (patate)";
        image="Adenis_Textures\patate_seed.paa";
    };

    class tomato_seed : riz_seed
    {
        name="Graine (tomate)";
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
    };

    class tomato : riz
    {
        name="tomate";
        image="Alysia_Client\Textures\Items_virtual\tomate.paa";
    };

    class pumpkin_seed : riz_seed
    {
        name="Graine (citrouille)";
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
    };

    class pumpkin : riz
    {
        name="citrouille";
        image="Alysia_Client\Textures\Items_virtual\citrouille.paa";
    };

    class zucchini_seed : riz_seed
    {
        name="Graine (courgette)";
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
    };

    class sunflower_seed : riz_seed
    {
        name="Graine (tournesol)";
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
    };

    class sunflower : riz
    {
        name="tournesol";
        image="Alysia_Client\Textures\Items_virtual\tournesol.paa";
    };

    class patate : riz
    {
        name="patate";
        image="Adenis_Textures\patate.paa";
    };

    class gentiane_seed : riz_seed
    {
        name="Graine (gentiane)";
        image="Adenis_Textures\gentiane_seed.paa";
    };

    class gentiane : riz
    {
        name="gentiane";
        image="Adenis_Textures\gentiane.paa";
    };

    class anis_seed : riz_seed
    {
        name="Graine (anis)";
        image="Adenis_Textures\anis_seed.paa";
    };

    class anis : riz
    {
        name="anis";
        image="Adenis_Textures\anis.paa";
    };



    ///// Distillerie //////
    class Tonneau_gin
    {
        name="Tonneau de gin";
        weight=1;
        image="Adenis_Textures\tonneau.paa";
        class remove {};
    };

    class gin
    {
        name="Bouteille de gin";
        weight=1;
        image="Adenis_Textures\gin.paa";
        entrepriseItem = 1;
        class remove {};
        class food
        {
            hunger=0;
            thirst=35;
            sound="drink_wine";
            alcool=0.6;
        };
    };

    class Tonneau_sake : Tonneau_gin
    {
        name="Tonneau de sake";
    };

    class sake : gin
    {
        name="Bouteille de saké";
        image="Adenis_Textures\sake.paa";
    };

    class Tonneau_ricard : Tonneau_gin
    {
        name="Tonneau de ricard";
    };

    class ricard : gin
    {
        name="Bouteille de ricard";
        image="Adenis_Textures\ricard.paa";
    };

    class Tonneau_vodka : Tonneau_gin
    {
        name="Tonneau de vodka";
    };

    class Tonneau_suze : Tonneau_gin
    {
        name="Tonneau de suze";
    };

    class suze : gin
    {
        name="Bouteille de suze";
        image="Adenis_Textures\suze.paa";
    };

    ///// weapons //////
    class shoulderp
    {
        name="Crosse";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\crosse.paa";
        class remove {};
    };
    class intermediary_shoulderp
    {
        name="Crosse intermediaire";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\crosse.paa";
        class remove {};
    };
    class military_shoulderp
    {
        name="Crosse Millitaire";
        weight=5;
        image="Alysia_Client\Textures\Items_virtual\crosse.paa";
        class remove {};
    };
    class barrelp
    {
        name="Canon";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\canon.paa";
        class remove {};
    };
    class intermediary_barrelp
    {
        name="Canon Intermediaire";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\canon.paa";
        class remove {};
    };
    class military_barrelp
    {
        name="Canon Millitaire";
        weight=5;
        image="Alysia_Client\Textures\Items_virtual\canon.paa";
        class remove {};
    };
    class receiverp
    {
        name="Culasse";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\culasse.paa";
        class remove {};
    };
    class intermediary_receiverp
    {
        name="Culasse Intermediaire";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\culasse.paa";
        class remove {};
    };
    class military_receiverp
    {
        name="Culasse Millitaire";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\culasse.paa";
        class remove {};
    };
    class gripp
    {
        name="Poignée";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\poignee.paa";
        class remove {};
    };
    class intermediary_gripp
    {
        name="Poignée Intermediaire";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\poignee.paa";
        class remove {};
    };
    class military_gripp
    {
        name="Poignée Millitaire";
        weight=5;
        image="Alysia_Client\Textures\Items_virtual\poignee.paa";
        class remove {};
    };
    class slapperp
    {
        name="Percuteur";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\percuteur.paa";
        class remove {};
    };
    class intermediary_slapperp
    {
        name="Percuteur Intermediaire";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\percuteur.paa";
        class remove {};
    };
    class military_slapperp
    {
        name="Percuteur Millitaire";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\percuteur.paa";
        class remove {};
    };
    class framep
    {
        name="Armature";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\armature.paa";
        class remove {};
    };
    class intermediary_framep
    {
        name="Armature Intermediaire";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\armature.paa";
        class remove {};
    };
    class military_framep
    {
        name="Armature Millitaire";
        weight=5;
        image="Alysia_Client\Textures\Items_virtual\armature.paa";
        class remove {};
    };
    class cylinderp
    {
        name="Barillet";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\barillet.paa";
        class remove {};
    };
    class triggerp
    {
        name="Détente";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\detente.paa";
        class remove {};
    };
    class magazinep
    {
        name="Chargeur vide";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\chargeur.paa";
        class remove {};
    };
    class military_magazinep
    {
        name="Chargeur militaire vide";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\chargeur.paa";
        class remove {};
    };
    class bulletp
    {
        name="Balle";
        weight=0;
        image="Alysia_Client\Textures\Items_virtual\balle.paa";
        class remove {};
    };
    class military_bulletp
    {
        name="Balle Millitaire";
        weight=0;
        image="Alysia_Client\Textures\Items_virtual\balle.paa";
        class remove {};
    };
    class chevrotinep
    {
        name="Chevrotine";
        weight=0;
        image="Alysia_Client\Textures\Items_virtual\chevrotine.paa";
        class remove {};
    };

    //////////////////////// BLUEPRINTS ////////////////////////
    class blueprint_gsh18
    {
        name="Blueprint de GSH18";
        weight=0;
        price_buy=10000;
        buy_rank_EAST=10;
        buy_rank_WEST=6;
        image="Adenis_Textures\patron.paa";
        class remove {};
    };
    class blueprint_CONEXUS
    {
        name="Blueprint de la Conexus";
        weight=0;
        price_buy=10000;
        image="Adenis_Textures\patron.paa";
        class remove {};
    };
    class blueprint_sig: blueprint_gsh18
    {
        name="Blueprint de SIG P226";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_guardia: blueprint_gsh18
    {
        name="Blueprint Guardia";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_m9: blueprint_gsh18
    {
        name="Blueprint de M9";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_micro_uzi: blueprint_gsh18
    {
        name="Blueprint de Micro Uzi";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_vp70: blueprint_gsh18
    {
        name="Blueprint de VP70";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_m1911: blueprint_gsh18
    {
         name="Blueprint de M1911";
         image="Adenis_Textures\patron.paa";
    };
    class blueprint_cz75: blueprint_gsh18
    {
        name="Blueprint de CZ75";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_protector: blueprint_gsh18
    {
        name="Blueprint de Protector";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_ump_45: blueprint_gsh18
    {
        name="Blueprint de UMP45";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_fnp_45: blueprint_gsh18
    {
        name="Blueprint de FNP45";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_rook_40: blueprint_gsh18
    {
        name="Blueprint de ROOK 40";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_sw_659: blueprint_gsh18
    {
        name="Blueprint de SW659";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_tt_33: blueprint_gsh18
    {
        name="Blueprint de TT33";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_sdar: blueprint_gsh18
    {
        name="Blueprint de SDAR";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_blaser_b95: blueprint_gsh18
    {
        name="Blueprint de Blaser 95";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_pm73_rak: blueprint_gsh18
    {
        name="Blueprint de PM73 RAK";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_glock: blueprint_gsh18
    {
        name="Blueprint de Glock";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_usp_40_match: blueprint_gsh18
    {
        name="Blueprint de USP 40";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_pm_9mm: blueprint_gsh18
    {
        name="Blueprint de PM 9MM";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_kimber_night_warrior: blueprint_gsh18
    {
        name="Blueprint de Kimber Night Warrior";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_umateba_model_6_unica: blueprint_gsh18
    {
        name="Blueprint de Umateba Unica";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_taurus_raging_bull: blueprint_gsh18
    {
        name="Blueprint de Taurus Raging Bull";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_taurus_tracker_455: blueprint_gsh18
    {
        name="Blueprint de Taurus Tracker 455";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_desert_eagle: blueprint_gsh18
    {
        name="Blueprint de Desert Eagle";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_vermin_smg: blueprint_gsh18
    {
        name="Blueprint de Vermin SMG";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_car_95: blueprint_gsh18
    {
        name="Blueprint de CAR 95";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_spar_16: blueprint_gsh18
    {
        name="Blueprint de SPAR 16";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_hk416: blueprint_gsh18
    {
        name="Blueprint de HK416";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_hk417: blueprint_gsh18
    {
       name="Blueprint de HK417";
       image="Adenis_Textures\patron.paa";
    };
    class blueprint_akm: blueprint_gsh18
    {
        name="Blueprint de AKM";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_M4A1: blueprint_gsh18
    {
        name="Blueprint de M4A1";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_DP_28: blueprint_gsh18
    {
        name="Blueprint de DP28";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_AKS: blueprint_gsh18
    {
        name="Blueprint de AKS";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_AK12: blueprint_gsh18
    {
        name="Blueprint de AK12";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_SVD: blueprint_gsh18
    {
        name="Blueprint de SVD";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_mp44: blueprint_gsh18
    {
        name="Blueprint de MP 44";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_g17: blueprint_gsh18
    {
        name="Blueprint de G17";
        image="Adenis_Textures\patron.paa";
    };
    class blueprint_tec9: blueprint_gsh18
    {
        name="Blueprint de Tec9";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_mp5: blueprint_gsh18
    {
        name="Blueprint de MP5";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_mp7: blueprint_gsh18
    {
        name="Blueprint de MP7";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_vz61: blueprint_gsh18
    {
        name="Blueprint de VZ61 Skorpion";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_ruger_mk2: blueprint_gsh18
    {
        name="Blueprint de Ruger MK2";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_hedgehog: blueprint_gsh18
    {
        name="Blueprint de Hérisson Tchèque";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_watchpost_tall: blueprint_gsh18
    {
        name="Blueprint de Poste de garde (grand)";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_watchpost_small: blueprint_gsh18
    {
        name="Blueprint de Poste de garde (petit)";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
    class blueprint_watchtower_wood: blueprint_gsh18
    {
        name="Blueprint de Tour de guet en bois";
        image="Adenis_Textures\patron.paa";
        illegal=1;
    };
};
