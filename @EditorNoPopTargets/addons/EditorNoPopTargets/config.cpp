
class CfgPatches
{
	class RAY_NoPopTargets
	{
		name = "Editor No Pop Targets";
		author = "=7Cav=WO1.Raynor.D";
		url = "";
		requiredVersion = 1.60; 
		requiredAddons[] = {"A3_Structures_F_Training"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
    class TargetP_Inf_F;
    class TargetP_Inf_NoPop_F : TargetP_Inf_F {
        scope = 2;
        displayName = "Pop-Up Target 1 (NoPop)";
    };
    class TargetP_Inf_Acc1_F;
    class TargetP_Inf_Acc1_NoPop_F : TargetP_Inf_Acc1_F {
        scope = 2;
        displayName = "Pop-Up Target 1 (Zones) (NoPop)";
    };
    class TargetP_Inf_Acc2_F;
    class TargetP_Inf_Acc2_NoPop_F : TargetP_Inf_Acc2_F {
        scope = 2;
        displayName = "Pop-Up Target 1 (Accuracy) (NoPop)";
    };
    class Target_PopUp_Moving_F;
    class Target_PopUp_Moving_NoPop_F : Target_PopUp_Moving_F {
        scope = 2;
        displayName = "Moving Target 1 (Side) (NoPop)";
    };
    class Target_PopUp_Moving_Acc1_F;
    class Target_PopUp_Moving_Acc1_NoPop_F : Target_PopUp_Moving_Acc1_F {
        scope = 2;
        displayName = "Moving Target 1 (Side - Zones) (NoPop)";
    };
    class Target_PopUp_Moving_Acc2_F;
    class Target_PopUp_Moving_Acc2_NoPop_F : Target_PopUp_Moving_Acc2_F {
        scope = 2;
        displayName = "Moving Target 1 (Side - Accuracy) (NoPop)";
    };
    class Target_PopUp_Moving_90deg_F;
    class Target_PopUp_Moving_90deg_NoPop_F : Target_PopUp_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Target 1 (Front) (NoPop)";
    };
    class Target_PopUp_Moving_90deg_Acc1_F;
    class Target_PopUp_Moving_90deg_Acc1_NoPop_F : Target_PopUp_Moving_90deg_Acc1_F {
        scope = 2;
        displayName = "Moving Target 1 (Front - Zones) (NoPop)";
    };
    class Target_PopUp_Moving_90deg_Acc2_F;
    class Target_PopUp_Moving_90deg_Acc2_NoPop_F : Target_PopUp_Moving_90deg_Acc2_F {
        scope = 2;
        displayName = "Moving Target 1 (Front - Accuracy) (NoPop)";
    };
    class TargetP_Inf2_F;
    class TargetP_Inf2_NoPop_F : TargetP_Inf2_F {
        scope = 2;
        displayName = "Pop-Up Target 2 (NoPop)";
    };
    class TargetP_Inf2_Acc1_F;
    class TargetP_Inf2_Acc1_NoPop_F : TargetP_Inf2_Acc1_F {
        scope = 2;
        displayName = "Pop-Up Target 2 (Zones) (NoPop)";
    };
    class TargetP_Inf2_Acc2_F;
    class TargetP_Inf2_Acc2_NoPop_F : TargetP_Inf2_Acc2_F {
        scope = 2;
        displayName = "Pop-Up Target 2 (Accuracy) (NoPop)";
    };
    class Target_PopUp2_Moving_F;
    class Target_PopUp2_Moving_NoPop_F : Target_PopUp2_Moving_F {
        scope = 2;
        displayName = "Moving Target 2 (Side) (NoPop)";
    };
    class Target_PopUp2_Moving_Acc1_F;
    class Target_PopUp2_Moving_Acc1_NoPop_F : Target_PopUp2_Moving_Acc1_F {
        scope = 2;
        displayName = "Moving Target 2 (Side - Zones) (NoPop)";
    };
    class Target_PopUp2_Moving_Acc2_F;
    class Target_PopUp2_Moving_Acc2_NoPop_F : Target_PopUp2_Moving_Acc2_F {
        scope = 2;
        displayName = "Moving Target 2 (Side - Accuracy) (NoPop)";
    };
    class Target_PopUp2_Moving_90deg_F;
    class Target_PopUp2_Moving_90deg_NoPop_F : Target_PopUp2_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Target 2 (Front) (NoPop)";
    };
    class Target_PopUp2_Moving_90deg_Acc1_F;
    class Target_PopUp2_Moving_90deg_Acc1_NoPop_F : Target_PopUp2_Moving_90deg_Acc1_F {
        scope = 2;
        displayName = "Moving Target 2 (Front - Zones) (NoPop)";
    };
    class Target_PopUp2_Moving_90deg_Acc2_F;
    class Target_PopUp2_Moving_90deg_Acc2_NoPop_F : Target_PopUp2_Moving_90deg_Acc2_F {
        scope = 2;
        displayName = "Moving Target 2 (Front - Accuracy) (NoPop)";
    };
    class TargetP_Inf3_F;
    class TargetP_Inf3_NoPop_F : TargetP_Inf3_F {
        scope = 2;
        displayName = "Pop-Up Target 3 (NoPop)";
    };
    class TargetP_Inf3_Acc1_F;
    class TargetP_Inf3_Acc1_NoPop_F : TargetP_Inf3_Acc1_F {
        scope = 2;
        displayName = "Pop-Up Target 3 (Zones) (NoPop)";
    };
    class TargetP_Inf3_Acc2_F;
    class TargetP_Inf3_Acc2_NoPop_F : TargetP_Inf3_Acc2_F {
        scope = 2;
        displayName = "Pop-Up Target 3 (Accuracy) (NoPop)";
    };
    class Target_PopUp3_Moving_F;
    class Target_PopUp3_Moving_NoPop_F : Target_PopUp3_Moving_F {
        scope = 2;
        displayName = "Moving Target 3 (Side) (NoPop)";
    };
    class Target_PopUp3_Moving_Acc1_F;
    class Target_PopUp3_Moving_Acc1_NoPop_F : Target_PopUp3_Moving_Acc1_F {
        scope = 2;
        displayName = "Moving Target 3 (Side - Zones) (NoPop)";
    };
    class Target_PopUp3_Moving_Acc2_F;
    class Target_PopUp3_Moving_Acc2_NoPop_F : Target_PopUp3_Moving_Acc2_F {
        scope = 2;
        displayName = "Moving Target 3 (Side - Accuracy) (NoPop)";
    };
    class Target_PopUp3_Moving_90deg_F;
    class Target_PopUp3_Moving_90deg_NoPop_F : Target_PopUp3_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Target 3 (Front) (NoPop)";
    };
    class Target_PopUp3_Moving_90deg_Acc1_F;
    class Target_PopUp3_Moving_90deg_Acc1_NoPop_F : Target_PopUp3_Moving_90deg_Acc1_F {
        scope = 2;
        displayName = "Moving Target 3 (Front - Zones) (NoPop)";
    };
    class Target_PopUp3_Moving_90deg_Acc2_F;
    class Target_PopUp3_Moving_90deg_Acc2_NoPop_F : Target_PopUp3_Moving_90deg_Acc2_F {
        scope = 2;
        displayName = "Moving Target 3 (Front - Accuracy) (NoPop)";
    };
    class TargetP_Zom_F;
    class TargetP_Zom_NoPop_F : TargetP_Zom_F {
        scope = 2;
        displayName = "Pop-Up Zombie 1 (NoPop)";
    };
    class TargetP_Zom_Acc1_F;
    class TargetP_Zom_Acc1_NoPop_F : TargetP_Zom_Acc1_F {
        scope = 2;
        displayName = "Pop-Up Zombie 1 (Zones) (NoPop)";
    };
    class Zombie_PopUp_Moving_F;
    class Zombie_PopUp_Moving_NoPop_F : Zombie_PopUp_Moving_F {
        scope = 2;
        displayName = "Moving Zombie 1 (Side) (NoPop)";
    };
    class Zombie_PopUp_Moving_Acc1_F;
    class Zombie_PopUp_Moving_Acc1_NoPop_F : Zombie_PopUp_Moving_Acc1_F {
        scope = 2;
        displayName = "Moving Zombie 1 (Side - Zones) (NoPop)";
    };
    class Zombie_PopUp_Moving_90deg_F;
    class Zombie_PopUp_Moving_90deg_NoPop_F : Zombie_PopUp_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Zombie 1 (Front) (NoPop)";
    };
    class Zombie_PopUp_Moving_90deg_Acc1_F;
    class Zombie_PopUp_Moving_90deg_Acc1_NoPop_F : Zombie_PopUp_Moving_90deg_Acc1_F {
        scope = 2;
        displayName = "Moving Zombie 1 (Front - Zones) (NoPop)";
    };
    class TargetP_Civ_F;
    class TargetP_Civ_NoPop_F : TargetP_Civ_F {
        scope = 2;
        displayName = "Pop-Up Hostage 1 (NoPop)";
    };
    class Hostage_PopUp_Moving_F;
    class Hostage_PopUp_Moving_NoPop_F : Hostage_PopUp_Moving_F {
        scope = 2;
        displayName = "Moving Hostage 1 (Side) (NoPop)";
    };
    class Hostage_PopUp_Moving_90deg_F;
    class Hostage_PopUp_Moving_90deg_NoPop_F : Hostage_PopUp_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Hostage 1 (Front) (NoPop)";
    };
    class TargetP_Civ2_F;
    class TargetP_Civ2_NoPop_F : TargetP_Civ2_F {
        scope = 2;
        displayName = "Pop-Up Hostage 2 (NoPop)";
    };
    class Hostage_PopUp2_Moving_F;
    class Hostage_PopUp2_Moving_NoPop_F : Hostage_PopUp2_Moving_F {
        scope = 2;
        displayName = "Moving Hostage 2 (Side) (NoPop)";
    };
    class Hostage_PopUp2_Moving_90deg_F;
    class Hostage_PopUp2_Moving_90deg_NoPop_F : Hostage_PopUp2_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Hostage 2 (Front) (NoPop)";
    };
    class TargetP_Civ3_F;
    class TargetP_Civ3_NoPop_F : TargetP_Civ3_F {
        scope = 2;
        displayName = "Pop-Up Hostage 3 (NoPop)";
    };
    class Hostage_PopUp3_Moving_F;
    class Hostage_PopUp3_Moving_NoPop_F : Hostage_PopUp3_Moving_F {
        scope = 2;
        displayName = "Moving Hostage 3 (Side) (NoPop)";
    };
    class Hostage_PopUp3_Moving_90deg_F;
    class Hostage_PopUp3_Moving_90deg_NoPop_F : Hostage_PopUp3_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Hostage 3 (Front) (NoPop)";
    };
    class Land_Target_Oval_F;
    class Land_Target_Oval_NoPop_F : Land_Target_Oval_F {
        scope = 2;
        displayName = "Target - Oval (Ground) (NoPop)";
    };
    class Land_Target_Oval_Wall_Left_F;
    class Land_Target_Oval_Wall_Left_NoPop_F : Land_Target_Oval_Wall_Left_F {
        scope = 2;
        displayName = "Target - Oval (Wall, Left) (NoPop)";
    };
    class Land_Target_Oval_Wall_Right_F;
    class Land_Target_Oval_Wall_Right_NoPop_F : Land_Target_Oval_Wall_Right_F {
        scope = 2;
        displayName = "Target - Oval (Wall, Right) (NoPop)";
    };
    class Land_Target_Oval_Wall_Top_F;
    class Land_Target_Oval_Wall_Top_NoPop_F : Land_Target_Oval_Wall_Top_F {
        scope = 2;
        displayName = "Target - Oval (Wall, Top) (NoPop)";
    };
    class Land_Target_Oval_Wall_Bottom_F;
    class Land_Target_Oval_Wall_Bottom_NoPop_F : Land_Target_Oval_Wall_Bottom_F {
        scope = 2;
        displayName = "Target - Oval (Wall, Bottom) (NoPop)";
    };
    class Skeet_Clay_F;
    class Skeet_Clay_NoPop_F : Skeet_Clay_F {
        scope = 2;
        displayName = "Skeet Clay (NoPop)";
    };
    class Metal_Pole_Skeet_F;
    class Metal_Pole_Skeet_NoPop_F : Metal_Pole_Skeet_F {
        scope = 2;
        displayName = "Metal Pole (Skeet) (NoPop)";
    };
    class Land_Balloon_01_air_F;
    class Balloon_01_air_NoPop_F : Land_Balloon_01_air_F {
        scope = 2;
        displayName = "Balloon (Air) (NoPop)";
    };
    class Land_Balloon_01_water_F;
    class Balloon_01_water_NoPop_F : Land_Balloon_01_water_F {
        scope = 2;
        displayName = "Balloon (Water) (NoPop)";
    };
    class TargetP_Inf4_F;
    class TargetP_Inf4_NoPop_F : TargetP_Inf4_F {
        scope = 2;
        displayName = "Pop-Up Target 4 (NoPop)";
    };
    class TargetP_Inf4_Acc1_F;
    class TargetP_Inf4_Acc1_NoPop_F : TargetP_Inf4_Acc1_F {
        scope = 2;
        displayName = "Pop-Up Target 4 (Zones) (NoPop)";
    };
    class TargetP_Inf4_Acc2_F;
    class TargetP_Inf4_Acc2_NoPop_F : TargetP_Inf4_Acc2_F {
        scope = 2;
        displayName = "Pop-Up Target 4 (Accuracy) (NoPop)";
    };
    class Target_PopUp4_Moving_F;
    class Target_PopUp4_Moving_NoPop_F : Target_PopUp4_Moving_F {
        scope = 2;
        displayName = "Moving Target 4 (Side) (NoPop)";
    };
    class Target_PopUp4_Moving_Acc1_F;
    class Target_PopUp4_Moving_Acc1_NoPop_F : Target_PopUp4_Moving_Acc1_F {
        scope = 2;
        displayName = "Moving Target 4 (Side - Zones) (NoPop)";
    };
    class Target_PopUp4_Moving_Acc2_F;
    class Target_PopUp4_Moving_Acc2_NoPop_F : Target_PopUp4_Moving_Acc2_F {
        scope = 2;
        displayName = "Moving Target 4 (Side - Accuracy) (NoPop)";
    };
    class Target_PopUp4_Moving_90deg_F;
    class Target_PopUp4_Moving_90deg_NoPop_F : Target_PopUp4_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Target 4 (Front) (NoPop)";
    };
    class Target_PopUp4_Moving_90deg_Acc1_F;
    class Target_PopUp4_Moving_90deg_Acc1_NoPop_F : Target_PopUp4_Moving_90deg_Acc1_F {
        scope = 2;
        displayName = "Moving Target 4 (Front - Zones) (NoPop)";
    };
    class Target_PopUp4_Moving_90deg_Acc2_F;
    class Target_PopUp4_Moving_90deg_Acc2_NoPop_F : Target_PopUp4_Moving_90deg_Acc2_F {
        scope = 2;
        displayName = "Moving Target 4 (Front - Accuracy) (NoPop)";
    };
    class TargetP_HVT1_F;
    class TargetP_HVT1_NoPop_F : TargetP_HVT1_F {
        scope = 2;
        displayName = "Pop-Up Target 5 (NoPop)";
    };
    class Target_PopUp_HVT1_Moving_F;
    class Target_PopUp_HVT1_Moving_NoPop_F : Target_PopUp_HVT1_Moving_F {
        scope = 2;
        displayName = "Moving Target 5 (Side) (NoPop)";
    };
    class Target_PopUp_HVT1_Moving_90deg_F;
    class Target_PopUp_HVT1_Moving_90deg_NoPop_F : Target_PopUp_HVT1_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Target 5 (Front) (NoPop)";
    };
    class TargetP_HVT2_F;
    class TargetP_HVT2_NoPop_F : TargetP_HVT2_F {
        scope = 2;
        displayName = "Pop-Up Target 6 (NoPop)";
    };
    class Target_PopUp_HVT2_Moving_F;
    class Target_PopUp_HVT2_Moving_NoPop_F : Target_PopUp_HVT2_Moving_F {
        scope = 2;
        displayName = "Moving Target 6 (Side) (NoPop)";
    };
    class Target_PopUp_HVT2_Moving_90deg_F;
    class Target_PopUp_HVT2_Moving_90deg_NoPop_F : Target_PopUp_HVT2_Moving_90deg_F {
        scope = 2;
        displayName = "Moving Target 6 (Front) (NoPop)";
    };
    class Land_Target_Swivel_01_F;
    class Target_Swivel_01_NoPop_F : Land_Target_Swivel_01_F {
        scope = 2;
        displayName = "Swivel Target (NoPop)";
    };
    class Target_Swivel_01_ground_F;
    class Target_Swivel_01_ground_NoPop_F : Target_Swivel_01_ground_F {
        scope = 2;
        displayName = "Swivel Target (Ground) (NoPop)";
    };
    class Target_Swivel_01_left_F;
    class Target_Swivel_01_left_NoPop_F : Target_Swivel_01_left_F {
        scope = 2;
        displayName = "Swivel Target (Left) (NoPop)";
    };
    class Target_Swivel_01_right_F;
    class Target_Swivel_01_right_NoPop_F : Target_Swivel_01_right_F {
        scope = 2;
        displayName = "Swivel Target (Right) (NoPop)";
    };
    class Land_Orange_01_Base_F;
    class Land_Orange_01_NoPop_F : Land_Orange_01_Base_F {
        scope = 2;
        displayName = " (NoPop)";
    };
    class Land_Pumpkin_01_Base_F;
    class Land_Pumpkin_01_NoPop_F : Land_Pumpkin_01_Base_F {
        scope = 2;
        displayName = " (NoPop)";
    };
};