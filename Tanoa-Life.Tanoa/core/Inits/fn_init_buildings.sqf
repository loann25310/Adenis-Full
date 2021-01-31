/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_CreateLocalVehicle";

_CreateLocalVehicle =
{
	_obj = (_this select 0) createVehicleLocal [0, 0, 0];
	_obj allowDamage false;

	if ((_this select 4) isEqualTo 0) then {_obj enableSimulation false};
	_obj setdir (_this select 2);
	if ((_this select 3) isEqualTo -100) then {
		_obj setposATL (call compile (_this select 1));
	} else {
		_obj setposASL [((call compile (_this select 1)) select 0), ((call compile (_this select 1)) select 1), (_this select 3)];
	};

	if ((_this select 5) isEqualTo 0) then {
		_obj setVectorUp [0,0,1];
	} else {
		_obj setVectorUp (surfacenormal (getPosATL _obj));
	};

	if (!((_this select 6) isEqualTo [])) then
	{
		{
			call _x;
		} foreach (_this select 6);
	};

	_obj;
};

// Papi léon | Chat de nikita
["Maels_fiche_interieur_restaurant1x1_4","[5819.0288086,10533.0917969,2.2]",105,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_interieur_restaurant1x1_5","[5818.586426,10531.423828,2.2]",105,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_restaurant1x2","[5812.649902,10528.386719,1.98485]",58.5151,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_restaurant1x2","[5812.685547,10528.431641,1.95875]",238.515,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_restaurant1x2_2","[5811.751465,10529.730469,1.98485]",58.5151,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_restaurant1x2_2","[5811.839844,10529.710938,1.96886]",238.515,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5815.611816,10536.998047,0.203328]",58.9268,-100,1,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[5815.00439453,10535.90625,0.259377]",148.927,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5816.293457,10535.865234,0.203328]",58.9268,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5814.390625,10534.708008,0.203328]",237.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5813.700195,10535.920898,0.203328]",237.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_small_F","[5814.444824,10530.875977,0.266835]",237.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5813.86084,10531.8125,0.203328]",327.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5815.201172,10530.104492,0.203328]",147.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_small_F","[5818.18457,10532.185547,0.170275]",196.23,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5817.539551,10532.364258,0.203328]",288.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_small_F","[5813.17627,10530.103516,0.270443]",238.23,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5813.850586,10529.0117188,0.203328]",147.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5812.580078,10531.143555,0.203328]",327.758,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_restaurant1x1","[5807.784668,10534.758789,3.71161]",105.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Sunshade_03_F","[5806.535156,10539.979492,0]",256.578,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Sunshade_03_F","[5803.696289,10543.380859,0.617938]",253.578,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Sunshade_03_F","[5803.812012,10533.493164,0.617938]",249.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5805.424805,10531.912109,0.524988]",159.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5804.137695,10531.408203,0.655752]",249.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5806.823242,10532.418945,0.306125]",69.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5804.95166,10533.160156,0.571713]",336.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5806.0913086,10527.771484,0.49783]",162.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5802.808594,10541.311523,0.821728]",168.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5805.890625,10528.799805,0.553901]",342.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5806.464844,10526.666016,0.435485]",162.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5801.755371,10541.105469,1.15856]",258.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5803.97998,10541.540039,0.427909]",78.442,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5814.194336,10507.293945,-0.0648148]",246.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5829.576172,10569.786133,3.5565]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5829.199707,10547.0966797,0]",249.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[5804.622559,10537.931641,0.0864587]",166.927,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5805.512695,10538.791016,1.49012e-007]",75.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5805.00390625,10536.467773,0.185275]",165.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5803.564941,10538.288086,0.523283]",257.678,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5803.852051,10537.171875,0.455477]",257.678,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5805.935547,10537.598633,0.0412459]",77.678,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5804.255859,10539.422852,0.287503]",347.678,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Sunshade_03_F","[5807.146484,10525.220703,0.324962]",253.578,-100,1,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5815.783203,10534.606445,0.203328]",147.758,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5815.0322266,10507.657227,-0.0648148]",246.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5816.428711,10508.262695,-0.0648148]",246.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5817.825195,10508.868164,-0.0648148]",246.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5819.22168,10509.473633,-0.0648148]",246.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5820.618164,10510.0791016,-0.0648148]",246.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5822.0146484,10510.68457,-0.0648148]",246.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5823.271484,10511.229492,-0.0648148]",246.568,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5829.773926,10568.371094,3.5565]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5829.949707,10567.113281,3.14624]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5830.147461,10565.698242,1.91543]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5830.345215,10564.283203,0.547867]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5830.542969,10562.868164,0.0904601]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5830.740723,10561.453125,0.0795174]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5830.938477,10560.0380859,0.0508979]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5831.13623,10558.623047,0.0508979]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5831.333984,10557.208008,0.0508979]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5831.531738,10555.792969,0.0508979]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5832.37207,10555.379883,0.0273289]",262.043,-100,1,0,[]] call _CreateLocalVehicle;
["Land_Sunshade_03_F","[5804.88916,10529.955078,0.617938]",250.578,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_interieur_restaurant1x1","[5817.991699,10535.44043,2.3]",57,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_interieur_restaurant1x1_2","[5815.358398,10528.814453,2]",150,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_interieur_restaurant1x1_4","[5819.0288086,10533.0917969,2.2]",105,-100,1,0,[]] call _CreateLocalVehicle;
["Maels_fiche_interieur_restaurant1x1_5","[5818.586426,10531.423828,2.2]",105,-100,1,0,[]] call _CreateLocalVehicle;

// Lumiere
["Lemon_tube_neon","[5764.0654297,10228.208008,3.59023]",332.389,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5992.332031,10111.94043,-0.487657]",57.5851,-100,1,0,[]] call _CreateLocalVehicle;
["Land_PowerLine_01_pole_lamp_F","[5725.405273,10282.355469,0]",18,-100,1,0,[]] call _CreateLocalVehicle;
["Land_PowerLine_01_pole_lamp_F","[5733.444336,10304.545898,0]",21,-100,1,0,[]] call _CreateLocalVehicle;
["Land_PowerLine_01_pole_lamp_F","[5740.418457,10324.829102,0]",21,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5751.280762,10363.99707,0]",21,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5707.982422,10235.896484,0]",21,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5729.433594,10453.576172,-0.487657]",21,-100,1,0,[]] call _CreateLocalVehicle;
["Lemon_tube_neon","[5710.866699,10541.977539,2.73044]",45,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5631.246094,10401.875,4.6431]",24.505,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5606.679688,10413.526367,6.13384]",24.505,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5570.169434,10441.62207,9.59682]",327.119,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5478.991211,10036.688477,-0.047138]",21.3484,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5457.262207,10037.628906,-0.047138]",21.3484,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5810.0722656,10259.163086,-0.047138]",21.3484,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5870.428711,10219.826172,-0.030303]",30.3484,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5913.249512,10187.436523,-0.0563973]",30.3484,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5655.749512,10428.464844,2.31426]",26.3889,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5665.865234,10451.194336,2.7848]",26.3889,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5626.403809,10359.410156,2.54603]",26.3889,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5616.671387,10337.830078,3.52134]",26.3889,-100,1,0,[]] call _CreateLocalVehicle;
["Lemon_tube_neon","[5792.368652,10109.451172,3.21349]",21,-100,1,0,[]] call _CreateLocalVehicle;
["Lemon_eclairage_int","[5841.554688,10067.46875,3.64274]",21,-100,1,0,[]] call _CreateLocalVehicle;
["Lemon_tube_neon","[5722.251465,9970.669922,3.01187]",29.6843,-100,1,0,[]] call _CreateLocalVehicle;
//Port Malieuville
["Land_Canal_Wall_Stairs_F","[5630.152832,10399.541016,4.19595]",24.2424,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Canal_Wall_Stairs_F","[5634.935547,10403.364258,4.00337]",203.914,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Canal_Wall_10m_F","[5637.468262,10405.319336,0.473904]",24.0908,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Canal_Wall_10m_F","[5629.0888672,10398.15918,0.606902]",201.869,-100,0,0,[]] call _CreateLocalVehicle;

//Farming : Fer
["Land_SharpStone_02","[13479.558594,9592.50293,0]",-204.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13489.886719,9597.762695,-0.228114]",-164.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13479.650391,9568.974609,-0.228114]",-139.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13492.227539,9568.0878906,-0.509822]",-164.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13503.75293,9584.541992,-0.509822]",-109.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13489.462891,9582.102539,-0.228114]",-174.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13472.387695,9586.272461,-0.228119]",185.884,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13471.0664063,9585.233398,-0.228114]",-174.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13471.899414,9586.798828,-0.228114]",-59.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13497.78125,9598.173828,-0.228114]",-84.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13506.121094,9597.310547,-1.07324]",-44.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStones_erosion","[13503.397461,9590.663086,-0.0648148]",-44.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStones_erosion","[13493.814453,9591.527344,-0.153199]",-109.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStones_erosion","[13484.574219,9581.425781,-0.207071]",-69.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStones_erosion","[13498.219727,9582.771484,-0.23569]",5.884,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStones_erosion","[13479.00585938,9577.577148,-0.23569]",5.884,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStones_erosion","[13476.378906,9588.729492,-0.23569]",5.884,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStones_erosion","[13492.618164,9585.796875,-0.23569]",5.884,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_03","[13504.962891,9596.876953,0]",5.884,-100,0,0,[]] call _CreateLocalVehicle;
["Land_SharpStone_02","[13496.817383,9577.519531,-0.563414]",5.884,-100,0,0,[]] call _CreateLocalVehicle;

