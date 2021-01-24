class Cfg_Server {

	/* PASSWORDS */
	rcon_password="HXQGBBEWpJ";
	TFR_password="lOyXrlZLeo";

	/* TIME MULTIPLIERS */
	TimeMultiplier_day=5;
	TimeMultiplier_night=20;

	starting_time[]={
		2020,// year
		5,// month
		30,// day
		12,// hour
		0// minute
	};

	serverMods[]={// Local server modsCfgPatches
		"TanoaServer",
		"extDB3",
		"obfusqf",
		"ObfuSQF"
	};

	/* SHUTDOWN */
	rebootHours[]={// Local Time (hours)
		2,
		8,
		14,
		20
	};

	class dynamic_markers
	{
		champs[]=
		{
			{7380.81,7432.29,0},
			{6054.06,7829.81,0},
			{6943.77,11259.7,0},
			{7834.57,10394.7,0},
			{13558.8,8292.46,0},
			{11017.5,6576.26,0},
			{6931.67,7007.87,0},
			{6379,8571.06,0},
			{7344.89,11123.1,0},
			{11009.5,10214.2,0},
			{7700.77,7424.69,0},
			{9255.3,7486.54,0},
			{13414.1,11477.9,0},
			{14556.8,9714.88,0},
			{13560,8299.24,0},
			{9952.52,6451.38,0},
			{8319.49,7970.51,0},
			{8674.5,7834.73,0},
			{5488.21,9390.81,0},
			{7553.41,12590.1,0}
		};

		stands_general[]=
		{
			{5742.15,10971.7,0},
			{5763.77,12323.3,0},
			{5715.03,12592.5,0},
			{5967.32,11641.8,0},
			{6684.36,12463,0},
			{7425.79,12938.7,0},
			{9044.46,13309.6,0},
			{9485.14,13519.5,0},
			{9744.49,13481.7,0},
			{9420.26,12971.8,0},
			{10175.7,13360.6,0},
			{10917.9,13258.1,0},
			{11759.7,12626.6,0},
			{11974.8,12496.7,0},
			{12350.8,12397,0},
			{13225.4,11166.1,0},
			{13779.4,10932.3,0},
			{14477,11254.2,0},
			{13352.1,10024.5,0},
			{13784.3,10035.4,0},
			{14006,8284.44,0},
			{11750.1,8612.14,0},
			{13812.3,8506.2,0},
			{11859.3,7692.64,0},
			{10627.4,6228.23,0},
			{9795.67,7742.9,0},
			{7609.26,6864.62,0},
			{8029.7,7172.68,0},
			{8623.38,7161.98,0},
			{8917.68,8501.74,0},
			{6833.69,8795.84,0},
			{5801.23,8919.5,0},
			{6678.17,7848.37,0},
			{5606.47,8075.49,0},
			{8944.16,3644.5,0},
			{11937.6,3997.01,0}
		};

		archeologie[]=
		{
			{11178.2,9836.45,0},
			{5840.76,9870.52,0},
			{5249.51,8609.89,0},
			{12694.7,7153.97,0},
			{14369.7,9033.9,0},
			{12694.7,7153.97,0},
			{10178.3,13362.6,0},
			{6468.83,12664.5,0}
		};

		pillage[]=
		{
			{10480.6,14137.3,3.09222},
			{4844.91,12906.9,3.81049},
			{4085.35,9996.95,1.98737}
		};

		recif[]=
		{
			{6011.56,14544.8,0.801867},
			{8919.8,14746.1,0.0110648},
			{8910.72,14907.3,0.257658},
			{9035.17,14719,1.21929}
		};

		rebels[]=
		{
			{3674.91,9287.8,0},3],
			{3677.35,9364.66,0},
			{2716.09,8956.71,0},
			{3130.34,9281.08,0},
			{844.55,11190,0},
			{3756.61,14432.8,0},
			{5447.69,14674.1,0},
			{7861.69,14821,0},
			{7510.8,14902.6,0},
			{10610.7,14570.6,0},
			{11267.5,14500.7,0},
			{13402.3,5194.41,0},
			{12528.8,14191.2,0}
		};

		launder[]=
		{
			{7198.28,8147.66,0},
			{6020.66,7355.21,0},
			{5755.59,11079.9,0},
			{5704.21,10043.8,0},
			{8855.62,10341.1,0},
			{11003.3,9791.48,0},
			{9586.25,13430.6,0},
			{7548.87,8900.47,0},
			{5962.8,10348.6,0},
			{5847.93,10170.1,0},
			{5745.41,10414.1,0},
			{5952.73,10220.6,}
		};

		mushroom[]=
		{
			{11532,8111.13,0.000915527},
			{11736.7,9534.02,0.00189209},
			{11869.6,12222,0.00204468},
			{8203.89,11222.9,0.00230408},
			{7194.07,9576.26,0.00141907},
			{6161.28,11834,0.00146484},
			{12397.3,11271.8,0.00138855},
			{12658.9,8022.53,0.00151443},
			{9935.83,6647.4,0.00256348},
			{8880.83,13143.9,0.00100708}
		};

		volcano[]=
		{
			{9728.01,12259.4,0.00158691},
			{9811.04,12004.8,0.00170898},
			{9993.24,11914,-0.00012207},
			{10052.7,12086.1,0.000701904},
			{9998.17,12238.3,0.000762939},
			{10067.2,12215.4,0.00189209},
			{9914.01,12107.2,0.00152588},
			{9963.53,12267.5,0.0012207},
			{9912.25,11994.9,0.00149536},
			{10143.9,12010.2,0.00164795}
		};
	};

	class mission
	{
		class east_1
		{
			positions[]=
			{
				{{6820.75,7323.23,0.00143886}, 128.956},
				{{6845.7,7262.99,0.00144053}, 34.6326},
				{{13298.2,11995.7,0.00143886}, 114.663},
				{{14061.8,12207,0.00143886}, 147.692},
				{{11807.9,13083.5,0.00143909}, 102.569},
				{{5271.75,10027.1,0.00143886}, 359.438}
			};
		};
		class west_1: east_1 {};
		class guer_1: east_1 {};

		class reb_1
		{
			positions[]=
			{
				{{2520.13,9279.53,0.00119781},356.961},
				{{3645.99,9539.34,0.00161362},46.6127},
				{{3578.95,9084.37,0.00143051},32.6012},
				{{4037.02,9090.67,0.00135231},45.3719},
				{{5799.14,12992.6,0.0014143},282.974},
				{{5880.95,13075.9,0.00153637},62.874},
				{{5304.57,14480.5,0.00149012},129.926},
				{{5529.74,14535.8,0.00167322},126.317},
				{{7791.72,14825.3,0.00128937},82.0768},
				{{8093.14,14819.5,-0.204538},244.784},
				{{7948.93,14940.3,0.00137052},351.922},
				{{10529.7,14602.9,0.0017122},255.219},
				{{11243.6,14533.2,0.00168276},272.314},
				{{11522.1,14356.2,0.00135088},66.8374},
				{{12864.6,5448.41,0.00158596},263.807},
				{{13409.9,5191.95,0.00161362},266.665},
				{{8870.03,1133.24,0.000878334},358.017},
				{{8363.41,1284.3,0.00184631},232.859},
				{{8301.42,1130.7,0.00193357},131.691},
				{{5620.4,1989.59,0.00172424},314.369},
				{{5401.67,1874.93,0.00186729},62.4257},
				{{4719.29,1404.99,0.0016613},123.903},
				{{4813.72,1425.16,0.00150299},122.81},
				{{2267.8,1653.96,0.00150347},78.1164},
				{{1597.93,920.289,0.00141573},312.436},
				{{1337.3,2619.58,0.00151062},329.16},
				{{897.39,11294.1,0.00147057},80.7956},
				{{2809.96,8698.59,0.00162005},233.432},
				{{2604.86,8177.57,0.00146079},236.737},
				{{4623.21,7967.73,0.00141668},216.518},
				{{4601.52,7476.1,0.00143886},312.144},
				{{6537.74,6274.67,0.00127029},106.486}
			};
		};
		class reb_2: reb_1 {};
	};
};
