class RscPaintBox
{
	idd = 39500;
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 39501;
			x = safeZoneX + safeZoneW * 0.01875;
			y = safeZoneY + safeZoneH * 0.40555556;
			w = safeZoneW * 0.2125;
			h = safeZoneH * 0.52;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {0.8706,0.6078,0.1294,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		
	};
	class Controls
	{
		class Title
		{
			type = 0;
			idc = 39502;
			x = safeZoneX + safeZoneW * 0.02375;
			y = safeZoneY + safeZoneH * 0.40444445;
			w = safeZoneW * 0.2025;
			h = safeZoneH * 0.08;
			style = 2;
			text = "CABINE DE PEINTURE";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.6);
		};
		class TexturesListe : RscListbox
		{
			idc = 39503;
			x = safeZoneX + safeZoneW * 0.02375;
			y = safeZoneY + safeZoneH * 0.47444445;
			w = safeZoneW * 0.2025;
			h = safeZoneH * 0.43555556;
		};
		class ValidBtn : RscButtonMenu
		{
			idc = 39504;
			x = safeZoneX + safeZoneW * 0.125;
			y = safeZoneY + safeZoneH * 0.93444445;
			w = safeZoneW * 0.105;
			h = safeZoneH * 0.03;
			text = "Peindre";
		};
		class CancelBtn : RscButtonMenu
		{
			idc = 39505;
			x = safeZoneX + safeZoneW * 0.01875;
			y = safeZoneY + safeZoneH * 0.93444445;
			w = safeZoneW * 0.10125;
			h = safeZoneH * 0.03;
			text = "Annuler";
		};
		
	};
	
};