//Farming : Pierre
["Land_BluntRock_spike","[14377.741211,10564.204102,-8.92211]",327.992,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_spike","[14432.548828,10498.918945,-8.04079]",-65.6566,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_apart","[14412.416016,10552.563477,0.22561]",-32.0076,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_apart","[14400.642578,10509.757813,-1.4291]",-269.242,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_spike","[14397.661133,10529.338867,-14.5855]",-265.896,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_spike","[14413.201172,10517.68457,-12.0323]",-221.957,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_spike","[14374.945313,10504.501953,-7.07834]",-176.957,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_wallH","[14378.878906,10528.0527344,-18.7166]",-174.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_wallH","[14404.866211,10484.791992,-15.8595]",-289.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_apart","[14364.720703,10521.253906,-4.32993]",-289.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_apart","[14383.128906,10540.432617,5.19591]",-334.116,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BluntRock_apart","[14382.679688,10485.0966797,-3.46394]",-334.116,-100,0,0,[]] call _CreateLocalVehicle;

//Panneaux publicitaire
["Lyeed_Billboard_Alysia_1","[5757.296387,10193.0966797,4.65166]",-74.9242,-100,0,0,[]] call _CreateLocalVehicle;

// Base : GDM
["Land_ConcreteWall_01_l_8m_F","[5659.361328,10975.955078,0]",134.432,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_4m_F","[5655.137207,10971.644531,0.000841752]",-225.631,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5650.932129,10972.849609,0]",44.5583,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5645.200684,10978.493164,0]",44.5583,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5639.469238,10984.136719,0]",44.5583,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5633.737793,10989.780273,0]",44.5583,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5628.00634766,10995.423828,0]",44.5583,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5622.333008,10995.620117,0]",-44.6211,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5616.60791,10989.970703,0]",-44.6211,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5610.882813,10984.321289,0]",-44.6211,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5605.157715,10978.671875,0]",-44.6211,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5599.432617,10973.0224609,0]",315.379,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_4m_F","[5595.1875,10968.796875,0]",-45.3155,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5590.983398,10970.00878906,0]",-134.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5585.302246,10975.703125,0]",-134.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5579.621094,10981.397461,0]",-134.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5573.939941,10987.0917969,0]",-134.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5568.258789,10992.786133,0]",-134.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5562.577637,10998.480469,0]",-134.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5562.217285,11004.268555,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5567.606445,11010.240234,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5572.995605,11016.211914,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5578.384766,11022.183594,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5583.773926,11028.155273,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5589.163086,11034.126953,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5594.552246,11040.0986328,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5599.941406,11046.0703125,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5605.330566,11052.0419922,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5610.719727,11058.0136719,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5616.108887,11063.985352,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5621.498047,11069.957031,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5626.887207,11075.928711,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5632.276367,11081.900391,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5637.665527,11087.87207,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5643.0546875,11093.84375,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5648.443848,11099.81543,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5653.833008,11105.787109,0]",-227.934,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5659.387695,11106.210938,0]",-318.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5665.400391,11100.868164,0]",-318.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5671.413086,11095.525391,0]",-318.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5677.425781,11090.182617,0]",-318.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5683.438477,11084.839844,0]",-318.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5688.90332,11079.146484,-0.0387206]",-309.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5694.00634766,11072.928711,-0.0387206]",-309.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5699.109375,11066.710938,-0.0387206]",-309.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5704.212402,11060.493164,-0.0387206]",-309.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5709.31543,11054.275391,-0.0387206]",-309.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5714.418457,11048.0576172,-0.0387206]",-309.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5719.521484,11041.839844,-0.0387206]",-309.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5724.624512,11035.62207,-0.0387206]",-309.376,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5724.224121,11030.0546875,-0.0387206]",-398.525,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5717.931152,11025.0449219,-0.0387206]",-398.525,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5711.638184,11020.0351563,-0.0387206]",-398.525,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5705.345215,11015.0253906,-0.0387206]",-398.525,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5699.0522461,11010.015625,-0.0387206]",-398.525,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5692.759277,11005.00585938,-0.0387206]",-398.525,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5686.466309,10999.996094,-0.0387206]",-398.525,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5680.17334,10994.986328,-0.0387206]",-398.525,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[5673.880371,10989.976563,-0.0387206]",321.475,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_4m_F","[5669.717285,10986.400391,-0.0387206]",-404.431,-100,0,0,[]] call _CreateLocalVehicle;

