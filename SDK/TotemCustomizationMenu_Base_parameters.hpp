#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TotemCustomizationMenu_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function TotemCustomizationMenu_Base.TotemCustomizationMenu_Base_C.ExecuteUbergraph_TotemCustomizationMenu_Base
// 0x0088 (0x0088 - 0x0000)
struct TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ARocketTotem_C*>                 CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class UObject*>                        K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class ARocketTotem_C*                         CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegisterControllerInteractables_ReturnValue; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMenuManager*                    CallFunc_GetMenuManager_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerMenuStackLayer*                 CallFunc_GetLayerByClass_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTotemCustomization_Home_C*             K2Node_DynamicCast_AsTotem_Customization_Home;     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASplitgunLite_C*>                CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0060(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class UObject*>                        K2Node_MakeArray_Array_1;                          // 0x0070(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base) == 0x000008, "Wrong alignment on TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base");
static_assert(sizeof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base) == 0x000088, "Wrong size on TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, EntryPoint) == 0x000000, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, K2Node_MakeArray_Array) == 0x000018, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_Array_Get_Item) == 0x000028, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_RegisterControllerInteractables_ReturnValue) == 0x000030, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_RegisterControllerInteractables_ReturnValue' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_GetMenuManager_ReturnValue) == 0x000038, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_GetLayerByClass_ReturnValue) == 0x000048, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_GetLayerByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, K2Node_DynamicCast_AsTotem_Customization_Home) == 0x000050, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::K2Node_DynamicCast_AsTotem_Customization_Home' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000060, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, K2Node_MakeArray_Array_1) == 0x000070, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000084, "Member 'TotemCustomizationMenu_Base_C_ExecuteUbergraph_TotemCustomizationMenu_Base::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

}

