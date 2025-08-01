#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameArtifact

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MangoClient_structs.hpp"
#include "Mariner_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function PostGameArtifact.PostGameArtifact_C.ExecuteUbergraph_PostGameArtifact
// 0x00F8 (0x00F8 - 0x0000)
struct PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMangoItemType                                K2Node_CustomEvent_ItemType;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ItemID;                         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMangoItemResult                       K2Node_CustomEvent_ItemResult;                     // 0x0038(0x0030)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0070(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0090(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Level;                          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Level)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	struct FMangoReward                           K2Node_CustomEvent_Reward;                         // 0x00B8(0x0040)()
};
static_assert(alignof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact) == 0x000008, "Wrong alignment on PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact");
static_assert(sizeof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact) == 0x0000F8, "Wrong size on PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, EntryPoint) == 0x000000, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::EntryPoint' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, K2Node_CustomEvent_ItemType) == 0x000010, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::K2Node_CustomEvent_ItemType' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, K2Node_CustomEvent_ItemID) == 0x000018, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::K2Node_CustomEvent_ItemID' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000028, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, K2Node_CustomEvent_ItemResult) == 0x000038, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::K2Node_CustomEvent_ItemResult' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, CallFunc_PlayAnimation_ReturnValue_1) == 0x000068, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, Temp_delegate_Variable) == 0x000070, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, Temp_struct_Variable) == 0x000090, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, CallFunc_PostEvent_ReturnValue) == 0x0000A0, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, K2Node_CustomEvent_Level) == 0x0000A4, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::K2Node_CustomEvent_Level' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A8, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact, K2Node_CustomEvent_Reward) == 0x0000B8, "Member 'PostGameArtifact_C_ExecuteUbergraph_PostGameArtifact::K2Node_CustomEvent_Reward' has a wrong offset!");

// Function PostGameArtifact.PostGameArtifact_C.PresentReward
// 0x0040 (0x0040 - 0x0000)
struct PostGameArtifact_C_PresentReward final
{
public:
	struct FMangoReward                           Reward;                                            // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PostGameArtifact_C_PresentReward) == 0x000008, "Wrong alignment on PostGameArtifact_C_PresentReward");
static_assert(sizeof(PostGameArtifact_C_PresentReward) == 0x000040, "Wrong size on PostGameArtifact_C_PresentReward");
static_assert(offsetof(PostGameArtifact_C_PresentReward, Reward) == 0x000000, "Member 'PostGameArtifact_C_PresentReward::Reward' has a wrong offset!");

// Function PostGameArtifact.PostGameArtifact_C.LevelChanged
// 0x0004 (0x0004 - 0x0000)
struct PostGameArtifact_C_LevelChanged final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PostGameArtifact_C_LevelChanged) == 0x000004, "Wrong alignment on PostGameArtifact_C_LevelChanged");
static_assert(sizeof(PostGameArtifact_C_LevelChanged) == 0x000004, "Wrong size on PostGameArtifact_C_LevelChanged");
static_assert(offsetof(PostGameArtifact_C_LevelChanged, Level) == 0x000000, "Member 'PostGameArtifact_C_LevelChanged::Level' has a wrong offset!");

// Function PostGameArtifact.PostGameArtifact_C.PresentProgress
// 0x0030 (0x0030 - 0x0000)
struct PostGameArtifact_C_PresentProgress final
{
public:
	struct FMangoItemResult                       ItemResult;                                        // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PostGameArtifact_C_PresentProgress) == 0x000008, "Wrong alignment on PostGameArtifact_C_PresentProgress");
static_assert(sizeof(PostGameArtifact_C_PresentProgress) == 0x000030, "Wrong size on PostGameArtifact_C_PresentProgress");
static_assert(offsetof(PostGameArtifact_C_PresentProgress, ItemResult) == 0x000000, "Member 'PostGameArtifact_C_PresentProgress::ItemResult' has a wrong offset!");

// Function PostGameArtifact.PostGameArtifact_C.PresentUnlock
// 0x0018 (0x0018 - 0x0000)
struct PostGameArtifact_C_PresentUnlock final
{
public:
	EMangoItemType                                ItemType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ItemID;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PostGameArtifact_C_PresentUnlock) == 0x000008, "Wrong alignment on PostGameArtifact_C_PresentUnlock");