// Base : Armée Nationalee Tanocienne
["Land_Mil_WallBig_4m_F","[7365.672363,8573.160156,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7362.956543,8570.219727,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7360.240723,8567.279297,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7357.524902,8564.338867,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7354.809082,8561.398438,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7352.0932617,8558.458008,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7349.377441,8555.517578,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7346.661621,8552.577148,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7343.945801,8549.636719,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7341.22998,8546.696289,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7338.51416,8543.755859,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7335.79834,8540.81543,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7333.0825195,8537.875,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7330.366699,8534.93457,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7327.650879,8531.994141,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7324.935059,8529.0537109,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7322.219238,8526.113281,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7319.503418,8523.172852,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7316.787598,8520.232422,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7315.25,8516.94043,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7314.855469,8512.957031,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7314.460938,8508.973633,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7314.0664063,8504.990234,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7313.671875,8501.00683594,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7313.277344,8497.0234375,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7312.882813,8493.0400391,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7312.488281,8489.0566406,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7312.09375,8485.0732422,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7311.699219,8481.0898438,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7311.304688,8477.106445,-0.0244108]",95.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7312.22998,8473.783203,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7314.767578,8470.6875,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7317.305176,8467.591797,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7319.842773,8464.496094,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7322.380371,8461.400391,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7324.917969,8458.304688,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7327.455566,8455.208984,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7329.993164,8452.113281,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7332.530762,8449.0175781,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7335.0683594,8445.921875,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7337.605957,8442.826172,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7340.143555,8439.730469,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7342.681152,8436.634766,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7345.21875,8433.539063,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7347.756348,8430.443359,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7350.293945,8427.347656,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7352.831543,8424.251953,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7355.369141,8421.15625,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7357.906738,8418.0605469,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7360.444336,8414.964844,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7362.981934,8411.869141,-0.0244108]",50.6542,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7365.612305,8411.558594,-0.0244108]",-39.3458,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7368.70752,8414.0966797,-0.0244108]",-39.3458,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7371.802734,8416.634766,-0.0244108]",-39.3458,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7374.897949,8419.172852,-0.0244108]",-39.3458,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7376.63916,8422.239258,-0.0244108]",-80.8408,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7386.779297,8429.990234,-0.0244108]",-353.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7390.126465,8431.09375,-0.0244108]",-401.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7393.108398,8433.763672,-0.0244108]",-401.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7396.090332,8436.433594,-0.0244108]",-401.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7399.0722656,8439.103516,-0.0244108]",-401.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7402.0541992,8441.773438,-0.0244108]",-401.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7405.251465,8441.767578,-0.0244108]",-317.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7408.218262,8439.0810547,-0.0244108]",-317.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7411.185059,8436.394531,-0.0244108]",-317.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7414.151855,8433.708008,-0.0244108]",-317.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7417.118652,8431.0214844,-0.0244108]",-317.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7420.0854492,8428.334961,-0.0244108]",-317.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7423.0522461,8425.648438,-0.0244108]",-317.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7426.019043,8422.961914,-0.0244108]",-317.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7428.98584,8420.275391,-0.0244108]",-317.841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7431.657227,8420.379883,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7434.373047,8423.320313,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7437.0888672,8426.260742,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7439.804688,8429.201172,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7442.520508,8432.141602,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7445.236328,8435.0820313,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7447.952148,8438.0224609,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7450.667969,8440.962891,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7453.383789,8443.90332,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7456.0996094,8446.84375,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7458.81543,8449.78418,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7461.53125,8452.724609,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7464.24707,8455.665039,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7466.962891,8458.605469,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7469.678711,8461.545898,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7472.394531,8464.486328,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7475.110352,8467.426758,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7477.826172,8470.367188,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7480.541992,8473.307617,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7483.257813,8476.248047,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7485.973633,8479.188477,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7488.689453,8482.128906,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7491.405273,8485.0693359,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7494.121094,8488.00976563,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7496.836914,8490.950195,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7499.552734,8493.890625,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7502.268555,8496.831055,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7504.984375,8499.771484,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7507.700195,8502.711914,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7510.416016,8505.652344,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7513.131836,8508.592773,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7515.847656,8511.533203,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7518.563477,8514.473633,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7521.279297,8517.414063,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7523.995117,8520.354492,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7526.710938,8523.294922,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7529.426758,8526.235352,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7532.142578,8529.175781,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7534.858398,8532.116211,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7537.574219,8535.0566406,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7540.290039,8537.99707,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7543.00585938,8540.9375,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7545.72168,8543.87793,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7548.4375,8546.818359,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7551.15332,8549.758789,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7553.869141,8552.699219,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7556.584961,8555.639648,-0.0244108]",-407.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7556.753418,8558.628906,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7554.441895,8561.896484,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7552.130371,8565.164063,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7549.818848,8568.431641,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7547.507324,8571.699219,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7545.195801,8574.966797,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7542.884277,8578.234375,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7540.572754,8581.501953,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7538.26123,8584.769531,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7535.949707,8588.0371094,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7533.638184,8591.304688,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7531.32666,8594.572266,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7529.0151367,8597.839844,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7526.703613,8601.107422,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7524.39209,8604.375,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7522.0805664,8607.642578,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7519.769043,8610.910156,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7517.45752,8614.177734,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7515.145996,8617.445313,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7512.834473,8620.712891,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7510.522949,8623.980469,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7508.211426,8627.248047,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7505.899902,8630.515625,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7503.588379,8633.783203,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7501.276855,8637.0507813,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7498.965332,8640.318359,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7496.653809,8643.585938,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7494.342285,8646.853516,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7492.0307617,8650.121094,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7489.719238,8653.388672,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7487.407715,8656.65625,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7485.0961914,8659.923828,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7482.784668,8663.191406,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7480.473145,8666.458984,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7478.161621,8669.726563,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7475.850098,8672.994141,-0.107744]",234.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7473.538574,8676.261719,-0.107744]",-485.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7471.227051,8679.529297,-0.107744]",234.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7368.388184,8576.100586,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7371.104004,8579.0410156,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7373.819824,8581.981445,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7376.535645,8584.921875,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7379.251465,8587.862305,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7381.967285,8590.802734,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7384.683105,8593.743164,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7387.398926,8596.683594,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7390.114746,8599.624023,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7392.830566,8602.564453,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7395.546387,8605.504883,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7398.262207,8608.445313,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7400.978027,8611.385742,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7403.693848,8614.326172,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7406.409668,8617.266602,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7409.125488,8620.207031,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7411.841309,8623.147461,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7414.557129,8626.0878906,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7417.272949,8629.0283203,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7419.98877,8631.96875,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7422.70459,8634.90918,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7425.42041,8637.849609,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7428.13623,8640.790039,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7430.852051,8643.730469,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7433.567871,8646.670898,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7436.283691,8649.611328,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7438.999512,8652.551758,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7441.715332,8655.492188,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7444.431152,8658.432617,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7447.146973,8661.373047,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7449.862793,8664.313477,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7452.578613,8667.253906,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7455.294434,8670.194336,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7458.0102539,8673.134766,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7460.726074,8676.0751953,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7463.441895,8679.015625,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7466.157715,8681.956055,-0.0244108]",132.727,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7468.777832,8682.274414,-0.0690236]",220.012,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncBarrier_stripes_F","[7385.0922852,8428.736328,0]",240.002,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncBarrier_stripes_F","[7386.401367,8426.46875,0]",240.002,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncBarrier_stripes_F","[7377.672363,8424.680664,0]",239.813,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncBarrier_stripes_F","[7378.98877,8422.416992,0]",239.813,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7376.0595703,8425.794922,-0.0244108]",241.515,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WallBig_4m_F","[7384.148926,8431.861328,-0.0244108]",61.515,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7381.724609,8437.787109,-0.0942761]",62.1463,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7379.711426,8445.459961,-0.0942761]",90.3028,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7382.439453,8452.513672,-0.0942761]",130.896,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7387.908691,8458.875,-0.0942761]",130.896,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7364.332031,8452.177734,-0.105219]",135.98,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7374.549805,8462.990234,-0.0420877]",132.98,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7380.284668,8469.0546875,0.023569]",132.096,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_tower_green_F","[7385.147461,8445.5625,0]",93.581,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7431.437988,8527.632813,-0.0942761]",134.053,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7437.38916,8533.791016,-0.0942761]",134.053,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7443.37793,8540.0800781,-0.0942761]",134.053,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7449.259277,8546.216797,-0.0942761]",132.475,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7454.904785,8552.37207,-0.0942761]",131.97,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7460.578613,8558.709961,-0.0942761]",131.465,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7425.524902,8526.0576172,-0.0673401]",41.1187,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7413.609375,8536.828125,-0.0673401]",44.7803,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7399.887207,8549.196289,-0.0673401]",44.5277,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7387.336426,8560.328125,-0.0673401]",44.5277,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7388.75293,8566.399414,-0.0673401]",312.285,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7394.437988,8572.746094,-0.0673401]",312.285,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7400.36377,8579.0683594,-0.0673401]",312.475,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7406.32959,8585.392578,-0.0673401]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7412.217773,8591.708008,-0.0673401]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7418.0991211,8598.0117188,-0.0673401]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7358.355469,8446.239258,-0.0673401]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7423.528809,8603.664063,-0.18771]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7451.45752,8577.703125,-0.18771]",222.444,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7437.879395,8589.780273,-0.18771]",-137.556,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7425.647949,8601.18457,-0.18771]",222.444,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7373.246094,8431.841797,-0.016835]",241.51,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7371.875,8434.37207,-0.016835]",241.51,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7370.641602,8436.935547,-0.016835]",246.939,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7366.156738,8432.895508,-0.016835]",232.482,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7367.810547,8430.686523,-0.016835]",232.482,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7364.228516,8433.24707,-0.016835]",141.409,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ClothesLine_01_full_F","[7355.185059,8552.825195,-0.46633]",221.937,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Canal_Dutch_01_plate_F","[7364.199707,8536.943359,-0.0656565]",131.937,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Canal_Dutch_01_plate_F","[7352.645508,8547.324219,-0.0656565]",41.937,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Canal_Dutch_01_plate_F","[7342.265137,8535.769531,-0.0656565]",311.937,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Canal_Dutch_01_plate_F","[7336.584473,8529.301758,-0.0664982]",311.937,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7341.0805664,8522.808594,-0.0816497]",131.798,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7341.397461,8522.520508,-0.313131]",131.798,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7341.723633,8522.214844,-0.554714]",131.798,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7342.0688477,8521.917969,-0.725589]",131.798,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7361.492676,8529.1875,-0.0505047]",41.546,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7361.223633,8528.894531,-0.20707]",41.546,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7360.944336,8528.624023,-0.399832]",41.546,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7360.689941,8528.365234,-0.573232]",41.546,-100,0,0,[]] call _CreateLocalVehicle;
["Land_i_Addon_03mid_V1_F","[7346.717285,8548.0078125,0.0622896]",132.442,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7328.245117,8530.879883,-0.189394]",90.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7328.794922,8531.760742,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7329.55127,8532.228516,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7330.163574,8533.0859375,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7330.73584,8533.833008,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7331.441406,8534.537109,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7332.0166016,8535.100586,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7332.592285,8535.764648,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7333.17041,8536.339844,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7333.803223,8537.234375,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7334.703125,8538.257813,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7335.369141,8539.157227,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7336.361816,8540.135742,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7337.293945,8541.157227,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7338.294434,8542.196289,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7339.22998,8543.249023,-0.189394]",24.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7340.046875,8544.338867,-0.189394]",24.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7340.925781,8545.27832,-0.189394]",24.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander1","[7331.335938,8533.424805,0]",24.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander1","[7328.408691,8530.767578,0]",-5.95216,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander1","[7334.649414,8537.650391,0]",12.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander1","[7331.981445,8533.995117,0]",12.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander1","[7338.0761719,8541.635742,0]",12.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander1","[7341.615234,8545.59082,0]",12.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander1","[7349.588867,8553.943359,0]",12.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander1","[7351.344727,8556.139648,0]",12.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander1","[7350.625,8555.361328,0]",12.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Oleander_White","[7349.950195,8554.732422,-0.189394]",63.0478,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7330.71875,8531.25293,0.240741]",312.682,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7336.144043,8537.135742,0.240741]",312.682,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7341.569336,8543.0185547,0.140573]",312.682,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7350.484863,8553.838867,0.154041]",-767.318,-100,0,0,[]] call _CreateLocalVehicle;
["Ficus_Bush_2","[7340.0141602,8543.274414,0]",305.687,-100,0,0,[]] call _CreateLocalVehicle;
["Ficus_Bush_2","[7330.663086,8533.617188,0]",305.687,-100,0,0,[]] call _CreateLocalVehicle;
["Ficus_Bush_3","[7337.396973,8541.858398,1.14478]",179.687,-100,0,0,[]] call _CreateLocalVehicle;
["Ficus_Bush_3","[7340.768066,8544.350586,0.880472]",203.687,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7356.629395,8517.941406,0]",158.687,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7351.781738,8516.0478516,0]",158.687,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7346.98877,8514.267578,0]",160.581,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall1_F","[7343.934082,8513.213867,0]",160.581,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7341.189941,8514.751953,0]",221.591,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7337.365234,8518.188477,0]",222.222,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7333.552246,8521.644531,0]",222.222,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7329.734375,8525.110352,0]",222.222,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall1_F","[7327.359863,8527.263672,0]",222.79,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall1_F","[7326.485352,8528.0869141,0]",222.79,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall1_F","[7325.559082,8528.947266,0]",222.79,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7354.185059,8556.917969,0]",41.6841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7358.0620117,8553.472656,0]",41.6841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7361.929688,8550.0283203,0]",41.6841,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7365.787598,8546.576172,0]",41.8735,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7369.659668,8543.111328,0]",41.8735,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7373.516602,8539.623047,0]",41.8735,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall1_F","[7375.209961,8536.756836,0]",117.79,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7366.145508,8526.515625,0]",132.379,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7369.610352,8530.310547,0]",132.379,-100,0,0,[]] call _CreateLocalVehicle;
["Land_CncWall4_F","[7373.105469,8534.15918,0]",132.379,-100,0,0,[]] call _CreateLocalVehicle;
["Land_TTowerSmall_1_F","[7342.786133,8544.341797,0.156566]",132.379,-100,0,0,[]] call _CreateLocalVehicle;
["Land_GarbageContainer_open_F","[7369.606934,8528.254883,0]",131.495,-100,0,0,[]] call _CreateLocalVehicle;
["Land_GarbageContainer_closed_F","[7370.804688,8529.608398,0]",131.495,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BC_Court_F","[7371.715332,8553.151367,-0.468013]",131.305,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BC_Basket_F","[7363.346191,8560.537109,-0.0252525]",131.305,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BC_Basket_F","[7380.117188,8545.720703,-0.0252525]",311.305,-100,0,0,[]] call _CreateLocalVehicle;
["Land_GymRack_01_F","[7384.729004,8544.864258,-0.0361953]",132.189,-100,0,0,[]] call _CreateLocalVehicle;
["Land_GymRack_02_F","[7381.780273,8541.499023,-0.0361953]",132.189,-100,0,0,[]] call _CreateLocalVehicle;
["Land_GymRack_03_F","[7380.380371,8539.899414,-0.0361953]",132.189,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Tribune_F","[7384.504395,8557.0185547,0]",42.189,-100,0,0,[]] call _CreateLocalVehicle;
["Land_TableDesk_F","[7358.22168,8533.232422,4.13432]",67.484,-100,0,0,[]] call _CreateLocalVehicle;
["Land_OfficeChair_01_F","[7359.106445,8533.611328,4.1147]",-292.516,-100,0,0,[]] call _CreateLocalVehicle;
["Land_OfficeCabinet_01_F","[7359.163574,8537.160156,4.10331]",-291.344,-100,0,0,[]] call _CreateLocalVehicle;
["MapBoard_stratis_F","[7359.227539,8536.369141,4.09489]",44.0123,-100,0,0,[]] call _CreateLocalVehicle;
["MapBoard_seismic_F","[7360.62207,8532.702148,4.09406]",113.991,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7356.796387,8536.383789,4.08311]",338.434,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenCrate_01_stack_x3_F","[7354.546387,8539.166016,4.08311]",-473.612,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenCrate_01_stack_x5_F","[7353.333984,8541.981445,4.08143]",-470.329,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenCrate_01_F","[7355.887695,8542.248047,4.08143]",-421.718,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenCrate_01_F","[7357.677734,8540.276367,4.08143]",338.861,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenCrate_01_F","[7358.22998,8538.899414,4.08143]",338.861,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenCrate_01_F","[7357.98584,8539.53418,4.71766]",338.861,-100,0,0,[]] call _CreateLocalVehicle;
["FlagPole_F","[7452.754395,8488.755859,0]",311.199,-100,0,0,[]] call _CreateLocalVehicle;
["Land_FireEscape_01_short_F","[7381.320313,8534.545898,-0.12944]",-408.043,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Pot_02_F","[7366.530273,8536.625,0.697623]",311.957,-100,0,0,[]] call _CreateLocalVehicle;
["Fraxinus","[7366.135742,8537.78125,0.962121]",-52.8031,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Mil_WiredFence_Gate_F","[7362.0932617,8521.527344,0]",314.21,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7352.820313,8440.178711,-0.0673401]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7348.75,8435.655273,-0.0673401]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_tower_green_F","[7366.750488,8459.878906,0]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[7480.477051,8538.570313,-0.0260943]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[7483.662109,8535.56543,-0.0260943]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[7486.912109,8532.569336,-0.0260943]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[7484.540527,8529.99707,-0.0260943]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[7481.290527,8532.993164,-0.0260943]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[7478.0405273,8535.989258,-0.0260943]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[7475.668945,8533.416992,-0.0260943]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[7478.918945,8530.420898,-0.0260943]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[7482.168945,8527.424805,-0.0260943]",312.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7484.487793,8535.874023,0]",402.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7481.378906,8538.875,0]",42.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7483.856934,8536.456055,0]",402.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7480.617188,8539.591797,0]",402.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7487.0214844,8533.539063,0]",402.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7487.885254,8532.75293,0]",402.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7486.74707,8531.436523,0]",222.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7485.820801,8532.28125,0]",222.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7483.37793,8534.609375,0]",222.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7482.672852,8535.239258,0]",237.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7480.393066,8537.704102,0]",219.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7479.658691,8538.460938,0]",219.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7478.276367,8537.0732422,0]",408.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7478.944336,8536.262695,0]",396.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7481.405762,8533.945313,0]",402.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7482.269043,8533.179688,0]",417.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7484.739258,8530.970703,0]",402.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7485.42041,8530.260742,0]",48.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7484.362793,8528.900391,0]",225.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7483.623047,8529.704102,0]",234.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7480.958984,8532.0292969,0]",222.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7480.333496,8532.74707,0]",228.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7477.803711,8534.884766,0]",219.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7477.0366211,8535.695313,0]",225.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7474.560059,8533.0595703,0]",225.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7475.337402,8532.325195,0]",216.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7477.785156,8530.0947266,0]",231.98,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7478.559082,8529.360352,0]",222.98,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7481.0805664,8527.113281,0]",228.98,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7481.865234,8526.381836,0]",213.98,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7475.88623,8534.49707,0]",42.9797,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7476.752441,8533.763672,0]",51.9797,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7479.206543,8531.348633,0]",36.9797,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7479.95166,8530.652344,0]",45.9797,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7482.353027,8528.430664,0]",45.9797,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7483.142578,8527.62793,0]",39.9797,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7463.827148,8537.286133,0]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7469.362305,8543.12207,0]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_4m_F","[7473.361816,8547.333984,0]",-46.5153,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7477.586914,8545.867188,0]",43.4847,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7483.422852,8540.332031,0]",43.2953,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7489.299805,8534.848633,0]",42.7271,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_pole_F","[7492.385254,8532.0341797,0]",43.2953,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_pole_F","[7461.233887,8534.5,0]",43.6741,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7470.200195,8525.962891,0]",42.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7476.114746,8520.511719,0]",42.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7482.0292969,8515.0605469,0]",42.664,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_pole_F","[7467.234863,8528.739258,0]",43.2953,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_pole_F","[7485.0112305,8512.305664,0]",43.2953,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7472.150879,8548.197266,-0.0673401]",314.305,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7466.241211,8542.0566406,-0.0673401]",314.305,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7478.239746,8547.273438,-0.0673401]",223.641,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7484.0922852,8541.418945,-0.0673401]",223.641,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7489.994629,8535.979492,-0.0673401]",222.758,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7460.34375,8535.976563,0]",132.758,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sunshade_01_F","[7475.645996,8533.430664,-0.369529]",135.914,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sunshade_01_F","[7483.667969,8535.605469,-0.369529]",135.914,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sunshade_02_F","[7484.563965,8529.905273,-0.444445]",135.914,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sunshade_01_F","[7480.430176,8538.554688,-0.369529]",135.914,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7473.387695,8544.307617,-0.0917509]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7476.15625,8541.673828,-0.0883839]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7478.914063,8539.0683594,-0.0858587]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7481.694336,8536.444336,-0.0845222]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7484.487793,8533.800781,-0.0828386]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7487.235352,8531.196289,-0.0819968]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7467.86377,8538.489258,-0.0979901]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7470.64502,8535.854492,-0.0963065]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7473.401367,8533.212891,-0.094623]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7476.177246,8530.59082,-0.0929395]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7478.951172,8527.944336,-0.0887306]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7481.727051,8525.313477,-0.0862054]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7465.359375,8533.100586,-0.0862054]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7471.156738,8527.630859,-0.0862054]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Sidewalk_02_8m_F","[7476.536133,8522.708984,-0.0803132]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_4m_F","[7462.853027,8533.0166016,-0.762626]",43.6108,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_4m_F","[7465.740723,8530.275391,-0.762626]",43.8634,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7488.568848,8529.987305,-0.746633]",-46.6417,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_8m_F","[7483.108398,8524.163086,-0.746633]",313.232,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Concrete_SmallWall_4m_F","[7479.0966797,8519.878906,-0.746633]",313.358,-100,0,0,[]] call _CreateLocalVehicle;
_colonelScreen_2 = ["Land_TripodScreen_01_dual_v1_F","[7355.739746,8535.90625,4.984]",106.23,-100,0,0,[]] call _CreateLocalVehicle;
_colonelScreen_1 = ["Land_TripodScreen_01_dual_v2_F","[7355.843262,8534.851563,4.12825]",108.563,-100,0,0,[]] call _CreateLocalVehicle;
_colonelScreen_3 = ["Land_TripodScreen_01_large_F","[7354.583008,8530.817383,4.12689]",41.9598,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_small_F","[7355.829102,8535.796875,4.12647]",247.833,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PCSet_01_case_F","[7356.0610352,8535.256836,4.11467]",248.273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PCSet_01_keyboard_F","[7356.226563,8535.603516,4.97589]",287.856,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PCSet_01_mouse_F","[7356.331543,8535.938477,4.97589]",257.174,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PortableSpeakers_01_F","[7355.995117,8535.751953,4.9801]",201.091,-100,0,0,[]] call _CreateLocalVehicle;
["ShootingMat_01_folded_Olive_F","[7355.652832,8535.547852,4.13161]",248.439,-100,0,0,[]] call _CreateLocalVehicle;
["ShootingMat_01_folded_Khaki_F","[7355.656738,8535.537109,4.19138]",248.439,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[7348.152832,8533.243164,4.08311]",608.383,-100,0,0,[]] call _CreateLocalVehicle;
_colonelLaptop = ["Land_Laptop_unfolded_scripted_F","[7358.354004,8533.303711,4.93971]",67.929,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PCSet_01_mouse_F","[7358.236328,8533.71582,4.94307]",236.363,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PenBlack_F","[7358.0605469,8533.822266,4.94812]",943.926,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PainKillers_F","[7359.34668,8536.945313,5.27014]",1018.67,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PainKillers_F","[7359.195801,8536.838867,5.27014]",1057.67,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PainKillers_F","[7359.293457,8536.875977,5.35461]",1050.79,-100,0,0,[]] call _CreateLocalVehicle;
["Weapon_arifle_CTAR_GL_blk_F","[7355.96875,8536.165039,5.00034]",236.094,-100,0,0,[]] call _CreateLocalVehicle;
["Weapon_MMG_02_black_F","[7358.244141,8532.763672,5.0197]",596.094,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Magazine_rifle_F","[7356.32666,8536.078125,4.9821]",626.65,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Magazine_rifle_F","[7356.175781,8536.208008,4.9821]",568.569,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Ammobox_rounds_F","[7358.596191,8532.613281,4.95769]",568.569,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Ammobox_rounds_F","[7358.548828,8532.850586,4.95937]",546.41,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PaperBox_open_full_scripted_F","[7364.529297,8505.535156,-0.0210438]",315,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PaperBox_open_full_scripted_F","[7363.280273,8506.78418,-0.0210438]",20.4672,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PaperBox_open_empty_F","[7365.370117,8506.957031,-0.0210438]",47.4672,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7397.799805,8517.742188,-0.0572391]",42.2273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7395.713867,8519.628906,-0.0572391]",42.2273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7393.668945,8521.459961,-0.0572391]",42.2273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7391.610352,8523.313477,-0.0572391]",42.2273,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_line_5_green_F","[7396.185547,8517.777344,0]",42.2904,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_line_5_green_F","[7391.989258,8521.570313,0]",42.2904,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_wall_6_green_F","[7360.155762,8511.128906,-0.0227273]",-135.371,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_line_1_green_F","[7367.398926,8504.833008,0]",-228.371,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7376.0429688,8418.671875,-0.0353535]",140.341,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7391.0527344,8427.973633,-0.0353535]",-211.01,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7396.928223,8433.0859375,-0.0353535]",-229.444,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7401.741211,8438.972656,-0.0353535]",-230.518,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_round_green_F","[7369.00976563,8439.0791016,0]",-158.518,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7364.55127,8438.49707,0]",-194.518,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_corner_green_F","[7362.522461,8438.201172,0]",165.482,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7328.697754,8527.505859,0]",402.318,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7334.64502,8522.0908203,0]",402.318,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7340.592285,8516.675781,0]",402.318,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7347.142578,8515.449219,0]",339.318,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7354.667969,8518.290039,0]",339.318,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7366.304688,8528.310547,0]",311.94,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7371.680664,8534.293945,0]",311.94,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7371.570313,8539.939453,0]",222.255,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7365.616699,8545.348633,0]",222.255,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7359.663086,8550.757813,0]",222.255,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_8m_F","[7354.455078,8555.444336,0]",221.75,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7329.102051,8527.380859,2.295]",-316.323,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7334.994629,8521.976563,2.295]",42.793,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7340.601563,8516.863281,2.295]",-317.207,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7347.375488,8515.757813,2.295]",-380.27,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7354.586914,8518.477539,2.295]",339.73,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7366.379395,8528.476563,2.295]",-407.901,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7371.605469,8534.413086,2.295]",-407.901,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7371.365234,8539.916992,2.295]",-495.662,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7365.217773,8545.535156,2.295]",-497.366,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7359.213379,8551.0146484,2.295]",221.939,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Razorwire_F","[7354.626953,8555.0166016,2.295]",221.939,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7356.427246,8519.597656,0]",250.581,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7352.824219,8518.25293,0]",250.581,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7349.171875,8516.994141,0]",250.581,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7345.411133,8515.469727,0]",248.056,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7342.433594,8516.078125,0]",312.576,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7339.592773,8518.626953,0]",-407.424,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7336.678711,8521.265625,0]",312.576,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7333.645508,8524.0517578,0]",-407.424,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7330.794922,8526.592773,0]",312.576,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7327.922852,8529.183594,0]",312.576,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7364.484375,8527.297852,0]",221.465,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7367.0859375,8530.233398,0]",-498.535,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7369.673828,8533.170898,0]",221.97,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7372.35498,8536.0527344,0]",-496.957,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7372.335449,8538.351563,0]",132.381,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7369.462891,8541.0341797,0]",132.381,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7366.638672,8543.632813,0]",133.013,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7363.63916,8546.294922,0]",-586.987,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7360.728516,8548.944336,0]",132.571,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7357.759766,8551.614258,0]",132.571,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7354.80957,8554.321289,0]",132.571,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7352.564453,8556.319336,0]",132.571,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bench_04_F","[7341.451172,8518.614258,0]",221.672,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bench_04_F","[7343.178711,8517.0751953,0]",221.672,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_pole_F","[7358.424316,8519.770508,0]",134.192,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_l_pole_F","[7363.594727,8525.295898,0]",131.667,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_m_pole_F","[7358.33252,8520.401367,0]",131.667,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ConcreteWall_01_m_pole_F","[7362.999512,8525.361328,0]",41.667,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7479.103516,8522.953125,0]",312.576,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7476.217773,8525.603516,0]",312.576,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7473.332031,8528.253906,0]",312.576,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7470.446289,8530.904297,0]",312.576,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Hedge_01_s_4m_F","[7465.330566,8535.727539,0]",312.576,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Icebox_F","[7478.955078,8524.453125,0]",222.639,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Icebox_F","[7477.520508,8525.774414,0]",222.639,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Icebox_F","[7473.668945,8529.412109,0]",223.485,-100,0,0,[]] call _CreateLocalVehicle;
["Fridge_01_open_F","[7475.0078125,8528.1875,0]",223.8,-100,0,0,[]] call _CreateLocalVehicle;
["Fridge_01_closed_F","[7475.51416,8527.675781,0]",223.8,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bench_05_F","[7478.125977,8522.695313,0]",223.106,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bench_05_F","[7475.0737305,8525.577148,0]",222.538,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bench_05_F","[7471.171875,8529.160156,0]",222.538,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_small_F","[7476.224121,8526.880859,0]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_small_F","[7472.327148,8530.671875,0]",313.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_AttachedSign_01_v3_F","[7465.906738,8527.242188,4.2263]",312.285,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BarrelEmpty_F","[7464.719238,8537.266602,0]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BarrelEmpty_F","[7465.35498,8537.612305,0]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BarrelEmpty_grey_F","[7465.476563,8536.966797,0]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BarrelSand_grey_F","[7465.768555,8536.53418,0]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BarrelWater_grey_F","[7466.0922852,8537.0234375,0]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BarrelWater_grey_F","[7466.330078,8536.276367,0]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_GarbageBarrel_01_F","[7467.352539,8529.481445,-0.0277778]",403.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WheelieBin_01_F","[7491.824219,8531.365234,0]",394.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WheelieBin_01_F","[7492.458496,8531.0761719,0]",376.485,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WheelieBin_01_F","[7491.31543,8531.786133,0]",400.485,-100,0,0,[]] call _CreateLocalVehicle;
["ArrowMarker_R_F","[7473.272461,8551.283203,-0.103535]",490.485,-100,0,0,[]] call _CreateLocalVehicle;

["Land_BagFence_01_corner_green_F","[7358.302734,8532.363281,3.92871]",158.621,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_corner_green_F","[7357.685547,8533.8125,3.92871]",249.404,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_short_green_F","[7357.644531,8533.111328,3.96659]",249.404,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_corner_green_F","[7354.703613,8530.349609,3.96659]",159.404,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_end_green_F","[7355.398926,8533.673828,3.96659]",156.947,-100,0,0,[]] call _CreateLocalVehicle;
["Land_BagFence_01_long_green_F","[7359.930664,8535.0273438,3.96659]",68.1212,-100,0,0,[]] call _CreateLocalVehicle;
["Land_HBarrier_01_big_4_green_F","[7450.825684,8525.0410156,-0.0277778]",131.727,-100,0,0,[]] call _CreateLocalVehicle;

//ATM
{
	if (isClass(missionConfigFile >> "ADENIS_ATM" >> typeOf(_x))) then
	{
		_config_ATM = missionConfigFile >> "ADENIS_ATM" >> typeOf(_x);
		if (isClass(_config_ATM >> "marker") && (_x getVariable ["alysia_marker", true])) then
		{
			_marker = createMarkerLocal [format["atm_marker_%1", _forEachIndex], (getPos _x)];
		 	_marker setMarkerShapeLocal getText(_config_ATM >> "marker" >> "ShapeLocal");
			_marker setMarkerTypeLocal getText(_config_ATM >> "marker" >> "TypeLocal");
			_marker setMarkerColorLocal getText(_config_ATM >> "marker" >> "ColorLocal");
			_marker setMarkerSizeLocal getArray(_config_ATM >> "marker" >> "SizeLocal");
		};
	};
} forEach (allMissionObjects "All");

if (playerSide isEqualTo independent) then
{
	{
		_marker = createMarkerLocal [format["stand_faction_%1", _forEachIndex], (getPos _x)];
		_marker setMarkerTextLocal "Stand";
		_marker setMarkerColorLocal "ColorWhite";
		_marker setMarkerTypeLocal "mil_dot";
		_marker setMarkerSizeLocal [0.4, 0.4];
	} forEach ([stand_info_guer_1]);
} else {
	{
		removeAllActions _x;
	} forEach ([stand_info_guer_1]);
};

/*if (playerSide isEqualTo east) then
{
	{
		_marker = createMarkerLocal [format["stand_faction_%1", _forEachIndex], (getPos _x)];
		_marker setMarkerTextLocal "Stand";
		_marker setMarkerColorLocal "ColorWhite";
		_marker setMarkerTypeLocal "mil_dot";
		_marker setMarkerSizeLocal [0.4, 0.4];
	} forEach ([stand_info_east_1, stand_info_east_2]);
} else {
	{
		removeAllActions _x;
	} forEach ([stand_info_east_1, stand_info_east_2]);
};*/

if (playerSide isEqualTo west) then
{
	{
		_marker = createMarkerLocal [format["stand_faction_%1", _forEachIndex], (getPos _x)];
		_marker setMarkerTextLocal "Stand";
		_marker setMarkerColorLocal "ColorWhite";
		_marker setMarkerTypeLocal "mil_dot";
		_marker setMarkerSizeLocal [0.4, 0.4];
	} forEach ([stand_info_west_1, stand_info_west_2]);
} else {
	{
		removeAllActions _x;
	} forEach ([stand_info_west_1, stand_info_west_2]);
};

if (playerSide isEqualTo civilian) then
{
	{
		_x addAction
		[
			format
			[
				"<img image='Alysia_Client_Texture\Data\actions_menu\license.paa'/> Acheter <t color='#FF0000'>%1</t> (<t color='#8cff9b'>%2</t>$)",
				['rebelle_1'] call AlysiaClient_fnc_licenseGetName,
				[['rebelle_1'] call AlysiaClient_fnc_licenseGetPrice] call AlysiaClient_fnc_numberText
			],AlysiaClient_fnc_buyLicense,"rebelle_1",0,false,false,"",'vehicle player == player && player distance _target < 4 && !(["rebelle_1"] call AlysiaClient_fnc_hasLicense)'
		];
	} forEach ([rebel_stand_1, rebel_stand_2]);
} else {
	{
		removeAllActions _x;
	} forEach ([rebel_stand_1, rebel_stand_2]);
};

east_computer addAction ["=====[Barrière]=====", "", "", 9993, false, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];
east_computer addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#01DF01'>Ouvrir</t>",
{
	if ((east_base_plot_1 animationPhase "plot_1_translation") != 0) then {east_base_plot_1 animate ["plot_1_translation", 0]};
	if ((east_base_plot_2 animationPhase "plot_1_translation") != 0) then {east_base_plot_2 animate ["plot_1_translation", 0]};
	if ((east_base_plot_3 animationPhase "plot_1_translation") != 0) then {east_base_plot_3 animate ["plot_1_translation", 0]};
	if ((east_base_plot_4 animationPhase "plot_1_translation") != 0) then {east_base_plot_4 animate ["plot_1_translation", 0]};
	if ((east_base_plot_5 animationPhase "plot_1_translation") != 0) then {east_base_plot_5 animate ["plot_1_translation", 0]};
	if ((east_base_plot_6 animationPhase "plot_1_translation") != 0) then {east_base_plot_6 animate ["plot_1_translation", 0]};
}, "", 9992, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];

