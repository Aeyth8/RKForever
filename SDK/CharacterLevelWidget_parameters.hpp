#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterLevelWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CharacterLevelWidget.CharacterLevelWidget_C.Populate
// 0x0058 (0x0058 - 0x0000)
struct CharacterLevelWidget_C_Populate final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLocalPlayer;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsFriendlyPlayer;                                  // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRanked;                                          // 0x0006(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterLevelWidget_C_Populate) == 0x000008, "Wrong alignment on CharacterLevelWidget_C_Populate");
static_assert(sizeof(CharacterLevelWidget_C_Populate) == 0x000058, "Wrong size on CharacterLevelWidget_C_Populate");
static_assert(offsetof(CharacterLevelWidget_C_Populate, Level) == 0x000000, "Member 'CharacterLevelWidget_C_Populate::Level' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, IsLocalPlayer) == 0x000004, "Member 'CharacterLevelWidget_C_Populate::IsLocalPlayer' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, IsFriendlyPlayer) == 0x000005, "Member 'CharacterLevelWidget_C_Populate::IsFriendlyPlayer' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, IsRanked) == 0x000006, "Member 'CharacterLevelWidget_C_Populate::IsRanked' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, CallFunc_Greater_IntInt_ReturnValue) == 0x000007, "Member 'CharacterLevelWidget_C_Populate::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'CharacterLevelWidget_C_Populate::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'CharacterLevelWidget_C_Populate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, Temp_struct_Variable) == 0x000024, "Member 'CharacterLevelWidget_C_Populate::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, Temp_struct_Variable_1) == 0x000034, "Member 'CharacterLevelWidget_C_Populate::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, Temp_bool_Variable) == 0x000044, "Member 'CharacterLevelWidget_C_Populate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CharacterLevelWidget_C_Populate, K2Node_Select_Default) == 0x000048, "Member 'CharacterLevelWidget_C_Populate::K2Node_Select_Default' has a wrong offset!");

}

