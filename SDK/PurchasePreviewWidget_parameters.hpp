#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchasePreviewWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PurchasePreviewWidget.PurchasePreviewWidget_C.ExecuteUbergraph_PurchasePreviewWidget
// 0x0018 (0x0018 - 0x0000)
struct PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerLayeredButton*                  K2Node_ComponentBoundEvent_Instance_1;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerLayeredButton*                  K2Node_ComponentBoundEvent_Instance;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget) == 0x000008, "Wrong alignment on PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget");
static_assert(sizeof(PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget) == 0x000018, "Wrong size on PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget");
static_assert(offsetof(PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget, EntryPoint) == 0x000000, "Member 'PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget, K2Node_ComponentBoundEvent_Instance_1) == 0x000008, "Member 'PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget::K2Node_ComponentBoundEvent_Instance_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget, K2Node_ComponentBoundEvent_Instance) == 0x000010, "Member 'PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget::K2Node_ComponentBoundEvent_Instance' has a wrong offset!");

// Function PurchasePreviewWidget.PurchasePreviewWidget_C.BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PurchasePreviewWidget_C_BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature final
{
public:
	class UMarinerLayeredButton*                  Instance;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PurchasePreviewWidget_C_BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature) == 0x000008, "Wrong alignment on PurchasePreviewWidget_C_BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature");
static_assert(sizeof(PurchasePreviewWidget_C_BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature) == 0x000008, "Wrong size on PurchasePreviewWidget_C_BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature");
static_assert(offsetof(PurchasePreviewWidget_C_BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature, Instance) == 0x000000, "Member 'PurchasePreviewWidget_C_BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature::Instance' has a wrong offset!");

// Function PurchasePreviewWidget.PurchasePreviewWidget_C.BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PurchasePreviewWidget_C_BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature final
{
public:
	class UMarinerLayeredButton*                  Instance;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PurchasePreviewWidget_C_BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature) == 0x000008, "Wrong alignment on PurchasePreviewWidget_C_BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature");
static_assert(sizeof(PurchasePreviewWidget_C_BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature) == 0x000008, "Wrong size on PurchasePreviewWidget_C_BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature");
static_assert(offsetof(PurchasePreviewWidget_C_BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature, Instance) == 0x000000, "Member 'PurchasePreviewWidget_C_BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature::Instance' has a wrong offset!");