east_computer addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#FF0000'>Fermer</t>",
{
	if ((east_base_plot_1 animationPhase "plot_1_translation") != 1) then {east_base_plot_1 animate ["plot_1_translation", 1]};
	if ((east_base_plot_2 animationPhase "plot_1_translation") != 1) then {east_base_plot_2 animate ["plot_1_translation", 1]};
	if ((east_base_plot_3 animationPhase "plot_1_translation") != 1) then {east_base_plot_3 animate ["plot_1_translation", 1]};
	if ((east_base_plot_4 animationPhase "plot_1_translation") != 1) then {east_base_plot_4 animate ["plot_1_translation", 1]};
	if ((east_base_plot_5 animationPhase "plot_1_translation") != 1) then {east_base_plot_5 animate ["plot_1_translation", 1]};
	if ((east_base_plot_6 animationPhase "plot_1_translation") != 1) then {east_base_plot_6 animate ["plot_1_translation", 1]};
}, "", 9991, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];

west_computer addAction ["=====[Barrière]=====", "", "", 9993, false, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];
west_computer addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#01DF01'>Ouvrir</t>",
{
	if ((west_base_plot_1 animationPhase "plot_1_translation") != 0) then {west_base_plot_1 animate ["plot_1_translation", 0]};
	if ((west_base_plot_2 animationPhase "plot_1_translation") != 0) then {west_base_plot_2 animate ["plot_1_translation", 0]};
	if ((west_base_plot_3 animationPhase "plot_1_translation") != 0) then {west_base_plot_3 animate ["plot_1_translation", 0]};
	if ((west_base_plot_4 animationPhase "plot_1_translation") != 0) then {west_base_plot_4 animate ["plot_1_translation", 0]};
	if ((west_base_plot_5 animationPhase "plot_1_translation") != 0) then {west_base_plot_5 animate ["plot_1_translation", 0]};
}, "", 9992, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];

