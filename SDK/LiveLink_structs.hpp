#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLink

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LiveLinkInterface_structs.hpp"


namespace SDK
{

// Enum LiveLink.ELiveLinkAxis
// NumValues: 0x0007
enum class ELiveLinkAxis : uint8
{
	X                                        = 0,
	Y                                        = 1,
	Z                                        = 2,
	XNeg                                     = 3,
	YNeg                                     = 4,
	ZNeg                                     = 5,
	ELiveLinkAxis_MAX                        = 6,
};

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x0040 (0x0050 - 0x0010)
struct FAnimNode_LiveLinkPose final : public FAnimNode_Base
{
public:
	struct FPoseLink                              InputPose;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkSubjectName                   LiveLinkSubjectName;                               // 0x0020(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRetargetAsset>     RetargetAsset;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                 CurrentRetargetAsset;                              // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x18];                                      // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_LiveLinkPose) == 0x000008, "Wrong alignment on FAnimNode_LiveLinkPose");
static_assert(sizeof(FAnimNode_LiveLinkPose) == 0x000050, "Wrong size on FAnimNode_LiveLinkPose");
static_assert(offsetof(FAnimNode_LiveLinkPose, InputPose) == 0x000010, "Member 'FAnimNode_LiveLinkPose::InputPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, LiveLinkSubjectName) == 0x000020, "Member 'FAnimNode_LiveLinkPose::LiveLinkSubjectName' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, RetargetAsset) == 0x000028, "Member 'FAnimNode_LiveLinkPose::RetargetAsset' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, CurrentRetargetAsset) == 0x000030, "Member 'FAnimNode_LiveLinkPose::CurrentRetargetAsset' has a wrong offset!");

// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
// 0x0028 (0x0028 - 0x0000)
struct FLiveLinkRoleProjectSetting final
{
public:
	TSubclassOf<class ULiveLinkRole>              Role;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkSubjectSettings>   SettingClass;                                      // 0x0008(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;                       // 0x0010(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ULiveLinkFramePreProcessor>> FramePreProcessors;                                // 0x0018(0x0010)(Edit, ZeroConstructor, Config, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLiveLinkRoleProjectSetting) == 0x000008, "Wrong alignment on FLiveLinkRoleProjectSetting");
static_assert(sizeof(FLiveLinkRoleProjectSetting) == 0x000028, "Wrong size on FLiveLinkRoleProjectSetting");
static_assert(offsetof(FLiveLinkRoleProjectSetting, Role) == 0x000000, "Member 'FLiveLinkRoleProjectSetting::Role' has a wrong offset!");
static_assert(offsetof(FLiveLinkRoleProjectSetting, SettingClass) == 0x000008, "Member 'FLiveLinkRoleProjectSetting::SettingClass' has a wrong offset!");
static_assert(offsetof(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor) == 0x000010, "Member 'FLiveLinkRoleProjectSetting::FrameInterpolationProcessor' has a wrong offset!");
static_assert(offsetof(FLiveLinkRoleProjectSetting, FramePreProcessors) == 0x000018, "Member 'FLiveLinkRoleProjectSetting::FramePreProcessors' has a wrong offset!");

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x0050 (0x0730 - 0x06E0)
struct FLiveLinkInstanceProxy final : public FAnimInstanceProxy
{
public:
	struct FAnimNode_LiveLinkPose                 PoseNode;                                          // 0x06E0(0x0050)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLiveLinkInstanceProxy) == 0x000010, "Wrong alignment on FLiveLinkInstanceProxy");
static_assert(sizeof(FLiveLinkInstanceProxy) == 0x000730, "Wrong size on FLiveLinkInstanceProxy");
static_assert(offsetof(FLiveLinkInstanceProxy, PoseNode) == 0x0006E0, "Member 'FLiveLinkInstanceProxy::PoseNode' has a wrong offset!");

// ScriptStruct LiveLink.ProviderPollResult
// 0x0038 (0x0038 - 0x0000)
struct FProviderPollResult final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MachineName;                                       // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        MachineTimeOffset;                                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FProviderPollResult) == 0x000008, "Wrong alignment on FProviderPollResult");
static_assert(sizeof(FProviderPollResult) == 0x000038, "Wrong size on FProviderPollResult");
static_assert(offsetof(FProviderPollResult, Name) == 0x000010, "Member 'FProviderPollResult::Name' has a wrong offset!");
static_assert(offsetof(FProviderPollResult, MachineName) == 0x000020, "Member 'FProviderPollResult::MachineName' has a wrong offset!");
static_assert(offsetof(FProviderPollResult, MachineTimeOffset) == 0x000030, "Member 'FProviderPollResult::MachineTimeOffset' has a wrong offset!");

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0001 (0x0001 - 0x0000)
struct FLiveLinkRetargetAssetReference final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLiveLinkRetargetAssetReference) == 0x000001, "Wrong alignment on FLiveLinkRetargetAssetReference");
static_assert(sizeof(FLiveLinkRetargetAssetReference) == 0x000001, "Wrong size on FLiveLinkRetargetAssetReference");

}

