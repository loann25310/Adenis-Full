class RscDisplayCabinPeinture
{
	idd = 15600;
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.55;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {0.4196,0.2314,0.4196,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		
	};
	class Controls
	{
		class Title
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.24444445;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.03;
			style = 2;
			text = "CABINE DE PEINTURE";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
		};
		class ColorsList : RscListBox
		{
			idc = 15601;
			x = safeZoneX + safeZoneW * 0.31375;
			y = safeZoneY + safeZoneH * 0.31444445;
			w = safeZoneW * 0.1225;
			h = safeZoneH * 0.42555556;
			onLBSelChanged="[] spawn AlysiaClient_fnc_paintCabine_update;";
		};
		class ValidBtn : RscButton
		{
			type = 1;
			idc = 15603;
			x = safeZoneX + safeZoneW * 0.50375;
			y = safeZoneY + safeZoneH * 0.78444445;
			w = safeZoneW * 0.2025;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "Repeindre";
			borderSize = 0;
			colorBackground[] = {0,0,0,0.7};
			colorBackgroundActive[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0,0,0,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.002;
			offsetPressedY = 0.002;
			offsetX = 0.003;
			offsetY = 0.003;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[] spawn AlysiaClient_fnc_paintCabine_paint;";
		};
		class CancelBtn : ValidBtn
		{
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.78444445;
			w = safeZoneW * 0.2025;
			h = safeZoneH * 0.05;
			text = "Annuler";
			onButtonClick = "closeDialog 0;";
		};
		class InfoText : RscStructuredText
		{
			idc = 15602;
			x = safeZoneX + safeZoneW * 0.45375;
			y = safeZoneY + safeZoneH * 0.32444445;
			w = safeZoneW * 0.2325;
			h = safeZoneH * 0.35;
		};
		class AdenisLogo
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.65375;
			y = safeZoneY + safeZoneH * 0.68444445;
			w = safeZoneW * 0.0425;
			h = safeZoneH * 0.07;
			style = 48;
			text = "\Adenis_Textures\adenis.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		
	};
	
};