west_computer addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#FF0000'>Fermer</t>",
{
	if ((west_base_plot_1 animationPhase "plot_1_translation") != 1) then {west_base_plot_1 animate ["plot_1_translation", 1]};
	if ((west_base_plot_2 animationPhase "plot_1_translation") != 1) then {west_base_plot_2 animate ["plot_1_translation", 1]};
	if ((west_base_plot_3 animationPhase "plot_1_translation") != 1) then {west_base_plot_3 animate ["plot_1_translation", 1]};
	if ((west_base_plot_4 animationPhase "plot_1_translation") != 1) then {west_base_plot_4 animate ["plot_1_translation", 1]};
	if ((west_base_plot_5 animationPhase "plot_1_translation") != 1) then {west_base_plot_5 animate ["plot_1_translation", 1]};
}, "", 9991, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];

_colonelLaptop addAction ["=====[Portes principales Maison]=====", "", "", 10002, false, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];
_colonelLaptop addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#01DF01'>Ouvrir</t>",
{
	(nearestObject [[7353.69,8533.37,0.00143909], "Land_em_mansion_01"]) animate [format["door_%1_rot", 1], 1];
	(nearestObject [[7353.69,8533.37,0.00143909], "Land_em_mansion_01"]) animate [format["door_%1_rot", 2], 1];
}, "", 10001, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];
_colonelLaptop addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#FF0000'>Fermer</t>",
{
	(nearestObject [[7353.69,8533.37,0.00143909], "Land_em_mansion_01"]) animate [format["door_%1_rot", 1], 0];
	(nearestObject [[7353.69,8533.37,0.00143909], "Land_em_mansion_01"]) animate [format["door_%1_rot", 2], 0];
}, "", 10000, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];

