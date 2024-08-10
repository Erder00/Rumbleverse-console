﻿#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BTD_ChooseWeaponAttack.BTD_ChooseWeaponAttack_C
	 * Size -> 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
	 */
	class UBTD_ChooseWeaponAttack_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              ChosenAttackRangeKey;                                    // 0x00A0(0x0028) Edit, BlueprintVisible

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
