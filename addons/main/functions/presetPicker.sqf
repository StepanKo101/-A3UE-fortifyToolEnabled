/*
Define new presets here. Just copy one and change the classnames and the price.
To add self-interaction action go to actions.cpp
*/

params ["_player", "_preset"];

/*
	1 = util, 2 = defense, 3 = watercross

Module = objNull;
_spawnPos = [0,0,0];
_moduleGroup = createGroup sideLogic;
*/

switch (_preset) do {
	case 1: { // vanilla utility
		[independent, 0, [
			["Land_LampShabby_F", 15],
			["Land_Scaffolding_New_F", 30],
			["Land_Plank_01_4m_F", 5],
			["Land_WoodenBox_02_F", 5],
			["Land_Plank_01_8m_F", 10],
			["Land_PierLadder_F", 15],
			["ACE_TacticalLadder_Pack", 25],
			["Land_Obstacle_Ramp_F", 10],
			["Land_PlasticCase_01_small_gray_F", 10],
			["Land_PlasticCase_01_medium_gray_F", 15],
			["Item_ToolKit", 15]
		]] call ace_fortify_fnc_registerObjects;
	};
	case 2: { // vanilla defense
		[independent, 0, [
			["Land_SlumWall_01_s_2m_F", 5],
			["Land_SlumWall_01_s_4m_F", 10],
			["Land_Barricade_01_4m_F", 10],
			["Land_Barricade_01_10m_F", 30],
			["Land_Mound01_8m_F", 30],
			["Land_Razorwire_F", 15],
			["Land_BagFence_Round_F", 30],
			["Land_DeerStand_01_F", 50],
			["Land_DeerStand_02_F", 50]
		]] call ace_fortify_fnc_registerObjects;
	};
	case 3: { // CUP utility
		[independent, 0, [
			["Land_LampShabby_F", 15],
			["Land_Scaffolding_New_F", 30],
			["Land_Leseni4x", 45],
			["Land_Plank_01_4m_F", 5],
			["Land_WoodenBox_02_F", 5],
			["Land_Plank_01_8m_F", 10],
			["Land_ladder_half", 15],
			["Land_ladderEP1", 25],
			["ACE_TacticalLadder_Pack", 25],
			["Land_Obstacle_Ramp_F", 10],
			["Land_PlasticCase_01_small_gray_F", 10],
			["Land_PlasticCase_01_medium_gray_F", 15],
			["Item_ToolKit", 15]
		]] call ace_fortify_fnc_registerObjects;
	};
};
