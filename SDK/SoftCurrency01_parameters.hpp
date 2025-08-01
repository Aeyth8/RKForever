#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoftCurrency01

#include "Basic.hpp"


namespace SDK::Params
{

// Function SoftCurrency01.SoftCurrency01_C.SetCurrency
// 0x0028 (0x0028 - 0x0000)
struct SoftCurrency01_C_SetCurrency final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Animate;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(SoftCurrency01_C_SetCurrency) == 0x000008, "Wrong alignment on SoftCurrency01_C_SetCurrency");
static_assert(sizeof(SoftCurrency01_C_SetCurrency) == 0x000028, "Wrong size on SoftCurrency01_C_SetCurrency");
static_assert(offsetof(SoftCurrency01_C_SetCurrency, Amount) == 0x000000, "Member 'SoftCurrency01_C_SetCurrency::Amount' has a wrong offset!");
static_assert(offsetof(SoftCurrency01_C_SetCurrency, Animate) == 0x000004, "Member 'SoftCurrency01_C_SetCurrency::Animate' has a wrong offset!");
static_assert(offsetof(SoftCurrency01_C_SetCurrency, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SoftCurrency01_C_SetCurrency::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftCurrency01_C_SetCurrency, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'SoftCurrency01_C_SetCurrency::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

