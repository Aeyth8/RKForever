#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewsMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewsMenu.NewsMenu_C
// 0x0048 (0x0528 - 0x04E0)
class UNewsMenu_C final : public UMarinerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                         ContentRichTextBlock;                              // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderFrame;                                       // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeaderText;                                        // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_79;                                          // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_168;                                         // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TextOverlay;                                       // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerScrollBox*                      TextScrollBox;                                     // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NewsMenu(int32 EntryPoint);
	void Construct();
	void SetText(const class FText& Header, const class FText& Description);
	void Handle_Aspect_Ratio_Change_(class UOverlaySlot* NewsWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewsMenu_C">();
	}
	static class UNewsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewsMenu_C>();
	}
};
static_assert(alignof(UNewsMenu_C) == 0x000008, "Wrong alignment on UNewsMenu_C");
static_assert(sizeof(UNewsMenu_C) == 0x000528, "Wrong size on UNewsMenu_C");
static_assert(offsetof(UNewsMenu_C, UberGraphFrame) == 0x0004E0, "Member 'UNewsMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNewsMenu_C, ContentRichTextBlock) == 0x0004E8, "Member 'UNewsMenu_C::ContentRichTextBlock' has a wrong offset!");
static_assert(offsetof(UNewsMenu_C, HeaderFrame) == 0x0004F0, "Member 'UNewsMenu_C::HeaderFrame' has a wrong offset!");
static_assert(offsetof(UNewsMenu_C, HeaderText) == 0x0004F8, "Member 'UNewsMenu_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UNewsMenu_C, Image_79) == 0x000500, "Member 'UNewsMenu_C::Image_79' has a wrong offset!");
static_assert(offsetof(UNewsMenu_C, Image_168) == 0x000508, "Member 'UNewsMenu_C::Image_168' has a wrong offset!");
static_assert(offsetof(UNewsMenu_C, Material) == 0x000510, "Member 'UNewsMenu_C::Material' has a wrong offset!");
static_assert(offsetof(UNewsMenu_C, TextOverlay) == 0x000518, "Member 'UNewsMenu_C::TextOverlay' has a wrong offset!");
static_assert(offsetof(UNewsMenu_C, TextScrollBox) == 0x000520, "Member 'UNewsMenu_C::TextScrollBox' has a wrong offset!");

}

