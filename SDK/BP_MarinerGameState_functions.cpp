#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MarinerGameState

#include "Basic.hpp"

#include "BP_MarinerGameState_classes.hpp"
#include "BP_MarinerGameState_parameters.hpp"


namespace SDK
{

// Function BP_MarinerGameState.BP_MarinerGameState_C.OnPreroundCountdownChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TimeLeft                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxTimeToShow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldEnable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MarinerGameState_C::OnPreroundCountdownChange__DelegateSignature(int32 TimeLeft, int32 MaxTimeToShow, bool ShouldEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnPreroundCountdownChange__DelegateSignature");

	Params::BP_MarinerGameState_C_OnPreroundCountdownChange__DelegateSignature Parms{};

	Parms.TimeLeft = TimeLeft;
	Parms.MaxTimeToShow = MaxTimeToShow;
	Parms.ShouldEnable = ShouldEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnOvertimeUIBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::OnOvertimeUIBegin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnOvertimeUIBegin__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnExtraTimeChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInExtraTime_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ExtraTimeStates                         ExtraTimeState_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::OnExtraTimeChange__DelegateSignature(bool IsInExtraTime_0, ExtraTimeStates ExtraTimeState_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnExtraTimeChange__DelegateSignature");

	Params::BP_MarinerGameState_C_OnExtraTimeChange__DelegateSignature Parms{};

	Parms.IsInExtraTime_0 = IsInExtraTime_0;
	Parms.ExtraTimeState_0 = ExtraTimeState_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnExtraTimeTimerChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimerLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::OnExtraTimeTimerChange__DelegateSignature(float TimerLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnExtraTimeTimerChange__DelegateSignature");

	Params::BP_MarinerGameState_C_OnExtraTimeTimerChange__DelegateSignature Parms{};

	Parms.TimerLength = TimerLength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnClearMiniObjectiveText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::OnClearMiniObjectiveText__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnClearMiniObjectiveText__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnRoundTransitionChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MarinerGameState_C::OnRoundTransitionChange__DelegateSignature(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnRoundTransitionChange__DelegateSignature");

	Params::BP_MarinerGameState_C_OnRoundTransitionChange__DelegateSignature Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.ExecuteUbergraph_BP_MarinerGameState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::ExecuteUbergraph_BP_MarinerGameState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "ExecuteUbergraph_BP_MarinerGameState");

	Params::BP_MarinerGameState_C_ExecuteUbergraph_BP_MarinerGameState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.DebugSetActorRotationOnClientWithRotator
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Pitch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Yaw                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Roll                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::DebugSetActorRotationOnClientWithRotator(const class FString& ID, float Pitch, float Yaw, float Roll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "DebugSetActorRotationOnClientWithRotator");

	Params::BP_MarinerGameState_C_DebugSetActorRotationOnClientWithRotator Parms{};

	Parms.ID = std::move(ID);
	Parms.Pitch = Pitch;
	Parms.Yaw = Yaw;
	Parms.Roll = Roll;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.DebugSetActorRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Pitch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Yaw                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Roll                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::DebugSetActorRotation(const class FString& ID, float Pitch, float Yaw, float Roll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "DebugSetActorRotation");

	Params::BP_MarinerGameState_C_DebugSetActorRotation Parms{};

	Parms.ID = std::move(ID);
	Parms.Pitch = Pitch;
	Parms.Yaw = Yaw;
	Parms.Roll = Roll;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.DebugSetActorLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   X                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Y                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Z                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::DebugSetActorLocation(const class FString& ID, float X, float Y, float Z)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "DebugSetActorLocation");

	Params::BP_MarinerGameState_C_DebugSetActorLocation Parms{};

	Parms.ID = std::move(ID);
	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.DebugSetActorRotationOnClient
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::DebugSetActorRotationOnClient(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "DebugSetActorRotationOnClient");

	Params::BP_MarinerGameState_C_DebugSetActorRotationOnClient Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.DebugSaveClientControlRotation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::DebugSaveClientControlRotation(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "DebugSaveClientControlRotation");

	Params::BP_MarinerGameState_C_DebugSaveClientControlRotation Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.DebugSaveActorLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::DebugSaveActorLocation(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "DebugSaveActorLocation");

	Params::BP_MarinerGameState_C_DebugSaveActorLocation Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.DebugMoveActorToSavedLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::DebugMoveActorToSavedLocation(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "DebugMoveActorToSavedLocation");

	Params::BP_MarinerGameState_C_DebugMoveActorToSavedLocation Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.MulticastDisableDebugHitching
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::MulticastDisableDebugHitching()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "MulticastDisableDebugHitching");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.MulticastEnableDebugHitching
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::MulticastEnableDebugHitching()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "MulticastEnableDebugHitching");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.DisableDebugHitching
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::DisableDebugHitching()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "DisableDebugHitching");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.EnableDebugHitching
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::EnableDebugHitching()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "EnableDebugHitching");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.HitchLoop
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::HitchLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "HitchLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnExtraTimeChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInExtraTime_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ExtraTimeStates                         ExtraTimeState_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::OnExtraTimeChange_Event(bool IsInExtraTime_0, ExtraTimeStates ExtraTimeState_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnExtraTimeChange_Event");

	Params::BP_MarinerGameState_C_OnExtraTimeChange_Event Parms{};

	Parms.IsInExtraTime_0 = IsInExtraTime_0;
	Parms.ExtraTimeState_0 = ExtraTimeState_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.MulticastClearMiniObjectiveText
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::MulticastClearMiniObjectiveText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "MulticastClearMiniObjectiveText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.MulticastEnableExtraTimeTimer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   TimerLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::MulticastEnableExtraTimeTimer(bool IsEnabled, float TimerLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "MulticastEnableExtraTimeTimer");

	Params::BP_MarinerGameState_C_MulticastEnableExtraTimeTimer Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.TimerLength = TimerLength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.MulticastSetExtraTime
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInExtraTime_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ExtraTimeStates                         ExtraTimeState_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::MulticastSetExtraTime(bool IsInExtraTime_0, ExtraTimeStates ExtraTimeState_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "MulticastSetExtraTime");

	Params::BP_MarinerGameState_C_MulticastSetExtraTime Parms{};

	Parms.IsInExtraTime_0 = IsInExtraTime_0;
	Parms.ExtraTimeState_0 = ExtraTimeState_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.ServerSetExtraTime
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInExtraTime_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ExtraTimeStates                         ExtraTimeState_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::ServerSetExtraTime(bool IsInExtraTime_0, ExtraTimeStates ExtraTimeState_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "ServerSetExtraTime");

	Params::BP_MarinerGameState_C_ServerSetExtraTime Parms{};

	Parms.IsInExtraTime_0 = IsInExtraTime_0;
	Parms.ExtraTimeState_0 = ExtraTimeState_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.DisplayOvertimeUI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::DisplayOvertimeUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "DisplayOvertimeUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnMaxPreroundTimerSet
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::OnMaxPreroundTimerSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnMaxPreroundTimerSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.FinishPreroundCountdownTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::FinishPreroundCountdownTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "FinishPreroundCountdownTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.PreroundTimerUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::PreroundTimerUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "PreroundTimerUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.PreroundCountdownTimerBind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PreRoundCountdownEndTimeStamp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MarinerGameState_C::PreroundCountdownTimerBind(float PreRoundCountdownEndTimeStamp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "PreroundCountdownTimerBind");

	Params::BP_MarinerGameState_C_PreroundCountdownTimerBind Parms{};

	Parms.PreRoundCountdownEndTimeStamp = PreRoundCountdownEndTimeStamp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MarinerGameState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.ServerEnablePreroundCountdown
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimerLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNumberToShow                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldEnable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MarinerGameState_C::ServerEnablePreroundCountdown(float TimerLength, int32 MaxNumberToShow, bool ShouldEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "ServerEnablePreroundCountdown");

	Params::BP_MarinerGameState_C_ServerEnablePreroundCountdown Parms{};

	Parms.TimerLength = TimerLength;
	Parms.MaxNumberToShow = MaxNumberToShow;
	Parms.ShouldEnable = ShouldEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnRep_IsInOvertimeTransition
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::OnRep_IsInOvertimeTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnRep_IsInOvertimeTransition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnRep_IsInRoundTransition
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::OnRep_IsInRoundTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnRep_IsInRoundTransition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnRep_UpdatePreroundCountdownPayload
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::OnRep_UpdatePreroundCountdownPayload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnRep_UpdatePreroundCountdownPayload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.SetUpdatePreroundCountdownPayload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TimeLeft                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxTimeToShow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShouldEnable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MarinerGameState_C::SetUpdatePreroundCountdownPayload(int32 TimeLeft, int32 MaxTimeToShow, bool bShouldEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "SetUpdatePreroundCountdownPayload");

	Params::BP_MarinerGameState_C_SetUpdatePreroundCountdownPayload Parms{};

	Parms.TimeLeft = TimeLeft;
	Parms.MaxTimeToShow = MaxTimeToShow;
	Parms.bShouldEnable = bShouldEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.SetRoundTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsRoundTransition                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MarinerGameState_C::SetRoundTransition(bool bIsRoundTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "SetRoundTransition");

	Params::BP_MarinerGameState_C_SetRoundTransition Parms{};

	Parms.bIsRoundTransition = bIsRoundTransition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.OnRep_OnRoundTransitionPayload
// (BlueprintCallable, BlueprintEvent)

void ABP_MarinerGameState_C::OnRep_OnRoundTransitionPayload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "OnRep_OnRoundTransitionPayload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MarinerGameState.BP_MarinerGameState_C.IsRoundTransition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bIsInRoundTransition                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MarinerGameState_C::IsRoundTransition(bool* bIsInRoundTransition) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MarinerGameState_C", "IsRoundTransition");

	Params::BP_MarinerGameState_C_IsRoundTransition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInRoundTransition != nullptr)
		*bIsInRoundTransition = Parms.bIsInRoundTransition;
}

}

