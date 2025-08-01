#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AsyncFlowBlastPassSplash

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "MangoClient_structs.hpp"
#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function AsyncFlowBlastPassSplash.AsyncFlowBlastPassSplash_C.EvalBlastPassSplash
// 0x0360 (0x0360 - 0x0000)
struct AsyncFlowBlastPassSplash_C_EvalBlastPassSplash final
{
public:
	class UMarinerFrontEndGlobals*                CallFunc_GetFrontEndGlobals_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UMarinerStoreGlobals*                   CallFunc_GetStoreGlobals_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMangoPlayerManager*                    CallFunc_Get_ReturnValue;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DidPlayerWinLastGame_Victory;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActiveBlastPassSplashViewed_ReturnValue; // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalProfileAdvertStateActive_ReturnValue; // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoPlayerManager*                    CallFunc_Get_ReturnValue_1;                        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalProfileOnboardingActive_ReturnValue; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoInventoryManager*                 CallFunc_Get_ReturnValue_2;                        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue_3;                        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActiveBlastPassSeasonOwned_ReturnValue; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMangoBlastPassDefinition              CallFunc_TryGetActiveBlastPassDefinition_OutDefinition; // 0x0058(0x0068)()
	bool                                          CallFunc_TryGetActiveBlastPassDefinition_ReturnValue; // 0x00C0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerMessageBoxManager*              CallFunc_GetMessageBoxManager_MessageBoxManager;   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	struct FSlateBrush                            CallFunc_GetImage_ImageBrushOut;                   // 0x00E0(0x0088)()
	bool                                          CallFunc_GetImage_ReturnValue;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0170(0x0040)(HasGetValueTypeHash)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate_2;            // 0x01B0(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01C0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01D0(0x0018)()
	struct FMarinerMessageBoxData                 K2Node_MakeStruct_MarinerMessageBoxData;           // 0x01E8(0x0170)(ContainsInstancedReference)
	int32                                         CallFunc_ShowMessageBox_ReturnValue;               // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash) == 0x000008, "Wrong alignment on AsyncFlowBlastPassSplash_C_EvalBlastPassSplash");
static_assert(sizeof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash) == 0x000360, "Wrong size on AsyncFlowBlastPassSplash_C_EvalBlastPassSplash");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_GetFrontEndGlobals_ReturnValue) == 0x000000, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_GetFrontEndGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_GetStoreGlobals_ReturnValue) == 0x000018, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_GetStoreGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_Get_ReturnValue) == 0x000020, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_DidPlayerWinLastGame_Victory) == 0x000028, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_DidPlayerWinLastGame_Victory' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_IsActiveBlastPassSplashViewed_ReturnValue) == 0x000029, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_IsActiveBlastPassSplashViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_IsLocalProfileAdvertStateActive_ReturnValue) == 0x00002A, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_IsLocalProfileAdvertStateActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_Get_ReturnValue_1) == 0x000030, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_IsLocalProfileOnboardingActive_ReturnValue) == 0x000038, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_IsLocalProfileOnboardingActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_Get_ReturnValue_2) == 0x000040, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_Get_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_Get_ReturnValue_3) == 0x000048, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_Get_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_IsActiveBlastPassSeasonOwned_ReturnValue) == 0x000050, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_IsActiveBlastPassSeasonOwned_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_TryGetActiveBlastPassDefinition_OutDefinition) == 0x000058, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_TryGetActiveBlastPassDefinition_OutDefinition' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_TryGetActiveBlastPassDefinition_ReturnValue) == 0x0000C0, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_TryGetActiveBlastPassDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_GetMessageBoxManager_MessageBoxManager) == 0x0000C8, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_GetMessageBoxManager_MessageBoxManager' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D0, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_GetImage_ImageBrushOut) == 0x0000E0, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_GetImage_ImageBrushOut' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_GetImage_ReturnValue) == 0x000168, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_GetImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, K2Node_MakeStruct_FormatArgumentData) == 0x000170, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001B0, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, K2Node_MakeArray_Array) == 0x0001C0, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_Format_ReturnValue) == 0x0001D0, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, K2Node_MakeStruct_MarinerMessageBoxData) == 0x0001E8, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::K2Node_MakeStruct_MarinerMessageBoxData' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_EvalBlastPassSplash, CallFunc_ShowMessageBox_ReturnValue) == 0x000358, "Member 'AsyncFlowBlastPassSplash_C_EvalBlastPassSplash::CallFunc_ShowMessageBox_ReturnValue' has a wrong offset!");

