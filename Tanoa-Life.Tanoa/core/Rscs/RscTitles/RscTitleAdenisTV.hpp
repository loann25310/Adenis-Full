class RscTitleAdenisTV
{
	idd = 19500;
	name="RscTitleAdenisTV";
	fadein=1;
	duration=20;
	fadeout=3;
	movingEnable=0;
	onLoad="uiNamespace setVariable ['RscTitleAdenisTV',(_this select 0)];";
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 19500;
			x = safeZoneX + safeZoneW * 0.02375;
			y = safeZoneY + safeZoneH * 0.01444445;
			w = safeZoneW * 0.7725;
			h = safeZoneH * 0.96;
			style = 48;
			text = "\Adenis_Textures\adenis_tv.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
	};
	class Controls
	{
		class slideText
		{
			type = 0;
			idc = 19501;
			x = safeZoneX + safeZoneW * 0.0975;
			y = safeZoneY + safeZoneH * 0.92222223;
			w = safeZoneW * 0.67125;
			h = safeZoneH * 0.04777778;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4);
		};
	};
};
