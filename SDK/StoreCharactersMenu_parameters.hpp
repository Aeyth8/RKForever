#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreCharactersMenu

#include "Basic.hpp"

#include "Mariner_structs.hpp"
#include "MangoClient_structs.hpp"


namespace SDK::Params
{

// Function StoreCharactersMenu.StoreCharactersMenu_C.ExecuteUbergraph_StoreCharactersMenu
// 0x00D0 (0x00D0 - 0x0000)
struct StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<class UItemLoadResponse*>& LoadedDataResponse)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UItemLoadResponse*>              K2Node_CustomEvent_LoadedDataResponse;             // 0x0028(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UItemLoadResponse*>              Temp_object_Variable;                              // 0x0038(0x0010)(ZeroConstructor, ReferenceParm)
	class UItemLoadResponse*                      CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bFromSubMenu;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerPlayableCharacter*              K2Node_DynamicCast_AsMariner_Playable_Character;   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMarinerInputInterface> CallFunc_SetActiveInputWidget_InputWidget_CastInput; // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMarinerLayeredButton*                  K2Node_CustomEvent_ButtonInstance;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterStoreButton_C*                K2Node_DynamicCast_AsCharacter_Store_Button;       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerMenuManager*                    CallFunc_GetMenuManager_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMenuStackLayer*                 CallFunc_PushLayerToActiveStack_ReturnValue;       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterPurchaseMenu_C*               K2Node_DynamicCast_AsCharacter_Purchase_Menu;      // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMangoItem>                     K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UMarinerLoadCMSItemData*                CallFunc_LoadItemData_ReturnValue;                 // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu) == 0x000008, "Wrong alignment on StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu");
static_assert(sizeof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu) == 0x0000D0, "Wrong size on StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, EntryPoint) == 0x000000, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_CustomEvent_LoadedDataResponse) == 0x000028, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_CustomEvent_LoadedDataResponse' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, Temp_object_Variable) == 0x000038, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, CallFunc_Array_Get_Item) == 0x000048, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_Event_bFromSubMenu) == 0x000050, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_Event_bFromSubMenu' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_DynamicCast_AsMariner_Playable_Character) == 0x000058, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_DynamicCast_AsMariner_Playable_Character' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, CallFunc_SetActiveInputWidget_InputWidget_CastInput) == 0x000068, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::CallFunc_SetActiveInputWidget_InputWidget_CastInput' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_CustomEvent_ButtonInstance) == 0x000078, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_CustomEvent_ButtonInstance' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_DynamicCast_AsCharacter_Store_Button) == 0x000080, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_DynamicCast_AsCharacter_Store_Button' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, CallFunc_GetMenuManager_ReturnValue) == 0x000090, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, CallFunc_PushLayerToActiveStack_ReturnValue) == 0x000098, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::CallFunc_PushLayerToActiveStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_DynamicCast_AsCharacter_Purchase_Menu) == 0x0000A0, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_DynamicCast_AsCharacter_Purchase_Menu' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, K2Node_MakeArray_Array) == 0x0000B0, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, CallFunc_LoadItemData_ReturnValue) == 0x0000C0, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::CallFunc_LoadItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'StoreCharactersMenu_C_ExecuteUbergraph_StoreCharactersMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function StoreCharactersMenu.StoreCharactersMenu_C.OnItemSelected
// 0x0008 (0x0008 - 0x0000)
struct StoreCharactersMenu_C_OnItemSelected final
{
public:
	class UMarinerLayeredButton*                  ButtonInstance;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreCharactersMenu_C_OnItemSelected) == 0x000008, "Wrong alignment on StoreCharactersMenu_C_OnItemSelected");
static_assert(sizeof(StoreCharactersMenu_C_OnItemSelected) == 0x000008, "Wrong size on StoreCharactersMenu_C_OnItemSelected");
static_assert(offsetof(StoreCharactersMenu_C_OnItemSelected, ButtonInstance) == 0x000000, "Member 'StoreCharactersMenu_C_OnItemSelected::ButtonInstance' has a wrong offset!");