// Function AsyncFlowBlastPassSplash.AsyncFlowBlastPassSplash_C.DidPlayerWinLastGame
// 0x0170 (0x0170 - 0x0000)
struct AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame final
{
public:
	bool                                          Victory;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoPlayerManager*                    CallFunc_Get_ReturnValue;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMatchEnd                              CallFunc_GetMangoProfileLastMatch_OutMatchEnd;     // 0x0010(0x0068)()
	bool                                          CallFunc_GetMangoProfileLastMatch_ReturnValue;     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchEndPlayer                        CallFunc_GetPlayerFromMatchEndData_Player;         // 0x0080(0x00E8)()
	bool                                          CallFunc_GetPlayerFromMatchEndData_IsValid;        // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame) == 0x000008, "Wrong alignment on AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame");
static_assert(sizeof(AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame) == 0x000170, "Wrong size on AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame, Victory) == 0x000000, "Member 'AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame::Victory' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame, CallFunc_Get_ReturnValue) == 0x000008, "Member 'AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame, CallFunc_GetMangoProfileLastMatch_OutMatchEnd) == 0x000010, "Member 'AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame::CallFunc_GetMangoProfileLastMatch_OutMatchEnd' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame, CallFunc_GetMangoProfileLastMatch_ReturnValue) == 0x000078, "Member 'AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame::CallFunc_GetMangoProfileLastMatch_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame, CallFunc_GetPlayerFromMatchEndData_Player) == 0x000080, "Member 'AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame::CallFunc_GetPlayerFromMatchEndData_Player' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame, CallFunc_GetPlayerFromMatchEndData_IsValid) == 0x000168, "Member 'AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame::CallFunc_GetPlayerFromMatchEndData_IsValid' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000169, "Member 'AsyncFlowBlastPassSplash_C_DidPlayerWinLastGame::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function AsyncFlowBlastPassSplash.AsyncFlowBlastPassSplash_C.BlastPassSplashConfirm
// 0x00A8 (0x00A8 - 0x0000)
struct AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UMarinerAsyncUIFlowHandler*             CallFunc_Get_ReturnValue;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue_1;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncFlowOffers_C*                     K2Node_DynamicCast_AsAsync_Flow_Offers;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMangoBlastPassDefinition              CallFunc_TryGetActiveBlastPassDefinition_OutDefinition; // 0x0038(0x0068)()
	bool                                          CallFunc_TryGetActiveBlastPassDefinition_ReturnValue; // 0x00A0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm) == 0x000008, "Wrong alignment on AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm");
static_assert(sizeof(AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm) == 0x0000A8, "Wrong size on AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm, KeyPressed) == 0x000000, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm::KeyPressed' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm, CallFunc_Get_ReturnValue) == 0x000018, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm, CallFunc_Get_ReturnValue_1) == 0x000020, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm, K2Node_DynamicCast_AsAsync_Flow_Offers) == 0x000028, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm::K2Node_DynamicCast_AsAsync_Flow_Offers' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm, CallFunc_TryGetActiveBlastPassDefinition_OutDefinition) == 0x000038, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm::CallFunc_TryGetActiveBlastPassDefinition_OutDefinition' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm, CallFunc_TryGetActiveBlastPassDefinition_ReturnValue) == 0x0000A0, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashConfirm::CallFunc_TryGetActiveBlastPassDefinition_ReturnValue' has a wrong offset!");

// Function AsyncFlowBlastPassSplash.AsyncFlowBlastPassSplash_C.BlastPassSplashCancel
// 0x0018 (0x0018 - 0x0000)
struct AsyncFlowBlastPassSplash_C_BlastPassSplashCancel final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowBlastPassSplash_C_BlastPassSplashCancel) == 0x000008, "Wrong alignment on AsyncFlowBlastPassSplash_C_BlastPassSplashCancel");
static_assert(sizeof(AsyncFlowBlastPassSplash_C_BlastPassSplashCancel) == 0x000018, "Wrong size on AsyncFlowBlastPassSplash_C_BlastPassSplashCancel");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashCancel, KeyPressed) == 0x000000, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashCancel::KeyPressed' has a wrong offset!");