static_assert(sizeof(PostGameArtifact_C_PresentUnlock) == 0x000018, "Wrong size on PostGameArtifact_C_PresentUnlock");
static_assert(offsetof(PostGameArtifact_C_PresentUnlock, ItemType) == 0x000000, "Member 'PostGameArtifact_C_PresentUnlock::ItemType' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_PresentUnlock, ItemID) == 0x000008, "Member 'PostGameArtifact_C_PresentUnlock::ItemID' has a wrong offset!");

// Function PostGameArtifact.PostGameArtifact_C.TransitionOut
// 0x0008 (0x0008 - 0x0000)
struct PostGameArtifact_C_TransitionOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PostGameArtifact_C_TransitionOut) == 0x000008, "Wrong alignment on PostGameArtifact_C_TransitionOut");
static_assert(sizeof(PostGameArtifact_C_TransitionOut) == 0x000008, "Wrong size on PostGameArtifact_C_TransitionOut");
static_assert(offsetof(PostGameArtifact_C_TransitionOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'PostGameArtifact_C_TransitionOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function PostGameArtifact.PostGameArtifact_C.UpdateArtifactLevel
// 0x02B8 (0x02B8 - 0x0000)
struct PostGameArtifact_C_UpdateArtifactLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMangoItemType                                ArtifactType;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ItemID;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bJustUnlocked;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0020(0x0018)()
	class UMarinerUIGlobals*                      CallFunc_GetUIGlobals_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerArtifactDataAsset*              CallFunc_GetArtifactUIDataAsset_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarinerArtifactUIData                 CallFunc_GetUIDataForLevel_ReturnValue;            // 0x0048(0x0100)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetArtifactImage_ReturnValue;             // 0x0148(0x0028)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetArtifactImprovementText_ImprovementText; // 0x0170(0x0018)()
	class FText                                   CallFunc_GetArtifactImprovementText_ImprovementText_1; // 0x0188(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01A0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01E0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0220(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0260(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0270(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0280(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0298(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PostGameArtifact_C_UpdateArtifactLevel) == 0x000008, "Wrong alignment on PostGameArtifact_C_UpdateArtifactLevel");
static_assert(sizeof(PostGameArtifact_C_UpdateArtifactLevel) == 0x0002B8, "Wrong size on PostGameArtifact_C_UpdateArtifactLevel");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, Level) == 0x000000, "Member 'PostGameArtifact_C_UpdateArtifactLevel::Level' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, ArtifactType) == 0x000004, "Member 'PostGameArtifact_C_UpdateArtifactLevel::ArtifactType' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, ItemID) == 0x000008, "Member 'PostGameArtifact_C_UpdateArtifactLevel::ItemID' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, bJustUnlocked) == 0x000018, "Member 'PostGameArtifact_C_UpdateArtifactLevel::bJustUnlocked' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_MakeLiteralText_ReturnValue) == 0x000020, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_GetUIGlobals_ReturnValue) == 0x000038, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_GetUIGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_GetArtifactUIDataAsset_ReturnValue) == 0x000040, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_GetArtifactUIDataAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_GetUIDataForLevel_ReturnValue) == 0x000048, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_GetUIDataForLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_GetArtifactImage_ReturnValue) == 0x000148, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_GetArtifactImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_GetArtifactImprovementText_ImprovementText) == 0x000170, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_GetArtifactImprovementText_ImprovementText' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_GetArtifactImprovementText_ImprovementText_1) == 0x000188, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_GetArtifactImprovementText_ImprovementText_1' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, K2Node_MakeStruct_FormatArgumentData) == 0x0001A0, "Member 'PostGameArtifact_C_UpdateArtifactLevel::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001E0, "Member 'PostGameArtifact_C_UpdateArtifactLevel::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, K2Node_MakeStruct_FormatArgumentData_2) == 0x000220, "Member 'PostGameArtifact_C_UpdateArtifactLevel::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, K2Node_MakeArray_Array) == 0x000260, "Member 'PostGameArtifact_C_UpdateArtifactLevel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, K2Node_MakeArray_Array_1) == 0x000270, "Member 'PostGameArtifact_C_UpdateArtifactLevel::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_Format_ReturnValue) == 0x000280, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_Format_ReturnValue_1) == 0x000298, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_Array_Length_ReturnValue) == 0x0002B0, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002B4, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_UpdateArtifactLevel, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002B5, "Member 'PostGameArtifact_C_UpdateArtifactLevel::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function PostGameArtifact.PostGameArtifact_C.SetSize
// 0x0004 (0x0004 - 0x0000)
struct PostGameArtifact_C_SetSize final
{
public:
	float                                         Size;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PostGameArtifact_C_SetSize) == 0x000004, "Wrong alignment on PostGameArtifact_C_SetSize");
