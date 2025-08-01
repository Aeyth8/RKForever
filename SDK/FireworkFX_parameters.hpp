#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FireworkFX

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function FireworkFX.FireworkFX_C.ExecuteUbergraph_FireworkFX
// 0x0048 (0x0048 - 0x0000)
struct FireworkFX_C_ExecuteUbergraph_FireworkFX final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FireworkFX_C_ExecuteUbergraph_FireworkFX) == 0x000008, "Wrong alignment on FireworkFX_C_ExecuteUbergraph_FireworkFX");
static_assert(sizeof(FireworkFX_C_ExecuteUbergraph_FireworkFX) == 0x000048, "Wrong size on FireworkFX_C_ExecuteUbergraph_FireworkFX");
static_assert(offsetof(FireworkFX_C_ExecuteUbergraph_FireworkFX, EntryPoint) == 0x000000, "Member 'FireworkFX_C_ExecuteUbergraph_FireworkFX::EntryPoint' has a wrong offset!");
static_assert(offsetof(FireworkFX_C_ExecuteUbergraph_FireworkFX, Temp_struct_Variable) == 0x000008, "Member 'FireworkFX_C_ExecuteUbergraph_FireworkFX::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(FireworkFX_C_ExecuteUbergraph_FireworkFX, Temp_delegate_Variable) == 0x000018, "Member 'FireworkFX_C_ExecuteUbergraph_FireworkFX::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(FireworkFX_C_ExecuteUbergraph_FireworkFX, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'FireworkFX_C_ExecuteUbergraph_FireworkFX::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireworkFX_C_ExecuteUbergraph_FireworkFX, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'FireworkFX_C_ExecuteUbergraph_FireworkFX::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireworkFX_C_ExecuteUbergraph_FireworkFX, CallFunc_PostEvent_ReturnValue) == 0x000038, "Member 'FireworkFX_C_ExecuteUbergraph_FireworkFX::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireworkFX_C_ExecuteUbergraph_FireworkFX, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'FireworkFX_C_ExecuteUbergraph_FireworkFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireworkFX_C_ExecuteUbergraph_FireworkFX, CallFunc_Not_PreBool_ReturnValue) == 0x00003D, "Member 'FireworkFX_C_ExecuteUbergraph_FireworkFX::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireworkFX_C_ExecuteUbergraph_FireworkFX, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'FireworkFX_C_ExecuteUbergraph_FireworkFX::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

