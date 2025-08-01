#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActionFromKeyWidget

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function ActionFromKeyWidget.ActionFromKeyWidget_C.ExecuteUbergraph_ActionFromKeyWidget
// 0x0038 (0x0038 - 0x0000)
struct ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameInstance*                   K2Node_DynamicCast_AsMariner_Game_Instance;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerInputOverlay*                   CallFunc_GetInputOverlay_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget) == 0x000008, "Wrong alignment on ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget");
static_assert(sizeof(ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget) == 0x000038, "Wrong size on ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget");
static_assert(offsetof(ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget, EntryPoint) == 0x000000, "Member 'ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget, K2Node_DynamicCast_AsMariner_Game_Instance) == 0x000020, "Member 'ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget::K2Node_DynamicCast_AsMariner_Game_Instance' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget, CallFunc_GetInputOverlay_ReturnValue) == 0x000030, "Member 'ActionFromKeyWidget_C_ExecuteUbergraph_ActionFromKeyWidget::CallFunc_GetInputOverlay_ReturnValue' has a wrong offset!");

// Function ActionFromKeyWidget.ActionFromKeyWidget_C.SetWidgetText
// 0x0080 (0x0080 - 0x0000)
struct ActionFromKeyWidget_C_SetWidgetText final
{
public:
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue;                    // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarinerKeySet                         K2Node_MakeStruct_MarinerKeySet;                   // 0x0008(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_GetMarinerGlobals_IsValid;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerGlobals*                        CallFunc_GetMarinerGlobals_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerInputGlobals*                   CallFunc_GetInputGlobals_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetActionNameFromKeySet_ReturnValue;      // 0x0050(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActionFromKeyWidget_C_SetWidgetText) == 0x000008, "Wrong alignment on ActionFromKeyWidget_C_SetWidgetText");
static_assert(sizeof(ActionFromKeyWidget_C_SetWidgetText) == 0x000080, "Wrong size on ActionFromKeyWidget_C_SetWidgetText");
static_assert(offsetof(ActionFromKeyWidget_C_SetWidgetText, CallFunc_GetParent_ReturnValue) == 0x000000, "Member 'ActionFromKeyWidget_C_SetWidgetText::CallFunc_GetParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_SetWidgetText, K2Node_MakeStruct_MarinerKeySet) == 0x000008, "Member 'ActionFromKeyWidget_C_SetWidgetText::K2Node_MakeStruct_MarinerKeySet' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_SetWidgetText, CallFunc_GetMarinerGlobals_IsValid) == 0x000038, "Member 'ActionFromKeyWidget_C_SetWidgetText::CallFunc_GetMarinerGlobals_IsValid' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_SetWidgetText, CallFunc_GetMarinerGlobals_ReturnValue) == 0x000040, "Member 'ActionFromKeyWidget_C_SetWidgetText::CallFunc_GetMarinerGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_SetWidgetText, CallFunc_GetInputGlobals_ReturnValue) == 0x000048, "Member 'ActionFromKeyWidget_C_SetWidgetText::CallFunc_GetInputGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_SetWidgetText, CallFunc_GetActionNameFromKeySet_ReturnValue) == 0x000050, "Member 'ActionFromKeyWidget_C_SetWidgetText::CallFunc_GetActionNameFromKeySet_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_SetWidgetText, CallFunc_Conv_TextToString_ReturnValue) == 0x000068, "Member 'ActionFromKeyWidget_C_SetWidgetText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionFromKeyWidget_C_SetWidgetText, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000078, "Member 'ActionFromKeyWidget_C_SetWidgetText::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

}