static_assert(sizeof(PostGameArtifact_C_SetSize) == 0x000004, "Wrong size on PostGameArtifact_C_SetSize");
static_assert(offsetof(PostGameArtifact_C_SetSize, Size) == 0x000000, "Member 'PostGameArtifact_C_SetSize::Size' has a wrong offset!");

// Function PostGameArtifact.PostGameArtifact_C.GetArtifactImprovementText
// 0x0080 (0x0080 - 0x0000)
struct PostGameArtifact_C_GetArtifactImprovementText final
{
public:
	float                                         ImprovementNumber;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ImprovementSymbol;                                 // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   ImprovementText;                                   // 0x0018(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0068(0x0018)()
};
static_assert(alignof(PostGameArtifact_C_GetArtifactImprovementText) == 0x000008, "Wrong alignment on PostGameArtifact_C_GetArtifactImprovementText");
static_assert(sizeof(PostGameArtifact_C_GetArtifactImprovementText) == 0x000080, "Wrong size on PostGameArtifact_C_GetArtifactImprovementText");
static_assert(offsetof(PostGameArtifact_C_GetArtifactImprovementText, ImprovementNumber) == 0x000000, "Member 'PostGameArtifact_C_GetArtifactImprovementText::ImprovementNumber' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_GetArtifactImprovementText, ImprovementSymbol) == 0x000008, "Member 'PostGameArtifact_C_GetArtifactImprovementText::ImprovementSymbol' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_GetArtifactImprovementText, ImprovementText) == 0x000018, "Member 'PostGameArtifact_C_GetArtifactImprovementText::ImprovementText' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_GetArtifactImprovementText, CallFunc_Conv_FloatToString_ReturnValue) == 0x000030, "Member 'PostGameArtifact_C_GetArtifactImprovementText::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_GetArtifactImprovementText, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'PostGameArtifact_C_GetArtifactImprovementText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_GetArtifactImprovementText, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'PostGameArtifact_C_GetArtifactImprovementText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameArtifact_C_GetArtifactImprovementText, CallFunc_MakeLiteralText_ReturnValue) == 0x000068, "Member 'PostGameArtifact_C_GetArtifactImprovementText::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");

// Function PostGameArtifact.PostGameArtifact_C.Get Artifact Progress Bar
// 0x0008 (0x0008 - 0x0000)
struct PostGameArtifact_C_Get_Artifact_Progress_Bar final
{
public:
	class UArtifactProgressBar_C*                 ArtifactProgressBar_0;                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PostGameArtifact_C_Get_Artifact_Progress_Bar) == 0x000008, "Wrong alignment on PostGameArtifact_C_Get_Artifact_Progress_Bar");
static_assert(sizeof(PostGameArtifact_C_Get_Artifact_Progress_Bar) == 0x000008, "Wrong size on PostGameArtifact_C_Get_Artifact_Progress_Bar");
static_assert(offsetof(PostGameArtifact_C_Get_Artifact_Progress_Bar, ArtifactProgressBar_0) == 0x000000, "Member 'PostGameArtifact_C_Get_Artifact_Progress_Bar::ArtifactProgressBar_0' has a wrong offset!");

}