// Function PurchasePreviewWidget.PurchasePreviewWidget_C.SetOfferAndTier
// 0x0020 (0x0020 - 0x0000)
struct PurchasePreviewWidget_C_SetOfferAndTier final
{
public:
	class UItemLoadResponse*                      ItemLoadResponse_0;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDirectPurchase_0;                               // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerPlayableCharacter*              Character_0;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ItemLoadResponse_ReturnValue;    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PurchasePreviewWidget_C_SetOfferAndTier) == 0x000008, "Wrong alignment on PurchasePreviewWidget_C_SetOfferAndTier");
static_assert(sizeof(PurchasePreviewWidget_C_SetOfferAndTier) == 0x000020, "Wrong size on PurchasePreviewWidget_C_SetOfferAndTier");
static_assert(offsetof(PurchasePreviewWidget_C_SetOfferAndTier, ItemLoadResponse_0) == 0x000000, "Member 'PurchasePreviewWidget_C_SetOfferAndTier::ItemLoadResponse_0' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_SetOfferAndTier, UseDirectPurchase_0) == 0x000008, "Member 'PurchasePreviewWidget_C_SetOfferAndTier::UseDirectPurchase_0' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_SetOfferAndTier, Character_0) == 0x000010, "Member 'PurchasePreviewWidget_C_SetOfferAndTier::Character_0' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_SetOfferAndTier, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'PurchasePreviewWidget_C_SetOfferAndTier::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_SetOfferAndTier, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000019, "Member 'PurchasePreviewWidget_C_SetOfferAndTier::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_SetOfferAndTier, CallFunc_NotEqual_ItemLoadResponse_ReturnValue) == 0x00001A, "Member 'PurchasePreviewWidget_C_SetOfferAndTier::CallFunc_NotEqual_ItemLoadResponse_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_SetOfferAndTier, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'PurchasePreviewWidget_C_SetOfferAndTier::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_SetOfferAndTier, CallFunc_BooleanOR_ReturnValue_1) == 0x00001C, "Member 'PurchasePreviewWidget_C_SetOfferAndTier::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function PurchasePreviewWidget.PurchasePreviewWidget_C.Populate
// 0x0218 (0x0218 - 0x0000)
struct PurchasePreviewWidget_C_Populate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerFrontEndGlobals*                CallFunc_GetFrontEndGlobals_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerCMSItemDataAsset*               K2Node_DynamicCast_AsMariner_CMSItem_Data_Asset;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerStoreGlobals*                   CallFunc_GetStoreGlobals_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Populate_ReturnValue;                     // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetOfferButtonText_ReturnValue;           // 0x0030(0x0018)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0060(0x0028)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0090(0x0018)()
	class FText                                   CallFunc_GetOfferTypeName_OutOfferName;            // 0x00A8(0x0018)()
	bool                                          CallFunc_GetOfferTypeName_ReturnValue;             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0138(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetOfferItemFullName_Result;              // 0x0140(0x0018)()
	bool                                          CallFunc_Populate_ReturnValue_1;                   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoInventoryManager*                 CallFunc_Get_ReturnValue;                          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOfferOwned_ReturnValue;                 // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16A[0x6];                                      // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_1;                            // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default_1;                           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Populate_ReturnValue_2;                   // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0188(0x0088)()
	bool                                          CallFunc_Populate_ReturnValue_3;                   // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PurchasePreviewWidget_C_Populate) == 0x000008, "Wrong alignment on PurchasePreviewWidget_C_Populate");
static_assert(sizeof(PurchasePreviewWidget_C_Populate) == 0x000218, "Wrong size on PurchasePreviewWidget_C_Populate");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, ReturnValue) == 0x000000, "Member 'PurchasePreviewWidget_C_Populate::ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_GetFrontEndGlobals_ReturnValue) == 0x000008, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_GetFrontEndGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, K2Node_DynamicCast_AsMariner_CMSItem_Data_Asset) == 0x000010, "Member 'PurchasePreviewWidget_C_Populate::K2Node_DynamicCast_AsMariner_CMSItem_Data_Asset' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PurchasePreviewWidget_C_Populate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_GetStoreGlobals_ReturnValue) == 0x000020, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_GetStoreGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, Temp_byte_Variable) == 0x000028, "Member 'PurchasePreviewWidget_C_Populate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_Populate_ReturnValue) == 0x00002A, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_Populate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, Temp_byte_Variable_1) == 0x00002B, "Member 'PurchasePreviewWidget_C_Populate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, Temp_bool_Variable) == 0x00002C, "Member 'PurchasePreviewWidget_C_Populate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_GetOfferButtonText_ReturnValue) == 0x000030, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_GetOfferButtonText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_SelectColor_ReturnValue) == 0x00004C, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, K2Node_MakeStruct_SlateColor) == 0x000060, "Member 'PurchasePreviewWidget_C_Populate::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000088, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_Conv_IntToText_ReturnValue) == 0x000090, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_GetOfferTypeName_OutOfferName) == 0x0000A8, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_GetOfferTypeName_OutOfferName' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_GetOfferTypeName_ReturnValue) == 0x0000C0, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_GetOfferTypeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, Temp_bool_Variable_1) == 0x0000C1, "Member 'PurchasePreviewWidget_C_Populate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'PurchasePreviewWidget_C_Populate::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, Temp_object_Variable) == 0x000108, "Member 'PurchasePreviewWidget_C_Populate::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, K2Node_MakeArray_Array) == 0x000110, "Member 'PurchasePreviewWidget_C_Populate::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_Format_ReturnValue) == 0x000120, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_K2_SetTimer_ReturnValue) == 0x000138, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_GetOfferItemFullName_Result) == 0x000140, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_GetOfferItemFullName_Result' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_Populate_ReturnValue_1) == 0x000158, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_Populate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_IsVisible_ReturnValue) == 0x000159, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_IsVisible_ReturnValue_1) == 0x00015A, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_BooleanOR_ReturnValue) == 0x00015B, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_Get_ReturnValue) == 0x000160, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_IsOfferOwned_ReturnValue) == 0x000168, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_IsOfferOwned_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, K2Node_Select_Default) == 0x000169, "Member 'PurchasePreviewWidget_C_Populate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, Temp_object_Variable_1) == 0x000170, "Member 'PurchasePreviewWidget_C_Populate::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, K2Node_Select_Default_1) == 0x000178, "Member 'PurchasePreviewWidget_C_Populate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_Populate_ReturnValue_2) == 0x000180, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_Populate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, K2Node_MakeStruct_SlateBrush) == 0x000188, "Member 'PurchasePreviewWidget_C_Populate::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_Populate, CallFunc_Populate_ReturnValue_3) == 0x000210, "Member 'PurchasePreviewWidget_C_Populate::CallFunc_Populate_ReturnValue_3' has a wrong offset!");

