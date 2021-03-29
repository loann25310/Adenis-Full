class RscDivideIllegalMoney
{
	idd = 13650;
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.435;
			y = safeZoneY + safeZoneH * 0.41666667;
			w = safeZoneW * 0.158125;
			h = safeZoneH * 0.14444445;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.6};
			colorText[] = {0.3529,0.349,0.8392,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class DivideSlider
		{
			type = 43;
			idc = 13652;
			x = safeZoneX + safeZoneW * 0.445;
			y = safeZoneY + safeZoneH * 0.52111112;
			w = safeZoneW * 0.134375;
			h = safeZoneH * 0.02555556;
			style = 1024;
			arrowEmpty = "\A3\ui_f\data\GUI\Cfg\Slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\Cfg\Slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\GUI\Cfg\Slider\border_ca.paa";
			color[] = {1,1,1,1};
			colorActive[] = {1,1,1,1};
			thumb = "\A3\ui_f\data\GUI\Cfg\Slider\thumb_ca.paa";
			
		};
		class TextInfo
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.440625;
			y = safeZoneY + safeZoneH * 0.43111112;
			w = safeZoneW * 0.14625;
			h = safeZoneH * 0.04;
			style = 0;
			text = "Entrez la somme à poser au sol :";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class DivideEdit
		{
			type = 2;
			idc = 13651;
			x = safeZoneX + safeZoneW * 0.445;
			y = safeZoneY + safeZoneH * 0.48111112;
			w = safeZoneW * 0.12375;
			h = safeZoneH * 0.03;
			style = 0+1;
			text = "0";
			autocomplete = "";
			colorBackground[] = {0,0,0,0.6};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {0.6,0.6,0.6,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			maxChars = 10;
			
		};
		class DivideDollard
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.573125;
			y = safeZoneY + safeZoneH * 0.48666667;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.02;
			style = 0;
			text = "$";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class OkBtn
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.50875;
			y = safeZoneY + safeZoneH * 0.56888889;
			w = safeZoneW * 0.0843;
			h = safeZoneH * 0.02333334;
			style = 0+2;
			text = "Diviser";
			borderSize = 0;
			colorBackground[] = {0,0,0,0.6};
			colorBackgroundActive[] = {0.2,0.2,0.2,0.6};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.001;
			offsetPressedY = 0.001;
			offsetX = 0.001;
			offsetY = 0.001;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[] spawn AlysiaClient_fnc_item_illegal_money;";
			
		};
		class CancelBtn
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.435;
			y = safeZoneY + safeZoneH * 0.56888889;
			w = safeZoneW * 0.066875;
			h = safeZoneH * 0.02333334;
			style = 0+2;
			text = "Annuler";
			borderSize = 0;
			colorBackground[] = {0,0,0,0.6};
			colorBackgroundActive[] = {0.2,0.2,0.2,0.6};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.001;
			offsetPressedY = 0.001;
			offsetX = 0.001;
			offsetY = 0.001;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "closeDialog 0;";
			
		};
		
	};
	
};
