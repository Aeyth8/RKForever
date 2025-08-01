#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AsyncFlowQuest

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "InputCore_structs.hpp"
#include "MangoClient_structs.hpp"
#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function AsyncFlowQuest.AsyncFlowQuest_C.ExecuteUbergraph_AsyncFlowQuest
// 0x0150 (0x0150 - 0x0000)
struct AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EMangoQuestSlot SlotId)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful, EMangoQuestSlot SlotId, struct FMangoQuestDescription& NewQuest)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoQuestManager*                     CallFunc_Get_ReturnValue;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMangoQuestSlot                               K2Node_CustomEvent_SlotId_1;                       // 0x0030(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMangoQuestSlot                               K2Node_CustomEvent_SlotId;                         // 0x0032(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMangoQuestDescription                 K2Node_CustomEvent_NewQuest;                       // 0x0038(0x0118)(ConstParm)
};
static_assert(alignof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest) == 0x000008, "Wrong alignment on AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest");
static_assert(sizeof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest) == 0x000150, "Wrong size on AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest");
static_assert(offsetof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest, EntryPoint) == 0x000000, "Member 'AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest::EntryPoint' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest, CallFunc_Get_ReturnValue) == 0x000028, "Member 'AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest, K2Node_CustomEvent_SlotId_1) == 0x000030, "Member 'AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest::K2Node_CustomEvent_SlotId_1' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest, K2Node_CustomEvent_bWasSuccessful) == 0x000031, "Member 'AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest, K2Node_CustomEvent_SlotId) == 0x000032, "Member 'AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest::K2Node_CustomEvent_SlotId' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest, K2Node_CustomEvent_NewQuest) == 0x000038, "Member 'AsyncFlowQuest_C_ExecuteUbergraph_AsyncFlowQuest::K2Node_CustomEvent_NewQuest' has a wrong offset!");

// Function AsyncFlowQuest.AsyncFlowQuest_C.ClaimCompleted
// 0x0120 (0x0120 - 0x0000)
struct AsyncFlowQuest_C_ClaimCompleted final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EMangoQuestSlot                               SlotId;                                            // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMangoQuestDescription                 NewQuest;                                          // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AsyncFlowQuest_C_ClaimCompleted) == 0x000008, "Wrong alignment on AsyncFlowQuest_C_ClaimCompleted");
static_assert(sizeof(AsyncFlowQuest_C_ClaimCompleted) == 0x000120, "Wrong size on AsyncFlowQuest_C_ClaimCompleted");
static_assert(offsetof(AsyncFlowQuest_C_ClaimCompleted, bWasSuccessful) == 0x000000, "Member 'AsyncFlowQuest_C_ClaimCompleted::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ClaimCompleted, SlotId) == 0x000001, "Member 'AsyncFlowQuest_C_ClaimCompleted::SlotId' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ClaimCompleted, NewQuest) == 0x000008, "Member 'AsyncFlowQuest_C_ClaimCompleted::NewQuest' has a wrong offset!");

// Function AsyncFlowQuest.AsyncFlowQuest_C.ClaimStarted
// 0x0001 (0x0001 - 0x0000)
struct AsyncFlowQuest_C_ClaimStarted final
{
public:
	EMangoQuestSlot                               SlotId;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowQuest_C_ClaimStarted) == 0x000001, "Wrong alignment on AsyncFlowQuest_C_ClaimStarted");
static_assert(sizeof(AsyncFlowQuest_C_ClaimStarted) == 0x000001, "Wrong size on AsyncFlowQuest_C_ClaimStarted");
static_assert(offsetof(AsyncFlowQuest_C_ClaimStarted, SlotId) == 0x000000, "Member 'AsyncFlowQuest_C_ClaimStarted::SlotId' has a wrong offset!");

// Function AsyncFlowQuest.AsyncFlowQuest_C.DummyCallback
// 0x0018 (0x0018 - 0x0000)
struct AsyncFlowQuest_C_DummyCallback final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowQuest_C_DummyCallback) == 0x000008, "Wrong alignment on AsyncFlowQuest_C_DummyCallback");
static_assert(sizeof(AsyncFlowQuest_C_DummyCallback) == 0x000018, "Wrong size on AsyncFlowQuest_C_DummyCallback");
static_assert(offsetof(AsyncFlowQuest_C_DummyCallback, KeyPressed) == 0x000000, "Member 'AsyncFlowQuest_C_DummyCallback::KeyPressed' has a wrong offset!");

