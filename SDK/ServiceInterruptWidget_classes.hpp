#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServiceInterruptWidget

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ServiceInterruptWidget.ServiceInterruptWidget_C
// 0x0008 (0x0448 - 0x0440)
class UServiceInterruptWidget_C final : public UMarinerServiceInterruptWidget
{
public:
	class ULoadingSpinner_Simplified_C*           LoadingSpinner_Simplified;                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ServiceInterruptWidget_C">();
	}
	static class UServiceInterruptWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UServiceInterruptWidget_C>();
	}
};
static_assert(alignof(UServiceInterruptWidget_C) == 0x000008, "Wrong alignment on UServiceInterruptWidget_C");
static_assert(sizeof(UServiceInterruptWidget_C) == 0x000448, "Wrong size on UServiceInterruptWidget_C");
static_assert(offsetof(UServiceInterruptWidget_C, LoadingSpinner_Simplified) == 0x000440, "Member 'UServiceInterruptWidget_C::LoadingSpinner_Simplified' has a wrong offset!");

}