// Function AsyncFlowBlastPassSplash.AsyncFlowBlastPassSplash_C.GetMessageBoxManager
// 0x0028 (0x0028 - 0x0000)
struct AsyncFlowBlastPassSplash_C_GetMessageBoxManager final
{
public:
	class UMarinerMessageBoxManager*              MessageBoxManager;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameInstance*                   K2Node_DynamicCast_AsMariner_Game_Instance;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerMessageBoxManager*              CallFunc_GetMessageBoxManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowBlastPassSplash_C_GetMessageBoxManager) == 0x000008, "Wrong alignment on AsyncFlowBlastPassSplash_C_GetMessageBoxManager");
static_assert(sizeof(AsyncFlowBlastPassSplash_C_GetMessageBoxManager) == 0x000028, "Wrong size on AsyncFlowBlastPassSplash_C_GetMessageBoxManager");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_GetMessageBoxManager, MessageBoxManager) == 0x000000, "Member 'AsyncFlowBlastPassSplash_C_GetMessageBoxManager::MessageBoxManager' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_GetMessageBoxManager, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'AsyncFlowBlastPassSplash_C_GetMessageBoxManager::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_GetMessageBoxManager, K2Node_DynamicCast_AsMariner_Game_Instance) == 0x000010, "Member 'AsyncFlowBlastPassSplash_C_GetMessageBoxManager::K2Node_DynamicCast_AsMariner_Game_Instance' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_GetMessageBoxManager, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AsyncFlowBlastPassSplash_C_GetMessageBoxManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_GetMessageBoxManager, CallFunc_GetMessageBoxManager_ReturnValue) == 0x000020, "Member 'AsyncFlowBlastPassSplash_C_GetMessageBoxManager::CallFunc_GetMessageBoxManager_ReturnValue' has a wrong offset!");

// Function AsyncFlowBlastPassSplash.AsyncFlowBlastPassSplash_C.BlastPassSplashDetails
// 0x0040 (0x0040 - 0x0000)
struct AsyncFlowBlastPassSplash_C_BlastPassSplashDetails final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameInstance*                   K2Node_DynamicCast_AsMariner_Game_Instance;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerMenuManager*                    CallFunc_GetMenuManager_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SwitchToStackManagerStack_ReturnValue;    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AsyncFlowBlastPassSplash_C_BlastPassSplashDetails) == 0x000008, "Wrong alignment on AsyncFlowBlastPassSplash_C_BlastPassSplashDetails");
static_assert(sizeof(AsyncFlowBlastPassSplash_C_BlastPassSplashDetails) == 0x000040, "Wrong size on AsyncFlowBlastPassSplash_C_BlastPassSplashDetails");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashDetails, KeyPressed) == 0x000000, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashDetails::KeyPressed' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashDetails, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashDetails::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashDetails, K2Node_DynamicCast_AsMariner_Game_Instance) == 0x000020, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashDetails::K2Node_DynamicCast_AsMariner_Game_Instance' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashDetails, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashDetails, CallFunc_GetMenuManager_ReturnValue) == 0x000030, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashDetails::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_BlastPassSplashDetails, CallFunc_SwitchToStackManagerStack_ReturnValue) == 0x000038, "Member 'AsyncFlowBlastPassSplash_C_BlastPassSplashDetails::CallFunc_SwitchToStackManagerStack_ReturnValue' has a wrong offset!");

// Function AsyncFlowBlastPassSplash.AsyncFlowBlastPassSplash_C.SetAsViewed
// 0x0008 (0x0008 - 0x0000)
struct AsyncFlowBlastPassSplash_C_SetAsViewed final
{
public:
	class UMangoPlayerManager*                    CallFunc_Get_ReturnValue;                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowBlastPassSplash_C_SetAsViewed) == 0x000008, "Wrong alignment on AsyncFlowBlastPassSplash_C_SetAsViewed");
static_assert(sizeof(AsyncFlowBlastPassSplash_C_SetAsViewed) == 0x000008, "Wrong size on AsyncFlowBlastPassSplash_C_SetAsViewed");
static_assert(offsetof(AsyncFlowBlastPassSplash_C_SetAsViewed, CallFunc_Get_ReturnValue) == 0x000000, "Member 'AsyncFlowBlastPassSplash_C_SetAsViewed::CallFunc_Get_ReturnValue' has a wrong offset!");

}

