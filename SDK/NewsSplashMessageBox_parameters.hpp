#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewsSplashMessageBox

#include "Basic.hpp"


namespace SDK::Params
{

// Function NewsSplashMessageBox.NewsSplashMessageBox_C.ExecuteUbergraph_NewsSplashMessageBox
// 0x0030 (0x0030 - 0x0000)
struct NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMarinerInputInterface> CallFunc_SetActiveInputWidget_InputWidget_CastInput; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};
static_assert(alignof(NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox) == 0x000008, "Wrong alignment on NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox");
static_assert(sizeof(NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox) == 0x000030, "Wrong size on NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox");
static_assert(offsetof(NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox, EntryPoint) == 0x000000, "Member 'NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox, CallFunc_SetActiveInputWidget_InputWidget_CastInput) == 0x000008, "Member 'NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox::CallFunc_SetActiveInputWidget_InputWidget_CastInput' has a wrong offset!");
static_assert(offsetof(NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'NewsSplashMessageBox_C_ExecuteUbergraph_NewsSplashMessageBox::CallFunc_GetText_ReturnValue' has a wrong offset!");

}

