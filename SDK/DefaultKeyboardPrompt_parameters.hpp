#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultKeyboardPrompt

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function DefaultKeyboardPrompt.DefaultKeyboardPrompt_C.GetPromptAssets
// 0x0090 (0x0090 - 0x0000)
struct DefaultKeyboardPrompt_C_GetPromptAssets final
{
public:
	struct FMarinerKeyboardPromptAssets           ReturnValue;                                       // 0x0000(0x0048)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
	struct FMarinerKeyboardPromptAssets           K2Node_MakeStruct_MarinerKeyboardPromptAssets;     // 0x0048(0x0048)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(DefaultKeyboardPrompt_C_GetPromptAssets) == 0x000008, "Wrong alignment on DefaultKeyboardPrompt_C_GetPromptAssets");
static_assert(sizeof(DefaultKeyboardPrompt_C_GetPromptAssets) == 0x000090, "Wrong size on DefaultKeyboardPrompt_C_GetPromptAssets");
static_assert(offsetof(DefaultKeyboardPrompt_C_GetPromptAssets, ReturnValue) == 0x000000, "Member 'DefaultKeyboardPrompt_C_GetPromptAssets::ReturnValue' has a wrong offset!");
static_assert(offsetof(DefaultKeyboardPrompt_C_GetPromptAssets, K2Node_MakeStruct_MarinerKeyboardPromptAssets) == 0x000048, "Member 'DefaultKeyboardPrompt_C_GetPromptAssets::K2Node_MakeStruct_MarinerKeyboardPromptAssets' has a wrong offset!");

}

