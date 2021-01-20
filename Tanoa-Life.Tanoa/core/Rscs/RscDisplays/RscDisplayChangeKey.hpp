class RscDisplayChangeKey
{
	idd = 16300;
	
	class ControlsBackground
	{
		class BACKGROUND
		{
			type = 0;
			idc = 16301;
			x = safeZoneX + safeZoneW * 0.38183594;
			y = safeZoneY + safeZoneH * 0.22569445;
			w = safeZoneW * 0.23632813;
			h = safeZoneH * 0.48784723;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.6};
			colorText[] = {0.8471,0.4,0.2039,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class TITLE_HEADER
		{
			type = 0;
			idc = 16302;
			x = safeZoneX + safeZoneW * 0.39160157;
			y = safeZoneY + safeZoneH * 0.25173612;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.04513889;
			style = 2;
			text = "TRANSFERER VOS CLEFS";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			
		};
		class VEHICLE_HEADER
		{
			type = 5;
			idc = 16303;
			x = safeZoneX + safeZoneW * 0.39160157;
			y = safeZoneY + safeZoneH * 0.3125;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.38715278;
			style = 16;
			colorBackground[] = {0,0,0,0.7};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.702,0.702,0.702,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class VALID_BTN
		{
			type = 1;
			idc = 16304;
			x = safeZoneX + safeZoneW * 0.50878907;
			y = safeZoneY + safeZoneH * 0.72048612;
			w = safeZoneW * 0.109375;
			h = safeZoneH * 0.04513889;
			style = 0+2;
			text = "Donner vos clefs";
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
			onButtonClick = "[] spawn AdenisClient_fnc_changeKey_action;";
			
		};
		class CANCEL_BTN
		{
			type = 1;
			idc = 16305;
			x = safeZoneX + safeZoneW * 0.38183594;
			y = safeZoneY + safeZoneH * 0.72048612;
			w = safeZoneW * 0.11914063;
			h = safeZoneH * 0.04513889;
			style = 0+2;
			text = "Annuler";
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
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "closeDialog 0;";
			
		};
		
	};
	
};