// Function PurchasePreviewWidget.PurchasePreviewWidget_C.GetOfferItemFullName
// 0x0278 (0x0278 - 0x0000)
struct PurchasePreviewWidget_C_GetOfferItemFullName final
{
public:
	struct FMangoPurchaseOffer                    MangoPurchaseOffer;                                // 0x0000(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   Result;                                            // 0x00D8(0x0018)(Parm, OutParm)
	class UMarinerFrontEndGlobals*                CallFunc_GetFrontEndGlobals_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerStoreGlobals*                   CallFunc_GetStoreGlobals_ReturnValue;              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetOfferTypeName_OutOfferName;            // 0x0108(0x0018)()
	bool                                          CallFunc_GetOfferTypeName_ReturnValue;             // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0128(0x0040)(HasGetValueTypeHash)
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue;                          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetOfferName_ReturnValue;                 // 0x0178(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0190(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01D0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0210(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0220(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0230(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0248(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0260(0x0018)()
};
static_assert(alignof(PurchasePreviewWidget_C_GetOfferItemFullName) == 0x000008, "Wrong alignment on PurchasePreviewWidget_C_GetOfferItemFullName");
static_assert(sizeof(PurchasePreviewWidget_C_GetOfferItemFullName) == 0x000278, "Wrong size on PurchasePreviewWidget_C_GetOfferItemFullName");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, MangoPurchaseOffer) == 0x000000, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::MangoPurchaseOffer' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, Result) == 0x0000D8, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::Result' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_GetFrontEndGlobals_ReturnValue) == 0x0000F0, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_GetFrontEndGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_GetStoreGlobals_ReturnValue) == 0x0000F8, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_GetStoreGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_GetOfferTypeName_OutOfferName) == 0x000108, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_GetOfferTypeName_OutOfferName' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_GetOfferTypeName_ReturnValue) == 0x000120, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_GetOfferTypeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000121, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, K2Node_MakeStruct_FormatArgumentData) == 0x000128, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_Get_ReturnValue) == 0x000168, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, Temp_bool_Variable) == 0x000170, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_GetOfferName_ReturnValue) == 0x000178, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_GetOfferName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, K2Node_MakeStruct_FormatArgumentData_1) == 0x000190, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001D0, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, K2Node_MakeArray_Array) == 0x000210, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, K2Node_MakeArray_Array_1) == 0x000220, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_Format_ReturnValue) == 0x000230, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, CallFunc_Format_ReturnValue_1) == 0x000248, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_GetOfferItemFullName, K2Node_Select_Default) == 0x000260, "Member 'PurchasePreviewWidget_C_GetOfferItemFullName::K2Node_Select_Default' has a wrong offset!");

// Function PurchasePreviewWidget.PurchasePreviewWidget_C.UpdateLimitedTimeWidgets
// 0x0058 (0x0058 - 0x0000)
struct PurchasePreviewWidget_C_UpdateLimitedTimeWidgets final
{
public:
	struct FTimespan                              RemainingTime;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DateTimeDateTime_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_FormatEventTimeRemaining_ReturnValue;     // 0x0038(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets) == 0x000008, "Wrong alignment on PurchasePreviewWidget_C_UpdateLimitedTimeWidgets");
static_assert(sizeof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets) == 0x000058, "Wrong size on PurchasePreviewWidget_C_UpdateLimitedTimeWidgets");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, RemainingTime) == 0x000000, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::RemainingTime' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, Temp_byte_Variable) == 0x000008, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, Temp_byte_Variable_1) == 0x000009, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, Temp_bool_Variable) == 0x00000A, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, CallFunc_UtcNow_ReturnValue) == 0x000010, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue) == 0x000018, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000020, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, CallFunc_Less_DateTimeDateTime_ReturnValue) == 0x000028, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::CallFunc_Less_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, CallFunc_GetTotalSeconds_ReturnValue) == 0x00002C, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, CallFunc_BooleanAND_ReturnValue) == 0x000030, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, CallFunc_FormatEventTimeRemaining_ReturnValue) == 0x000038, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::CallFunc_FormatEventTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchasePreviewWidget_C_UpdateLimitedTimeWidgets, K2Node_Select_Default) == 0x000050, "Member 'PurchasePreviewWidget_C_UpdateLimitedTimeWidgets::K2Node_Select_Default' has a wrong offset!");

}