// Function AsyncFlowQuest.AsyncFlowQuest_C.OnClaimRewardStarted
// 0x0278 (0x0278 - 0x0000)
struct AsyncFlowQuest_C_OnClaimRewardStarted final
{
public:
	EMangoQuestSlot                               SlotId;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMessageBoxManager*              CallFunc_GetMessageBoxManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMangoQuestManager*                     CallFunc_Get_ReturnValue;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FMangoQuestReward                      CallFunc_GetQuestReward_OutReward;                 // 0x0030(0x00C8)()
	bool                                          CallFunc_GetQuestReward_ReturnValue;               // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarinerMessageBoxData                 K2Node_MakeStruct_MarinerMessageBoxData;           // 0x0100(0x0170)(ContainsInstancedReference)
	int32                                         CallFunc_ShowMessageBox_ReturnValue;               // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowQuest_C_OnClaimRewardStarted) == 0x000008, "Wrong alignment on AsyncFlowQuest_C_OnClaimRewardStarted");
static_assert(sizeof(AsyncFlowQuest_C_OnClaimRewardStarted) == 0x000278, "Wrong size on AsyncFlowQuest_C_OnClaimRewardStarted");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardStarted, SlotId) == 0x000000, "Member 'AsyncFlowQuest_C_OnClaimRewardStarted::SlotId' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardStarted, CallFunc_GetMarinerGameInstance_ReturnValue) == 0x000008, "Member 'AsyncFlowQuest_C_OnClaimRewardStarted::CallFunc_GetMarinerGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardStarted, CallFunc_GetMessageBoxManager_ReturnValue) == 0x000010, "Member 'AsyncFlowQuest_C_OnClaimRewardStarted::CallFunc_GetMessageBoxManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardStarted, CallFunc_Get_ReturnValue) == 0x000018, "Member 'AsyncFlowQuest_C_OnClaimRewardStarted::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardStarted, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'AsyncFlowQuest_C_OnClaimRewardStarted::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardStarted, CallFunc_GetQuestReward_OutReward) == 0x000030, "Member 'AsyncFlowQuest_C_OnClaimRewardStarted::CallFunc_GetQuestReward_OutReward' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardStarted, CallFunc_GetQuestReward_ReturnValue) == 0x0000F8, "Member 'AsyncFlowQuest_C_OnClaimRewardStarted::CallFunc_GetQuestReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardStarted, K2Node_MakeStruct_MarinerMessageBoxData) == 0x000100, "Member 'AsyncFlowQuest_C_OnClaimRewardStarted::K2Node_MakeStruct_MarinerMessageBoxData' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardStarted, CallFunc_ShowMessageBox_ReturnValue) == 0x000270, "Member 'AsyncFlowQuest_C_OnClaimRewardStarted::CallFunc_ShowMessageBox_ReturnValue' has a wrong offset!");

// Function AsyncFlowQuest.AsyncFlowQuest_C.EvalPendingQuestRewardIsOwned
// 0x0010 (0x0010 - 0x0000)
struct AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned final
{
public:
	class UMangoInventoryManager*                 CallFunc_Get_ReturnValue;                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemOwned_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned) == 0x000008, "Wrong alignment on AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned");
