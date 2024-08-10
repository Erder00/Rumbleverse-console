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
	 * 		Name   -> Function BP_WeaponBreak_ResMailbox_Top.BP_WeaponBreak_ResMailbox_Top_C.OnRemovedFromPool
	 * 		Flags  -> ()
	 */
	void ABP_WeaponBreak_ResMailbox_Top_C::OnRemovedFromPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponBreak_ResMailbox_Top.BP_WeaponBreak_ResMailbox_Top_C.OnRemovedFromPool");
		
		ABP_WeaponBreak_ResMailbox_Top_C_OnRemovedFromPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponBreak_ResMailbox_Top.BP_WeaponBreak_ResMailbox_Top_C.ExecuteUbergraph_BP_WeaponBreak_ResMailbox_Top
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WeaponBreak_ResMailbox_Top_C::ExecuteUbergraph_BP_WeaponBreak_ResMailbox_Top(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponBreak_ResMailbox_Top.BP_WeaponBreak_ResMailbox_Top_C.ExecuteUbergraph_BP_WeaponBreak_ResMailbox_Top");
		
		ABP_WeaponBreak_ResMailbox_Top_C_ExecuteUbergraph_BP_WeaponBreak_ResMailbox_Top_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WeaponBreak_ResMailbox_Top_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WeaponBreak_ResMailbox_Top_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBreak_ResMailbox_Top.BP_WeaponBreak_ResMailbox_Top_C");
		return ptr;
	}

}


