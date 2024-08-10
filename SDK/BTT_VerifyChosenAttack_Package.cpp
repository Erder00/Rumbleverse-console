﻿/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_VerifyChosenAttack.BTT_VerifyChosenAttack_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_VerifyChosenAttack_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_VerifyChosenAttack.BTT_VerifyChosenAttack_C.ReceiveExecuteAI");
		
		UBTT_VerifyChosenAttack_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_VerifyChosenAttack.BTT_VerifyChosenAttack_C.ExecuteUbergraph_BTT_VerifyChosenAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_VerifyChosenAttack_C::ExecuteUbergraph_BTT_VerifyChosenAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_VerifyChosenAttack.BTT_VerifyChosenAttack_C.ExecuteUbergraph_BTT_VerifyChosenAttack");
		
		UBTT_VerifyChosenAttack_C_ExecuteUbergraph_BTT_VerifyChosenAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_VerifyChosenAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_VerifyChosenAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_VerifyChosenAttack.BTT_VerifyChosenAttack_C");
		return ptr;
	}

}