_colonelLaptop addAction ["======[Porte du bureau Maison]=======", "", "", 9999, false, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];
_colonelLaptop addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#01DF01'>Ouvrir</t>",
{
	(nearestObject [[7353.69,8533.37,0.00143909], "Land_em_mansion_01"]) animate [format["door_%1_rot", 7], 1];
}, "", 9998, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];
_colonelLaptop addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#FF0000'>Fermer</t>",
{
	(nearestObject [[7353.69,8533.37,0.00143909], "Land_em_mansion_01"]) animate [format["door_%1_rot", 7], 0];
}, "", 9997, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];

_colonelLaptop addAction ["========[Barrière de la base]========", "", "", 9996, false, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];
_colonelLaptop addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#01DF01'>Ouvrir</t>",
{
	if ((east_base_plot_1 animationPhase "plot_1_translation") != 0) then {east_base_plot_1 animate ["plot_1_translation", 0]};
	if ((east_base_plot_2 animationPhase "plot_1_translation") != 0) then {east_base_plot_2 animate ["plot_1_translation", 0]};
	if ((east_base_plot_3 animationPhase "plot_1_translation") != 0) then {east_base_plot_3 animate ["plot_1_translation", 0]};
	if ((east_base_plot_4 animationPhase "plot_1_translation") != 0) then {east_base_plot_4 animate ["plot_1_translation", 0]};
	if ((east_base_plot_5 animationPhase "plot_1_translation") != 0) then {east_base_plot_5 animate ["plot_1_translation", 0]};
	if ((east_base_plot_6 animationPhase "plot_1_translation") != 0) then {east_base_plot_6 animate ["plot_1_translation", 0]};
}, "", 9995, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];

_colonelLaptop addAction ["<img image='Alysia_Client_Texture\Data\actions_menu\fence.paa'/> <t color='#FF0000'>Fermer</t>",
{
	if ((east_base_plot_1 animationPhase "plot_1_translation") != 1) then {east_base_plot_1 animate ["plot_1_translation", 1]};
	if ((east_base_plot_2 animationPhase "plot_1_translation") != 1) then {east_base_plot_2 animate ["plot_1_translation", 1]};
	if ((east_base_plot_3 animationPhase "plot_1_translation") != 1) then {east_base_plot_3 animate ["plot_1_translation", 1]};
	if ((east_base_plot_4 animationPhase "plot_1_translation") != 1) then {east_base_plot_4 animate ["plot_1_translation", 1]};
	if ((east_base_plot_5 animationPhase "plot_1_translation") != 1) then {east_base_plot_5 animate ["plot_1_translation", 1]};
	if ((east_base_plot_6 animationPhase "plot_1_translation") != 1) then {east_base_plot_6 animate ["plot_1_translation", 1]};
}, "", 9994, true, false, "", "(((player distance _target) < 2) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]))"];

_colonelScreen_1 setVariable ["cam_data", [["colonel_house_cam_1", [7354.09,8536.91,7.10143], [7351.23,8531.63,4.13211]], ["colonel_house_cam_2", [7350.94,8525.26,7.20144], [7357.65,8530.49,0.00143909]]]];
_colonelScreen_2 setVariable ["cam_data", [["colonel_military_cam_1", [7484.78,8511.25,5.10476], [7476.78,8510.93,0.295601]], ["colonel_military_cam_2", [7467.58,8490.22,6.01497], [7455.84,8491.39,0.00143862]]]];
_colonelScreen_3 setVariable ["cam_data", [["colonel_military_cam_3", [7363.9,8435.24,12.7014], [7382.94,8424.75,0.00143862]]]];