// Function StoreCharactersMenu.StoreCharactersMenu_C.BP_OnEntered
// 0x0001 (0x0001 - 0x0000)
struct StoreCharactersMenu_C_BP_OnEntered final
{
public:
	bool                                          bFromSubMenu;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreCharactersMenu_C_BP_OnEntered) == 0x000001, "Wrong alignment on StoreCharactersMenu_C_BP_OnEntered");
static_assert(sizeof(StoreCharactersMenu_C_BP_OnEntered) == 0x000001, "Wrong size on StoreCharactersMenu_C_BP_OnEntered");
static_assert(offsetof(StoreCharactersMenu_C_BP_OnEntered, bFromSubMenu) == 0x000000, "Member 'StoreCharactersMenu_C_BP_OnEntered::bFromSubMenu' has a wrong offset!");

// Function StoreCharactersMenu.StoreCharactersMenu_C.LoadFinished_2585ECF1418A0A154D23F7847E3DF951
// 0x0010 (0x0010 - 0x0000)
struct StoreCharactersMenu_C_LoadFinished_2585ECF1418A0A154D23F7847E3DF951 final
{
public:
	TArray<class UItemLoadResponse*>              LoadedDataResponse;                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(StoreCharactersMenu_C_LoadFinished_2585ECF1418A0A154D23F7847E3DF951) == 0x000008, "Wrong alignment on StoreCharactersMenu_C_LoadFinished_2585ECF1418A0A154D23F7847E3DF951");
static_assert(sizeof(StoreCharactersMenu_C_LoadFinished_2585ECF1418A0A154D23F7847E3DF951) == 0x000010, "Wrong size on StoreCharactersMenu_C_LoadFinished_2585ECF1418A0A154D23F7847E3DF951");
static_assert(offsetof(StoreCharactersMenu_C_LoadFinished_2585ECF1418A0A154D23F7847E3DF951, LoadedDataResponse) == 0x000000, "Member 'StoreCharactersMenu_C_LoadFinished_2585ECF1418A0A154D23F7847E3DF951::LoadedDataResponse' has a wrong offset!");

// Function StoreCharactersMenu.StoreCharactersMenu_C.PopulateOffers
// 0x0150 (0x0150 - 0x0000)
struct StoreCharactersMenu_C_PopulateOffers final
{
public:
	TArray<struct FMangoPurchaseOffer>            Offers;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                         NextIndex;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMangoPurchaseOffer                    CallFunc_Array_Get_Item;                           // 0x0018(0x00D8)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ConvertCharacterIndexToRowCol_Row;        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ConvertCharacterIndexToRowCol_Column;     // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterStoreButton_C*                CallFunc_Create_ReturnValue;                       // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue;                          // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMarinerLayeredButton* Instance)> K2Node_CreateDelegate_OutputDelegate;              // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FMangoPurchaseOffer>            CallFunc_GetAllOffersOfType_OutOffers;             // 0x0140(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(StoreCharactersMenu_C_PopulateOffers) == 0x000008, "Wrong alignment on StoreCharactersMenu_C_PopulateOffers");
static_assert(sizeof(StoreCharactersMenu_C_PopulateOffers) == 0x000150, "Wrong size on StoreCharactersMenu_C_PopulateOffers");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, Offers) == 0x000000, "Member 'StoreCharactersMenu_C_PopulateOffers::Offers' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, NextIndex) == 0x000010, "Member 'StoreCharactersMenu_C_PopulateOffers::NextIndex' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, Temp_int_Array_Index_Variable) == 0x000014, "Member 'StoreCharactersMenu_C_PopulateOffers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_Array_Get_Item) == 0x000018, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_Array_Length_ReturnValue) == 0x0000F4, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_ConvertCharacterIndexToRowCol_Row) == 0x0000F8, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_ConvertCharacterIndexToRowCol_Row' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_ConvertCharacterIndexToRowCol_Column) == 0x0000FC, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_ConvertCharacterIndexToRowCol_Column' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, Temp_int_Loop_Counter_Variable) == 0x000100, "Member 'StoreCharactersMenu_C_PopulateOffers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_Create_ReturnValue) == 0x000108, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_Add_IntInt_ReturnValue_1) == 0x000114, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_AddChildToGrid_ReturnValue) == 0x000118, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, Temp_int_Variable) == 0x000120, "Member 'StoreCharactersMenu_C_PopulateOffers::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_Get_ReturnValue) == 0x000128, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, K2Node_CreateDelegate_OutputDelegate) == 0x000130, "Member 'StoreCharactersMenu_C_PopulateOffers::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_PopulateOffers, CallFunc_GetAllOffersOfType_OutOffers) == 0x000140, "Member 'StoreCharactersMenu_C_PopulateOffers::CallFunc_GetAllOffersOfType_OutOffers' has a wrong offset!");