static_assert(sizeof(AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned) == 0x000010, "Wrong size on AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned");
static_assert(offsetof(AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned, CallFunc_Get_ReturnValue) == 0x000000, "Member 'AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000008, "Member 'AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned, CallFunc_IsItemOwned_ReturnValue) == 0x000009, "Member 'AsyncFlowQuest_C_EvalPendingQuestRewardIsOwned::CallFunc_IsItemOwned_ReturnValue' has a wrong offset!");

// Function AsyncFlowQuest.AsyncFlowQuest_C.OnClaimRewardCompleted
// 0x0388 (0x0388 - 0x0000)
struct AsyncFlowQuest_C_OnClaimRewardCompleted final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	EMangoQuestSlot                               SlotId;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarinerBasePlayerController*           CallFunc_TryAndGetLocalPlayerController_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue_1;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarinerMessageBoxData                 K2Node_MakeStruct_MarinerMessageBoxData;           // 0x0040(0x0170)(ContainsInstancedReference)
	class UMarinerMessageBoxManager*              CallFunc_GetMessageBoxManager_ReturnValue;         // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveMessageBox_ReturnValue;             // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue_2;     // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x01C8(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	class UMarinerMessageBoxManager*              CallFunc_GetMessageBoxManager_ReturnValue_1;       // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate_2;            // 0x01E0(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x01F0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FMarinerMessageBoxQuestRewardData      K2Node_MakeStruct_MarinerMessageBoxQuestRewardData; // 0x0200(0x0180)(ContainsInstancedReference)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ShowQuestRewardMessageBox_ReturnValue;    // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowQuest_C_OnClaimRewardCompleted) == 0x000008, "Wrong alignment on AsyncFlowQuest_C_OnClaimRewardCompleted");
static_assert(sizeof(AsyncFlowQuest_C_OnClaimRewardCompleted) == 0x000388, "Wrong size on AsyncFlowQuest_C_OnClaimRewardCompleted");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, WasSuccessful) == 0x000000, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::WasSuccessful' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, SlotId) == 0x000001, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::SlotId' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, CallFunc_TryAndGetLocalPlayerController_ReturnValue) == 0x000008, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::CallFunc_TryAndGetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, CallFunc_GetMarinerGameInstance_ReturnValue) == 0x000010, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::CallFunc_GetMarinerGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, CallFunc_GetMarinerGameInstance_ReturnValue_1) == 0x000038, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::CallFunc_GetMarinerGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, K2Node_MakeStruct_MarinerMessageBoxData) == 0x000040, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::K2Node_MakeStruct_MarinerMessageBoxData' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, CallFunc_GetMessageBoxManager_ReturnValue) == 0x0001B0, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::CallFunc_GetMessageBoxManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, CallFunc_RemoveMessageBox_ReturnValue) == 0x0001B8, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::CallFunc_RemoveMessageBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, CallFunc_GetMarinerGameInstance_ReturnValue_2) == 0x0001C0, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::CallFunc_GetMarinerGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, Temp_delegate_Variable) == 0x0001C8, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, CallFunc_GetMessageBoxManager_ReturnValue_1) == 0x0001D8, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::CallFunc_GetMessageBoxManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001E0, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, Temp_struct_Variable) == 0x0001F0, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, K2Node_MakeStruct_MarinerMessageBoxQuestRewardData) == 0x000200, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::K2Node_MakeStruct_MarinerMessageBoxQuestRewardData' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, CallFunc_PostEvent_ReturnValue) == 0x000380, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_OnClaimRewardCompleted, CallFunc_ShowQuestRewardMessageBox_ReturnValue) == 0x000384, "Member 'AsyncFlowQuest_C_OnClaimRewardCompleted::CallFunc_ShowQuestRewardMessageBox_ReturnValue' has a wrong offset!");

// Function AsyncFlowQuest.AsyncFlowQuest_C.ClaimFailedRetry
// 0x0020 (0x0020 - 0x0000)
struct AsyncFlowQuest_C_ClaimFailedRetry final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UMangoQuestManager*                     CallFunc_Get_ReturnValue;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowQuest_C_ClaimFailedRetry) == 0x000008, "Wrong alignment on AsyncFlowQuest_C_ClaimFailedRetry");
static_assert(sizeof(AsyncFlowQuest_C_ClaimFailedRetry) == 0x000020, "Wrong size on AsyncFlowQuest_C_ClaimFailedRetry");
static_assert(offsetof(AsyncFlowQuest_C_ClaimFailedRetry, KeyPressed) == 0x000000, "Member 'AsyncFlowQuest_C_ClaimFailedRetry::KeyPressed' has a wrong offset!");
static_assert(offsetof(AsyncFlowQuest_C_ClaimFailedRetry, CallFunc_Get_ReturnValue) == 0x000018, "Member 'AsyncFlowQuest_C_ClaimFailedRetry::CallFunc_Get_ReturnValue' has a wrong offset!");

}