{
	_x addAction ["<img image='lyeed_IMG\data\actions_menu\camera.paa'/> <t color='#01DF01'>Allumer</t>",
	{
		if (!isPipEnabled) exitWith {
			["Vous devez activer le Picture to Picture (PIP) dans vos options Arma 3 pour pouvoir accéder à la retransmission des écrans."] call AlysiaClient_fnc_error;
		};
		(_this select 0) say3D "tv_bip";
		{
			_camera = "camera" camCreate (_x select 1);
			_camera camSetFov 0.7;
			_camera camSetTarget (_x select 2);
			_camera camCommit 0;
			_camera cameraEffect ["Internal", "Back", (_x select 0)];
			(_this select 0) setObjectTexture [_forEachIndex, format["#(argb,512,512,1)r2t(%1,1)", (_x select 0)]];
			(_this select 0) setVariable ["cameras", ((_this select 0) getVariable ["cameras", []]) + [_camera]];
		} forEach ((_this select 0) getVariable "cam_data");
		(_this select 0) setVariable ["camera_ON", true];
		(_this select 0) setVariable ["camera_night", false];
	}, "", 9999, false, true, "", "(((player distance _target) < 3) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]) && !(_target getVariable ['camera_ON',false]))"];

	_x addAction ["<img image='lyeed_IMG\data\actions_menu\camera.paa'/> <t color='#FF0000'>Eteindre</t>",
	{
		(_this select 0) say3D "tv_bip";
		{
			camDestroy _x;
			(_this select 0) setObjectTexture [_forEachIndex, ""];
		} forEach ((_this select 0) getVariable ["cameras",[]]);
		(_this select 0) setVariable ["camera_ON", false];
	}, "", 9999, false, true, "", "(((player distance _target) < 3) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]) && (_target getVariable ['camera_ON',false]))"];

	_x addAction ["<img image='lyeed_IMG\data\actions_menu\night.paa'/> Mode <t color='#01DF01'>vision nocturne</t>",
	{
		(_this select 0) say3D "tv_bip";
		{
			(_x select 0) setPiPEffect [1];
		} forEach ((_this select 0) getVariable "cam_data");
		(_this select 0) setVariable ["camera_night", true];
	}, "", 9998, false, true, "", "(((player distance _target) < 3) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]) && !(_target getVariable ['camera_night',false]) && (_target getVariable ['camera_ON',false]))"];

	_x addAction ["<img image='lyeed_IMG\data\actions_menu\day.paa'/> Mode <t color='#01DF01'>normal</t>",
	{
		(_this select 0) say3D "tv_bip";
		{
			(_x select 0) setPiPEffect [0];
		} forEach ((_this select 0) getVariable "cam_data");
		(_this select 0) setVariable ["camera_night", false];
	}, "", 9998, false, true, "", "(((player distance _target) < 3) && !(player getVariable ['surrender',false]) && !(player getVariable ['restrained',false]) && (_target getVariable ['camera_night',false]) && (_target getVariable ['camera_ON',false]))"];
} forEach ([_colonelScreen_2, _colonelScreen_1, _colonelScreen_3]);

//Paintball
["Lyeed_Billboard_New","[5300.0180664,11338.491211,0]",146.9,-100,0,0,[]] call _CreateLocalVehicle;
["Lyeed_Billboard_Alysia_1","[5312.456055,11346.692383,0]",146.9,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnetentry","[5306.29834,11342.644531,-0.215497]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Cyl","[5302.652344,11340.419922,-0.553031]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Cyl","[5309.693848,11345.195313,-0.443603]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5344.234375,11363.336914,-0.546296]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5348.129395,11357.900391,-0.378788]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5351.759766,11352.829102,-0.361953]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5355.609375,11347.619141,-0.385522]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5359.478027,11342.263672,-0.546296]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5367.0654297,11331.751953,-0.0614474]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5370.88916,11326.571289,-0.0361949]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5374.703125,11321.288086,0.249159]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5378.644531,11315.763672,0.249159]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5382.585938,11310.239258,0.249159]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5381.508789,11306.0976563,-0.414141]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5375.938477,11302.22168,-0.414141]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5370.368164,11298.345703,-0.414141]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5364.797852,11294.469727,-0.414141]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5359.227539,11290.59375,-0.414141]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5353.657227,11286.717773,-0.414141]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5342.516602,11278.96582,-0.414141]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5348.0869141,11282.841797,-0.414141]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5337.264648,11275.313477,-0.914983]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5331.694336,11271.4375,-0.914983]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5326.124023,11267.561523,-0.914983]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5320.645996,11263.65918,-0.914983]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5314.998535,11259.813477,-0.914983]",145.166,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5310.797363,11260.480469,-0.773568]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5307.0249023,11265.727539,-0.481481]",52.6023,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5303.116699,11271.000976563,-0.192353]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5299.337891,11276.256836,-0.230639]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5295.685059,11281.557617,-0.416666]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5288.269531,11292.0478516,-0.729797]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5284.514648,11297.307617,-0.571548]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5280.820313,11302.576172,-0.556396]",54.4963,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5277.153809,11307.75293,-0.547137]",54.4332,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5273.28418,11313.113281,-0.547137]",54.4332,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5270.0869141,11317.384766,0.00420876]",233.641,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5271.185547,11320.103516,-0.00336698]",326.065,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5274.693359,11322.463867,-0.00336698]",326.065,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5278.201172,11324.824219,-0.00336698]",326.065,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5281.708984,11327.18457,-0.00336698]",326.065,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5285.216797,11329.544922,-0.00336698]",326.065,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5288.724609,11331.905273,-0.00336698]",326.065,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5292.232422,11334.265625,-0.00336698]",326.065,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5295.740234,11336.625977,-0.00336698]",326.065,-100,0,0,[]] call _CreateLocalVehicle;
["set3_bumper","[5299.897949,11338.838867,0]",146.9,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5316.22168,11349.366211,0]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5319.76123,11351.708008,-0.209596]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5323.301758,11353.991211,-0.177609]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5326.841797,11356.303711,0]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5330.381836,11358.616211,0]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5333.921875,11360.928711,0]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5337.461914,11363.241211,0]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5340.54248,11365.296875,0]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5342.848145,11365.112305,0]",54.6378,-100,0,0,[]] call _CreateLocalVehicle;
["set3_coil","[5306.266602,11338.0537109,0]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set3_coil","[5310.588867,11340.866211,0]",326.85,-100,0,0,[]] call _CreateLocalVehicle;
["set3_snake","[5308.0854492,11339.345703,0.00252527]",57.807,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5313.0742188,11342.419922,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5304.101563,11336.615234,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5300.574219,11334.28418,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5316.272461,11344.615234,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set1_egg","[5354.280762,11310.116211,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set1_egg","[5355.483887,11308.354492,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set2_x","[5329.804688,11312.995117,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set2_x","[5327.362793,11316.367188,-0.228114]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set2_x","[5332.0195313,11309.496094,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set1_cube","[5313.110352,11281.470703,0]",232.522,-100,0,0,[]] call _CreateLocalVehicle;
["set1_cube","[5327.580078,11276.194336,0]",232.522,-100,0,0,[]] call _CreateLocalVehicle;
["set1_cube","[5342.677734,11337.0234375,0]",232.522,-100,0,0,[]] call _CreateLocalVehicle;
["set1_cube","[5330.462891,11343.743164,0]",232.522,-100,0,0,[]] call _CreateLocalVehicle;
["set1_egg","[5297.850586,11308.237305,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["set1_egg","[5296.62793,11310.0869141,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Cyl_Side","[5306.547363,11324.561523,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Cyl_Side","[5341.466309,11308.814453,0]",146.537,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Pyr","[5324.359863,11320.657227,0]",235.534,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Pyr","[5334.888184,11305.168945,0]",235.534,-100,0,0,[]] call _CreateLocalVehicle;
["set2_standroll","[5318.744141,11332.433594,0]",235.534,-100,0,0,[]] call _CreateLocalVehicle;
["set2_standroll","[5339.794434,11291.0625,0]",235.534,-100,0,0,[]] call _CreateLocalVehicle;
["set3_coil","[5323.401855,11295.0351563,0]",235.534,-100,0,0,[]] call _CreateLocalVehicle;
["set3_coil","[5332.299805,11328.357422,0]",235.534,-100,0,0,[]] call _CreateLocalVehicle;
["set3_snake","[5309.308594,11300.617188,0]",327.327,-100,0,0,[]] call _CreateLocalVehicle;
["set3_snake","[5342.974121,11321.116211,0]",327.327,-100,0,0,[]] call _CreateLocalVehicle;
["set3_snake","[5326.910645,11335.353516,0]",327.327,-100,0,0,[]] call _CreateLocalVehicle;
["set3_snake","[5353.223145,11298.645508,0]",327.327,-100,0,0,[]] call _CreateLocalVehicle;
["set3_snake","[5332.556152,11285.720703,0]",327.327,-100,0,0,[]] call _CreateLocalVehicle;
["set3_snake","[5314.498047,11320.446289,0]",327.327,-100,0,0,[]] call _CreateLocalVehicle;
["set2_wall","[5320.533203,11306.771484,0]",321.645,-100,0,0,[]] call _CreateLocalVehicle;
["set2_wall","[5335.306641,11316.0673828,0]",321.645,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5330.942871,11297.227539,-0.273569]",55.908,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5330.463867,11295.37207,-0.274411]",147.92,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5321.496094,11325.530273,-0.273569]",415.908,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5321.980957,11327.433594,-0.273569]",142.908,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Box","[5318.074707,11298.632813,0]",502.908,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Box","[5306.437012,11314.737305,0]",502.908,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Box","[5332.586914,11335.748047,0]",502.908,-100,0,0,[]] call _CreateLocalVehicle;
["PaintBall_Box","[5361.62207,11308.515625,0]",142.908,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_Window_F","[5342.463379,11301.772461,0]",775.004,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_Window_F","[5308.734863,11311.87793,0]",229.403,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5357.433594,11329.0732422,0.0707072]",58.36,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5356.391113,11330.765625,0]",1138.36,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5354.306152,11334.150391,0]",1138.36,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5353.267578,11335.81543,0.0883839]",58.3625,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Tunnel_F","[5354.12207,11331.640625,0]",58.36,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Tunnel_Crouch_F","[5361.443359,11327,0]",150.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5358.956543,11327.958984,0.176768]",17.7687,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5362.403809,11329.283203,0.000841737]",321.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5352.911621,11337.511719,0]",96.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Tunnel_Crouch_F","[5353.663086,11341.261719,0]",141.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5353.0927734,11338.986328,-1.19209e-007]",99.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5355.816895,11341.923828,0]",141.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5357.558594,11342.47168,-0.0723906]",183.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5350.374023,11329.356445,-0.197869]",59.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5351.393555,11327.638672,-0.0698652]",59.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5349.324219,11331.0917969,-0.0563972]",59.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5298.229004,11293.570313,-0.00583884]",229.36,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Tunnel_F","[5300.606934,11293.0615234,0.317393]",229.36,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5301.0966797,11290.637695,0.109481]",229.36,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5296.93457,11295.0791016,0.151571]",229.36,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5295.256348,11295.941406,0.118742]",188.769,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5302.213379,11289.323242,0.167568]",229.363,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5303.893555,11295.829102,0.126258]",230.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5302.618652,11297.353516,0.194499]",230.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5305.163574,11294.305664,0.107804]",230.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5302.850586,11287.65918,0.194497]",267.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5292.0585938,11294.09375,0.155785]",132.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Tunnel_Crouch_F","[5292.649902,11296.499023,-0.206412]",321.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5302.889648,11285.917969,0.191131]",270.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Tunnel_Crouch_F","[5302.56543,11283.629883,-0.421296]",312.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5300.541504,11282.639648,0.159144]",312.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5298.938477,11281.929688,0.136417]",0.216008,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnetentry","[5291.872559,11286.984375,-0.863307]",54,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnetentry","[5363.125,11337.28418,-0.863307]",54,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Tribune_F","[5274.55957,11328.648438,0]",-34.5845,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Tribune_F","[5282.154297,11333.853516,-0.0698653]",325.415,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Tribune_F","[5319.89502,11358.999023,0]",327.496,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Tribune_F","[5327.640625,11363.919922,-0.380471]",327.496,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5363.967285,11330.536133,-0.0614478]",321.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5365.124512,11331.943359,-0.122896]",297.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5290.979492,11292.424805,0.0842361]",114.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5290.57373,11290.598633,0.0842361]",90.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Shoot_House_Panels_F","[5296.98584,11282.107422,0.136417]",9.96855,-100,0,0,[]] call _CreateLocalVehicle;
["Land_StoneWall_01_s_10m_F","[5221.852539,11374.102539,0]",231.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_StoneWall_01_s_10m_F","[5230.0634766,11363.249023,0]",231.216,-100,0,0,[]] call _CreateLocalVehicle;
["Land_StoneWall_01_s_10m_F","[5235.939941,11356.166992,-0.324916]",231.216,-100,0,0,[]] call _CreateLocalVehicle;
["set2_pyramid","[5296.44873,11319.106445,0.0327718]",336.216,-100,0,0,[]] call _CreateLocalVehicle;
["set2_pyramid","[5351.764648,11317.581055,0.0327718]",336.216,-100,0,0,[]] call _CreateLocalVehicle;
["set3_dorito","[5347.150391,11290.46582,0]",336.216,-100,0,0,[]] call _CreateLocalVehicle;
["set3_dorito","[5319.322754,11339.586914,0]",336.216,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5317.834961,11347.141602,0]",417.216,-100,0,0,[]] call _CreateLocalVehicle;
["set2_roll","[5297.376465,11334.260742,0]",57.216,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5273.0273438,11313.493164,-0.468014]",237.216,-100,0,0,[]] call _CreateLocalVehicle;
["fieldnet","[5344.108887,11363.59375,-0.489899]",234.188,-100,0,0,[]] call _CreateLocalVehicle;
["Land_LampHalogen_F","[5342.090332,11367.576172,-7.6431]",279.063,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampHalogen_F","[5385.57373,11308.258789,-6.46128]",363.063,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampHalogen_F","[5312.103027,11255.960938,-6.46128]",468.063,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampHalogen_F","[5268.390137,11317.816406,-6.46128]",180.063,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampDecor_F","[5296.340332,11357.75,0]",180.063,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampStreet_F","[5231.115723,11388.964844,0]",510.063,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampStreet_F","[5252.00976563,11402.547852,0]",510.063,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampStreet_F","[5221.252441,11376.375,0]",411.063,-100,1,0,[]] call _CreateLocalVehicle;
["Land_LampStreet_F","[5237.587891,11354.646484,0]",51.0631,-100,1,0,[]] call _CreateLocalVehicle;

//garisson
["Land_RattanTable_01_F","[5753.192383,10103.873047,0.00143909]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5751.67041,10107.609375,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5749.820801,10112.0693359,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5757.430176,10105.762695,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5755.905762,10109.387695,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5753.866211,10113.545898,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5752.791016,10104.588867,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5751.256348,10108.358398,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5749.40332,10112.783203,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5753.444824,10114.311523,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5755.505371,10110.117188,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5757.00537109,10106.503906,0]",337.02,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5757.651367,10104.939453,0]",156.275,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5753.41748,10103.0634766,0]",156.275,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5751.911133,10106.807617,0]",156.275,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5750.0532227,10111.237305,0]",156.275,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5754.128906,10112.737305,0]",156.275,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5753.976074,10104.236328,0]",69.0909,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5752.418945,10107.914063,0]",69.0909,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5750.553711,10112.411133,0]",69.0909,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5754.577637,10113.845703,0]",69.0909,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5756.805176,10109.756836,0]",69.0909,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5758.209473,10106.0888672,0]",69.0909,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5756.61084,10105.416992,0]",248.283,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5755.102051,10109.0302734,0]",248.283,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5753.0678711,10113.173828,0]",248.283,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5748.945801,10111.734375,0]",248.283,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5750.837891,10107.272461,0]",248.283,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5752.276367,10103.442383,0]",248.283,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5756.294922,10108.574219,0]",155.227,-100,0,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5759.0585938,10093.176758,0]",174.166,-100,0,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5759.353027,10089.447266,0]",174.166,-100,0,0,[]] call _CreateLocalVehicle;
["Land_RattanTable_01_F","[5756.40625,10091.227539,0]",174.166,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5756.484863,10090.277344,0]",174.166,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5759.432129,10088.519531,0]",174.166,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5759.257813,10092.419922,0]",174.166,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5759.149414,10093.957031,0]",359.987,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5759.203613,10090.40332,0]",359.987,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5759.914551,10093.291992,0]",82.3104,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5760.226563,10089.583008,0]",82.3104,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5756.325684,10092.109375,0]",359.987,-100,0,0,[]] call _CreateLocalVehicle;
["Land_WoodenTable_large_F","[5770.10791,10108.484375,4.33874]",20.1258,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5771.219238,10108.643555,4.28644]",109.015,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5770.735352,10107.625977,4.2653]",109.015,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5769.435547,10109.265625,4.26315]",286.06,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5769.148438,10108.204102,4.26989]",286.06,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5770.697266,10109.863281,4.26989]",20.3155,-100,0,0,[]] call _CreateLocalVehicle;
["Land_ChairWood_F","[5769.587891,10106.921875,4.26989]",196.894,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5741.26416,10105.907227,0]",357.108,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5742.438477,10106.90918,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5742.410645,10108.476563,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5727.858398,10102.625977,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5740.739746,10109.50293,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5727.0605469,10103.941406,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5729.495605,10102.523438,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5730.585938,10103.640625,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5730.36377,10105.311523,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5728.884277,10106.09375,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5727.486816,10105.504883,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5766.433594,10104.359375,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5765.862305,10102.988281,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5765.331055,10101.755859,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5764.778809,10100.378906,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5764.867676,10098.921875,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5764.967285,10097.257813,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5739.569824,10106.458984,0]",357.108,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5739.0991211,10108.105469,0]",357.108,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PipeFence_02_s_8m_noLC_F","[5746.728027,10112.75293,0.146162]",252.063,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PipeFence_02_s_8m_noLC_F","[5749.310059,10104.78418,0.146162]",252.063,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5751.307617,10098.59668,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5751.746094,10097.168945,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_Bollard_01_F","[5752.187988,10095.674805,0]",359.065,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PipeFence_02_s_8m_noLC_F","[5749.387207,10118.71875,0.146162]",164.121,-100,0,0,[]] call _CreateLocalVehicle;
["Land_PipeFence_02_s_8m_noLC_F","[5757.0576172,10120.952148,0.146162]",164.121,-100,0,0,[]] call _CreateLocalVehicle;

