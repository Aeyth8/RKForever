#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreRootMenu

#include "Basic.hpp"


namespace SDK::Params
{

// Function StoreRootMenu.StoreRootMenu_C.ExecuteUbergraph_StoreRootMenu
// 0x0038 (0x0038 - 0x0000)
struct StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerUIGlobals*                      CallFunc_GetUIGlobals_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerCollectionDataAsset*            CallFunc_GetMythicEditionCollection_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerLayeredButton*                  K2Node_ComponentBoundEvent_Instance_1;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMenuManager*                    CallFunc_GetMenuManager_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerLayeredButton*                  K2Node_ComponentBoundEvent_Instance;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMenuStackLayer*                 CallFunc_PushLayerToActiveStack_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu) == 0x000008, "Wrong alignment on StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu");
static_assert(sizeof(StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu) == 0x000038, "Wrong size on StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu");
static_assert(offsetof(StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu, EntryPoint) == 0x000000, "Member 'StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu, CallFunc_GetUIGlobals_ReturnValue) == 0x000008, "Member 'StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu::CallFunc_GetUIGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu, CallFunc_GetMythicEditionCollection_ReturnValue) == 0x000010, "Member 'StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu::CallFunc_GetMythicEditionCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu, K2Node_ComponentBoundEvent_Instance_1) == 0x000018, "Member 'StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu::K2Node_ComponentBoundEvent_Instance_1' has a wrong offset!");
static_assert(offsetof(StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu, CallFunc_GetMenuManager_ReturnValue) == 0x000020, "Member 'StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu, K2Node_ComponentBoundEvent_Instance) == 0x000028, "Member 'StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu::K2Node_ComponentBoundEvent_Instance' has a wrong offset!");
static_assert(offsetof(StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu, CallFunc_PushLayerToActiveStack_ReturnValue) == 0x000030, "Member 'StoreRootMenu_C_ExecuteUbergraph_StoreRootMenu::CallFunc_PushLayerToActiveStack_ReturnValue' has a wrong offset!");

// Function StoreRootMenu.StoreRootMenu_C.BndEvt__MythicEdition_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct StoreRootMenu_C_BndEvt__MythicEdition_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature final
{
public:
	class UMarinerLayeredButton*                  Instance;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreRootMenu_C_BndEvt__MythicEdition_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature) == 0x000008, "Wrong alignment on StoreRootMenu_C_BndEvt__MythicEdition_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature");
static_assert(sizeof(StoreRootMenu_C_BndEvt__MythicEdition_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature) == 0x000008, "Wrong size on StoreRootMenu_C_BndEvt__MythicEdition_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature");
static_assert(offsetof(StoreRootMenu_C_BndEvt__MythicEdition_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature, Instance) == 0x000000, "Member 'StoreRootMenu_C_BndEvt__MythicEdition_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature::Instance' has a wrong offset!");

// Function StoreRootMenu.StoreRootMenu_C.BndEvt__RocketBux_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct StoreRootMenu_C_BndEvt__RocketBux_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature final
{
public:
	class UMarinerLayeredButton*                  Instance;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreRootMenu_C_BndEvt__RocketBux_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature) == 0x000008, "Wrong alignment on StoreRootMenu_C_BndEvt__RocketBux_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature");
static_assert(sizeof(StoreRootMenu_C_BndEvt__RocketBux_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature) == 0x000008, "Wrong size on StoreRootMenu_C_BndEvt__RocketBux_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature");
static_assert(offsetof(StoreRootMenu_C_BndEvt__RocketBux_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature, Instance) == 0x000000, "Member 'StoreRootMenu_C_BndEvt__RocketBux_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature::Instance' has a wrong offset!");

}

