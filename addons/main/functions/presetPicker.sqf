params ["_player", "_preset"];

/*
	1 = util, 2 = defense, 3 = watercross
*/
Module = objNull;
_spawnPos = [0,0,0];
_moduleGroup = createGroup sideLogic;

switch (_preset) do {
	case 1: {
		[independent, 0, [
			["Land_LampShabby_F", 15],
			["Land_Plank_01_4m_F", 5],
			["Land_PierLadder_F", 15],
			["Land_Obstacle_Ramp_F", 10],
			["Land_PlasticCase_01_small_gray_F", 10],
			["Land_PlasticCase_01_medium_gray_F", 15]
		]] call ace_fortify_fnc_registerObjects;
	};
	case 2: {
		[independent, 0, [
			["Land_SlumWall_01_s_2m_F", 5],
			["Land_SlumWall_01_s_4m_F", 10],
			["Land_Barricade_01_10m_F", 30],
			["Land_Mound01_8m_F", 30],
			["Land_Razorwire_F", 15]
		]] call ace_fortify_fnc_registerObjects;
	};
	case 3: {
		[independent, 0, [
			["Land_PierWooden_03_F", 5],
			["Land_PierWooden_02_barrel_F", 5],
			["Land_PierWooden_02_ladder_F", 5],
			["Land_PierWooden_02_16m_F", 5],
			["Land_PierWooden_01_16m_F", 5],
			["Land_nav_pier_m_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};
};