// charbon
["Skyline_Alysia_Charbon_01_F","[11442.172852,6246.522949,-0.0765994]",0,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_02_F","[11462.469727,6249.619141,0]",0,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11449.34668,6254.630859,-0.0765994]",-39.7096,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11467.849609,6242.881836,-0.0765994]",-16.6667,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11440.62207,6224.0537109,-0.0765994]",-76.1995,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11433.947266,6254.797852,-0.0765994]",-76.1995,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11459.6875,6265.522949,-0.0765994]",-34.4697,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11465.71875,6259.858887,-0.474748]",-34.4697,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11444.424805,6230.143066,-0.474748]",-1.0101,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11455.74707,6242.581543,-0.474748]",-54.4823,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11466.521484,6240.608887,-0.474748]",-23.7374,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11467.976563,6241.623535,-0.228115]",-54.6086,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11457.108398,6242.692871,-0.255892]",-34.9116,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11448.141602,6253.349609,-0.611953]",0.378785,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11452.172852,6255.0771484,-0.4133]",-21.0859,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11453.482422,6254.328125,-0.4133]",37.7525,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_01_F","[11445.239258,6228.474121,-0.4133]",37.7525,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_02_F","[11448.486328,6243.385742,-0.0707071]",0,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_02_F","[11457.196289,6236.242188,-0.187711]",40.9091,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_02_F","[11458.34375,6236.457031,-0.187711]",-11.3636,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_02_F","[11470.176758,6240.527832,-0.187711]",-11.3636,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_02_F","[11467.650391,6237.777344,-0.244108]",12.4369,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_02_F","[11460.432617,6262.483887,-0.29798]",12.4369,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_02_F","[11450.772461,6253.0600586,-0.383838]",12.4369,-100,0,0,[]] call _CreateLocalVehicle;
["Skyline_Alysia_Charbon_02_F","[11456.827148,6250.13623,-0.383838]",30.745,-100,0,0,[]] call _CreateLocalVehicle;
