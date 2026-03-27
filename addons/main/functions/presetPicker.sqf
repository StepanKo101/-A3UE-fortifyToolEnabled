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

	case 2: { // vanilla defence
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

	case 4: { // Outdoor stuff
		[independent, 0, [
			["Land_CampingChair_V2_F", 5],
			["Land_WoodenTable_large_F", 5],
			["Land_ChairPlastic_F", 5],
			["Land_CampingChair_V1_F", 5],
			["Land_Sunshade_F", 5],
			["Land_Sunshade_01_F", 5],
			["Land_Bench_01_F", 5],
			["Land_Bench_05_F", 5],
			["Land_GarbageBin_03_F", 5],
			["Land_Sleeping_bag_F", 5],
			["Land_Sleeping_bag_brown_F", 5],
			["Land_Sleeping_bag_blue_F", 5],
			["Land_WoodPile_02_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 5: { // Indoor stuff
		[independent, 0, [
			["Land_ArmChair_01_F", 5],
			["Land_TableSmall_01_F", 5],
			["Land_TableBig_01_F", 5],
			["Land_Sofa_01_F", 5],
			["Land_ChairWood_F", 5],
			["Land_OfficeCabinet_02_F", 5],
			["Land_OfficeChair_01_F", 5],
			["OfficeTable_01_old_F", 5],
			["Land_ShelvesWooden_F", 5],
			["Land_ShelvesMetal_F", 5],
			["Land_WaterCooler_01_old_F", 5],
			["Land_WheelieBin_01_F", 5],
			["Land_Bucket_F", 5],
			["Land_FireExtinguisher_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 6: { // Construction site 1
		[independent, 0, [
			["Land_WoodenBox_F", 5],
			["Land_WheelCart_F", 5],
			["Land_Pallet_F", 5],
			["Land_WorkStand_F", 5],
			["Land_CinderBlock_01_F", 5],
			["Land_WoodenBox_02_F", 5],
			["Land_FieldToilet_F", 5],
			["Land_Pallets_F", 5],
			["Land_CinderBlocks_01_F", 5],
			["Land_Pallets_stack_F", 5],
			["Land_PaperBox_01_small_open_brown_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 7: { // Construction site 2
		[independent, 0, [
			["Land_PaperBox_01_small_closed_brown_F", 5],
			["Land_PaperBox_01_small_stacked_F", 5],
			["Land_FoodSacks_01_large_brown_F", 5],
			["Land_WaterBottle_01_pack_F", 5],
			["Land_CratesWooden_F", 5],
			["Land_Sacks_heap_F", 5],
			["Land_Basket_F", 5],
			["Land_BarrelWater_F", 5],
			["Land_WoodenCrate_01_stack_x3_F", 5],
			["Land_Crowbar_01_F", 5],
			["Land_Saw_F", 5],
			["Land_Wrench_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 8: { // Food
		[independent, 0, [
			["Land_BakedBeans_F", 5],
			["Land_Can_V2_F", 5],
			["Land_Can_V3_F", 5],
			["Land_Can_V1_F", 5],
			["Land_CerealsBox_F", 5],
			["Land_Ketchup_01_F", 5],
			["Land_Mustard_01_F", 5],
			["Land_Orange_01_F", 5],
			["Land_BottlePlastic_V1_F", 5],
			["Land_Tableware_01_cup_F", 5],
			["Land_PowderedMilk_F", 5],
			["Land_TacticalBacon_F", 5],
			["Land_Pumpkin_01_F", 5],
			["Land_RiceBox_F", 5],
			["Land_BottlePlastic_V2_F", 5],
			["Land_Tableware_01_fork_F", 5],
			["Land_Tableware_01_knife_F", 5],
			["Land_Tableware_01_spoon_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 9: { // Sport
		[independent, 0, [
			["Land_GymBench_01_F", 5],
			["Land_GymRack_03_F", 5],
			["Land_GymRack_01_F", 5],
			["Land_GymRack_02_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 10: { // Misc small
		[independent, 0, [
			["EauDeCombat_01_box_F", 5],
			["Sponge_01_dry_F", 5],
			["Land_CarBattery_02_F", 5],
			["Land_HumanSkull_F", 5],
			["Land_DisinfectantSpray_F", 5],
			["Land_VitaminBottle_F", 5],
			["Newspaper_01_F", 5],
			["Land_PenBlack_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 11: { // Electronics 1 (MODERN)
		[independent, 0, [
			["Land_FlatTV_01_F", 5],
			["Land_FMradio_F", 5],
			["Land_GamingSet_01_console_F", 5],
			["Land_GamingSet_01_controller_F", 5],
			["Land_HandyCam_F", 5],
			["Land_Laptop_unfolded_F", 5],
			["Land_Laptop_Intel_01_F", 5],
			["Land_Microwave_01_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 12: { // Electronics 2 (MODERN)
		[independent, 0, [
			["Land_MobilePhone_smart_F", 5],
			["Land_MobilePhone_old_F", 5],
			["Land_PCSet_01_case_F", 5],
			["Land_PCSet_01_keyboard_F", 5],
			["Land_PCSet_01_mousepad_IDAP_F", 5],
			["Land_PCSet_01_mouse_F", 5],
			["Land_PCSet_01_screen_F", 5],
			["Land_PortableSpeakers_01_F", 5],
			["Land_Printer_01_F", 5],
			["Land_Projector_01_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 13: { // Misc big (MODERN)
		[independent, 0, [
			["Land_AirConditioner_01_F", 5],
			["Land_Portable_generator_F", 5],
			["Fridge_01_closed_F", 5],
			["Land_SolarPanel_04_black_F", 5],
			["Target_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 14: { // CUP Planters
		[independent, 0, [
			["Land_ConcreteTreePlanter_01_F", 5],
			["Land_ConcreteTreePlanter_02_F", 5],
			["Land_TreeBin_F", 5],
			["Land_TreeGrate_01_F", 5],
			["Land_Pot_01_F", 5],
			["Land_FlowerPot_01_Flower_F", 5],
			["Land_FlowerPot_01_F", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 15: { // CUP Bushes
		[independent, 0, [
			["CUP_DD_bush02", 5],
			["CUP_b_craet1_summer", 5],
			["CUP_b_PinusM1s_EP1", 5],
			["CUP_b_PistaciaL1s_EP1", 5],
			["CUP_Krovi_bigest", 5],
			["CUP_b_sambucus", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 16: { // CUP Small plants
		[independent, 0, [
			["CUP_clutter_mochomurka", 5],
			["CUP_c_papaver_07_EP1", 5],
			["CUP_c_Plants_Thistle_desert_EP1", 5],
			["CUP_p_Helianthus_summer", 5],
			["CUP_ker_trs_travy5", 5],
			["CUP_c_weed2_EP1", 5],
			["CUP_c_Plants_Yellow_EP1", 5]
		]] call ace_fortify_fnc_registerObjects;
	};

	case 17: { // CUP Trees
		[independent, 0, [
			["CUP_t_malus1s", 5],
			["CUP_t_malus1s_summer", 5],
			["CUP_str_buk", 5],
			["CUP_str_briza", 5],
			["CUP_les_fikovnik2", 5],
			["CUP_str_habr", 5],
			["CUP_t_JuniperusC2s_EP1", 5],
			["CUP_t_picea1s", 5],
			["CUP_les_singlestrom", 5]
		]] call ace_fortify_fnc_registerObjects;
	};
};
