#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActivePlayersRow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ActivePlayersRow.ActivePlayersRow_C.SetPlayerName
// 0x0058 (0x0058 - 0x0000)
struct ActivePlayersRow_C_SetPlayerName final
{
public:
	class FString                                 PlayerName_0;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsLocalPlayer;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0030(0x0028)()
};
static_assert(alignof(ActivePlayersRow_C_SetPlayerName) == 0x000008, "Wrong alignment on ActivePlayersRow_C_SetPlayerName");
static_assert(sizeof(ActivePlayersRow_C_SetPlayerName) == 0x000058, "Wrong size on ActivePlayersRow_C_SetPlayerName");
static_assert(offsetof(ActivePlayersRow_C_SetPlayerName, PlayerName_0) == 0x000000, "Member 'ActivePlayersRow_C_SetPlayerName::PlayerName_0' has a wrong offset!");
static_assert(offsetof(ActivePlayersRow_C_SetPlayerName, IsLocalPlayer) == 0x000010, "Member 'ActivePlayersRow_C_SetPlayerName::IsLocalPlayer' has a wrong offset!");
static_assert(offsetof(ActivePlayersRow_C_SetPlayerName, Temp_bool_Variable) == 0x000011, "Member 'ActivePlayersRow_C_SetPlayerName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ActivePlayersRow_C_SetPlayerName, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ActivePlayersRow_C_SetPlayerName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersRow_C_SetPlayerName, K2Node_Select_Default) == 0x000030, "Member 'ActivePlayersRow_C_SetPlayerName::K2Node_Select_Default' has a wrong offset!");

}