// Function StoreCharactersMenu.StoreCharactersMenu_C.UpdatePrompts
// 0x0150 (0x0150 - 0x0000)
struct StoreCharactersMenu_C_UpdatePrompts final
{
public:
	struct FMarinerPromptData                     K2Node_MakeStruct_MarinerPromptData;               // 0x0000(0x0118)()
	TScriptInterface<class IMarinerInputInterface> CallFunc_GetHighlightedObject_self_CastInput;      // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IMarinerInputInterface> CallFunc_GetHighlightedObject_ReturnValue;         // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddHostPrompt_ReturnValue;                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterStoreButton_C*                K2Node_DynamicCast_AsCharacter_Store_Button;       // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClearHostPrompts_ReturnValue;             // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOfferOwned_IsOwned;                     // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreCharactersMenu_C_UpdatePrompts) == 0x000008, "Wrong alignment on StoreCharactersMenu_C_UpdatePrompts");
static_assert(sizeof(StoreCharactersMenu_C_UpdatePrompts) == 0x000150, "Wrong size on StoreCharactersMenu_C_UpdatePrompts");
static_assert(offsetof(StoreCharactersMenu_C_UpdatePrompts, K2Node_MakeStruct_MarinerPromptData) == 0x000000, "Member 'StoreCharactersMenu_C_UpdatePrompts::K2Node_MakeStruct_MarinerPromptData' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_UpdatePrompts, CallFunc_GetHighlightedObject_self_CastInput) == 0x000118, "Member 'StoreCharactersMenu_C_UpdatePrompts::CallFunc_GetHighlightedObject_self_CastInput' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_UpdatePrompts, CallFunc_GetHighlightedObject_ReturnValue) == 0x000128, "Member 'StoreCharactersMenu_C_UpdatePrompts::CallFunc_GetHighlightedObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_UpdatePrompts, CallFunc_AddHostPrompt_ReturnValue) == 0x000138, "Member 'StoreCharactersMenu_C_UpdatePrompts::CallFunc_AddHostPrompt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_UpdatePrompts, K2Node_DynamicCast_AsCharacter_Store_Button) == 0x000140, "Member 'StoreCharactersMenu_C_UpdatePrompts::K2Node_DynamicCast_AsCharacter_Store_Button' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_UpdatePrompts, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'StoreCharactersMenu_C_UpdatePrompts::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_UpdatePrompts, CallFunc_ClearHostPrompts_ReturnValue) == 0x000149, "Member 'StoreCharactersMenu_C_UpdatePrompts::CallFunc_ClearHostPrompts_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCharactersMenu_C_UpdatePrompts, CallFunc_IsOfferOwned_IsOwned) == 0x00014A, "Member 'StoreCharactersMenu_C_UpdatePrompts::CallFunc_IsOfferOwned_IsOwned' has a wrong offset!");

}

