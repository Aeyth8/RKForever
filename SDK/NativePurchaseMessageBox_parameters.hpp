#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NativePurchaseMessageBox

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function NativePurchaseMessageBox.NativePurchaseMessageBox_C.ExecuteUbergraph_NativePurchaseMessageBox
// 0x01A8 (0x01A8 - 0x0000)
struct NativePurchaseMessageBox_C_ExecuteUbergraph_NativePurchaseMessageBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarinerMessageBoxNativePurchaseData   CallFunc_GetData_ReturnValue;                      // 0x0008(0x01A0)(ConstParm, ContainsInstancedReference)
};
static_assert(alignof(NativePurchaseMessageBox_C_ExecuteUbergraph_NativePurchaseMessageBox) == 0x000008, "Wrong alignment on NativePurchaseMessageBox_C_ExecuteUbergraph_NativePurchaseMessageBox");
static_assert(sizeof(NativePurchaseMessageBox_C_ExecuteUbergraph_NativePurchaseMessageBox) == 0x0001A8, "Wrong size on NativePurchaseMessageBox_C_ExecuteUbergraph_NativePurchaseMessageBox");
static_assert(offsetof(NativePurchaseMessageBox_C_ExecuteUbergraph_NativePurchaseMessageBox, EntryPoint) == 0x000000, "Member 'NativePurchaseMessageBox_C_ExecuteUbergraph_NativePurchaseMessageBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(NativePurchaseMessageBox_C_ExecuteUbergraph_NativePurchaseMessageBox, CallFunc_GetData_ReturnValue) == 0x000008, "Member 'NativePurchaseMessageBox_C_ExecuteUbergraph_NativePurchaseMessageBox::CallFunc_GetData_ReturnValue' has a wrong offset!");

}

