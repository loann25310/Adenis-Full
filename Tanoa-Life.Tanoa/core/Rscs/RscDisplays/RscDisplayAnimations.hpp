class RscDisplayAnimations
{
	idd = 35600;
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33375;
			y = safeZoneY + safeZoneH * 0.29444445;
			w = safeZoneW * 0.3625;
			h = safeZoneH * 0.46;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {0.349,0.3569,0.2471,1};
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
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.31444445;
			w = safeZoneW * 0.2525;
			h = safeZoneH * 0.04;
			style = 2;
			text = "MENU DES ANIMATIONS";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
			
		};
		class AnimList : RscListBox
		{
			idc = 35602;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.37444445;
			w = safeZoneW * 0.1925;
			h = safeZoneH * 0.36555556;
		};
		class Close : RscButtonMenu
		{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.55375;
			y = safeZoneY + safeZoneH * 0.43444445;
			w = safeZoneW * 0.1325;
			h = safeZoneH * 0.08;
			text = "Fermer";
			onButtonClick = "closeDialog 0;";
		};
		class Stop : RscButtonMenu
		{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.55375;
			y = safeZoneY + safeZoneH * 0.54444445;
			w = safeZoneW * 0.1325;
			h = safeZoneH * 0.08;
			text = "Stop";
			onButtonClick = "[player, ''] remoteExecCall ['switchMove', player]; [player, ''] remoteExecCall ['switchMove', -2];";
		};
		class Play : RscButtonMenu
		{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.55375;
			y = safeZoneY + safeZoneH * 0.65444445;
			w = safeZoneW * 0.1325;
			h = safeZoneH * 0.08;
			text = "Jouer";
			onButtonClick = "_control = (findDisplay 35600) displayCtrl 35602;_indice = (lbSelection _control) select 0;_anim = lbData [35602, _indice];[_anim] spawn AlysiaClient_fnc_animPlay;";
		};
		
	};
	
};
