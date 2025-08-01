#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Poe_00_PostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Poe_00_PostAnimBP.Poe_00_PostAnimBP_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct Poe_00_PostAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Poe_00_PostAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Poe_00_PostAnimBP_C_AnimGraph");
static_assert(sizeof(Poe_00_PostAnimBP_C_AnimGraph) == 0x000020, "Wrong size on Poe_00_PostAnimBP_C_AnimGraph");
static_assert(offsetof(Poe_00_PostAnimBP_C_AnimGraph, InPose) == 0x000000, "Member 'Poe_00_PostAnimBP_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(Poe_00_PostAnimBP_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'Poe_00_PostAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function Poe_00_PostAnimBP.Poe_00_PostAnimBP_C.ExecuteUbergraph_Poe_00_PostAnimBP
// 0x0004 (0x0004 - 0x0000)
struct Poe_00_PostAnimBP_C_ExecuteUbergraph_Poe_00_PostAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Poe_00_PostAnimBP_C_ExecuteUbergraph_Poe_00_PostAnimBP) == 0x000004, "Wrong alignment on Poe_00_PostAnimBP_C_ExecuteUbergraph_Poe_00_PostAnimBP");
static_assert(sizeof(Poe_00_PostAnimBP_C_ExecuteUbergraph_Poe_00_PostAnimBP) == 0x000004, "Wrong size on Poe_00_PostAnimBP_C_ExecuteUbergraph_Poe_00_PostAnimBP");
static_assert(offsetof(Poe_00_PostAnimBP_C_ExecuteUbergraph_Poe_00_PostAnimBP, EntryPoint) == 0x000000, "Member 'Poe_00_PostAnimBP_C_ExecuteUbergraph_Poe_00_PostAnimBP::EntryPoint' has a wrong offset!");

}

