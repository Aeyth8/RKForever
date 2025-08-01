#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayTasks

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayTasks_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GameplayTasks.GameplayTask
// 0x0040 (0x0068 - 0x0028)
class UGameplayTask : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InstanceName;                                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_38[0x2];                                       // 0x0038(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	ETaskResourceOverlapPolicy                    ResourceOverlapPolicy;                             // 0x003A(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3B[0x25];                                      // 0x003B(0x0025)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayTask*                          ChildTask;                                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void EndTask();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void ReadyForActivation();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask">();
	}
	static class UGameplayTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask>();
	}
};
static_assert(alignof(UGameplayTask) == 0x000008, "Wrong alignment on UGameplayTask");
static_assert(sizeof(UGameplayTask) == 0x000068, "Wrong size on UGameplayTask");
static_assert(offsetof(UGameplayTask, InstanceName) == 0x000030, "Member 'UGameplayTask::InstanceName' has a wrong offset!");
static_assert(offsetof(UGameplayTask, ResourceOverlapPolicy) == 0x00003A, "Member 'UGameplayTask::ResourceOverlapPolicy' has a wrong offset!");
static_assert(offsetof(UGameplayTask, ChildTask) == 0x000060, "Member 'UGameplayTask::ChildTask' has a wrong offset!");

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0030 (0x0098 - 0x0068)
class UGameplayTask_TimeLimitedExecution final : public UGameplayTask
{
public:
	UMulticastInlineDelegateProperty_             OnFinished;                                        // 0x0068(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_             OnTimeExpired;                                     // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x10];                                      // 0x0088(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_TimeLimitedExecution">();
	}
	static class UGameplayTask_TimeLimitedExecution* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_TimeLimitedExecution>();
	}
};
static_assert(alignof(UGameplayTask_TimeLimitedExecution) == 0x000008, "Wrong alignment on UGameplayTask_TimeLimitedExecution");
static_assert(sizeof(UGameplayTask_TimeLimitedExecution) == 0x000098, "Wrong size on UGameplayTask_TimeLimitedExecution");
static_assert(offsetof(UGameplayTask_TimeLimitedExecution, OnFinished) == 0x000068, "Member 'UGameplayTask_TimeLimitedExecution::OnFinished' has a wrong offset!");
static_assert(offsetof(UGameplayTask_TimeLimitedExecution, OnTimeExpired) == 0x000078, "Member 'UGameplayTask_TimeLimitedExecution::OnTimeExpired' has a wrong offset!");

// Class GameplayTasks.GameplayTasksComponent
// 0x0070 (0x0120 - 0x00B0)
class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                         Pad_B0[0xC];                                       // 0x00B0(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         BitPad_BC_0 : 1;                                   // 0x00BC(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bIsNetDirty : 1;                                   // 0x00BC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGameplayTask*>                  SimulatedTasks;                                    // 0x00C0(0x0010)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                  TaskPriorityQueue;                                 // 0x00D0(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_E0[0x10];                                      // 0x00E0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGameplayTask*>                  TickingTasks;                                      // 0x00F0(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                  KnownTasks;                                        // 0x0100(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	UMulticastInlineDelegateProperty_             OnClaimedResourcesChange;                          // 0x0110(0x0010)(BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)

public:
	static EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, class UGameplayTask* Task, uint8 Priority, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalRequiredResources, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalClaimedResources);

	void OnRep_SimulatedTasks(const TArray<class UGameplayTask*>& PreviousSimulatedTasks);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTasksComponent">();
	}
	static class UGameplayTasksComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTasksComponent>();
	}
};
static_assert(alignof(UGameplayTasksComponent) == 0x000008, "Wrong alignment on UGameplayTasksComponent");
static_assert(sizeof(UGameplayTasksComponent) == 0x000120, "Wrong size on UGameplayTasksComponent");
static_assert(offsetof(UGameplayTasksComponent, SimulatedTasks) == 0x0000C0, "Member 'UGameplayTasksComponent::SimulatedTasks' has a wrong offset!");
static_assert(offsetof(UGameplayTasksComponent, TaskPriorityQueue) == 0x0000D0, "Member 'UGameplayTasksComponent::TaskPriorityQueue' has a wrong offset!");
static_assert(offsetof(UGameplayTasksComponent, TickingTasks) == 0x0000F0, "Member 'UGameplayTasksComponent::TickingTasks' has a wrong offset!");
static_assert(offsetof(UGameplayTasksComponent, KnownTasks) == 0x000100, "Member 'UGameplayTasksComponent::KnownTasks' has a wrong offset!");
static_assert(offsetof(UGameplayTasksComponent, OnClaimedResourcesChange) == 0x000110, "Member 'UGameplayTasksComponent::OnClaimedResourcesChange' has a wrong offset!");

// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class IGameplayTaskOwnerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTaskOwnerInterface">();
	}
	static class IGameplayTaskOwnerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayTaskOwnerInterface>();
	}
};
static_assert(alignof(IGameplayTaskOwnerInterface) == 0x000008, "Wrong alignment on IGameplayTaskOwnerInterface");
static_assert(sizeof(IGameplayTaskOwnerInterface) == 0x000028, "Wrong size on IGameplayTaskOwnerInterface");

// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (0x0068 - 0x0068)
class UGameplayTask_ClaimResource final : public UGameplayTask
{
public:
	static class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, TSubclassOf<class UGameplayTaskResource> ResourceClass, const uint8 Priority, const class FName TaskInstanceName);
	static class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, const TArray<TSubclassOf<class UGameplayTaskResource>>& ResourceClasses, const uint8 Priority, const class FName TaskInstanceName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_ClaimResource">();
	}
	static class UGameplayTask_ClaimResource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_ClaimResource>();
	}
};
static_assert(alignof(UGameplayTask_ClaimResource) == 0x000008, "Wrong alignment on UGameplayTask_ClaimResource");
static_assert(sizeof(UGameplayTask_ClaimResource) == 0x000068, "Wrong size on UGameplayTask_ClaimResource");

// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (0x00A8 - 0x0068)
class UGameplayTask_SpawnActor final : public UGameplayTask
{
public:
	UMulticastInlineDelegateProperty_             Success;                                           // 0x0068(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_             DidNotSpawn;                                       // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x18];                                      // 0x0088(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AActor>                     ClassToSpawn;                                      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, TSubclassOf<class AActor> Class_0, bool bSpawnOnlyOnAuthority);

	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_SpawnActor">();
	}
	static class UGameplayTask_SpawnActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_SpawnActor>();
	}
};
static_assert(alignof(UGameplayTask_SpawnActor) == 0x000008, "Wrong alignment on UGameplayTask_SpawnActor");
static_assert(sizeof(UGameplayTask_SpawnActor) == 0x0000A8, "Wrong size on UGameplayTask_SpawnActor");
static_assert(offsetof(UGameplayTask_SpawnActor, Success) == 0x000068, "Member 'UGameplayTask_SpawnActor::Success' has a wrong offset!");
static_assert(offsetof(UGameplayTask_SpawnActor, DidNotSpawn) == 0x000078, "Member 'UGameplayTask_SpawnActor::DidNotSpawn' has a wrong offset!");
static_assert(offsetof(UGameplayTask_SpawnActor, ClassToSpawn) == 0x0000A0, "Member 'UGameplayTask_SpawnActor::ClassToSpawn' has a wrong offset!");

// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (0x0080 - 0x0068)
class UGameplayTask_WaitDelay final : public UGameplayTask
{
public:
	UMulticastInlineDelegateProperty_             OnFinish;                                          // 0x0068(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, float Time, const uint8 Priority);

	void TaskDelayDelegate__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_WaitDelay">();
	}
	static class UGameplayTask_WaitDelay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_WaitDelay>();
	}
};
static_assert(alignof(UGameplayTask_WaitDelay) == 0x000008, "Wrong alignment on UGameplayTask_WaitDelay");
static_assert(sizeof(UGameplayTask_WaitDelay) == 0x000080, "Wrong size on UGameplayTask_WaitDelay");
static_assert(offsetof(UGameplayTask_WaitDelay, OnFinish) == 0x000068, "Member 'UGameplayTask_WaitDelay::OnFinish' has a wrong offset!");

// Class GameplayTasks.GameplayTaskResource
// 0x0010 (0x0038 - 0x0028)
class UGameplayTaskResource : public UObject
{
public:
	int32                                         ManualResourceID;                                  // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8                                          AutoResourceID;                                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bManuallySetID : 1;                                // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTaskResource">();
	}
	static class UGameplayTaskResource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTaskResource>();
	}
};
static_assert(alignof(UGameplayTaskResource) == 0x000008, "Wrong alignment on UGameplayTaskResource");
static_assert(sizeof(UGameplayTaskResource) == 0x000038, "Wrong size on UGameplayTaskResource");
static_assert(offsetof(UGameplayTaskResource, ManualResourceID) == 0x000028, "Member 'UGameplayTaskResource::ManualResourceID' has a wrong offset!");
static_assert(offsetof(UGameplayTaskResource, AutoResourceID) == 0x00002C, "Member 'UGameplayTaskResource::AutoResourceID' has a wrong offset!");

}

