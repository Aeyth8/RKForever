#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractiveToolsFramework

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum InteractiveToolsFramework.EInputCaptureState
// NumValues: 0x0005
enum class EInputCaptureState : uint8
{
	Begin                                    = 1,
	Continue                                 = 2,
	End                                      = 3,
	Ignore                                   = 4,
	EInputCaptureState_MAX                   = 5,
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
// NumValues: 0x0003
enum class EInputCaptureRequestType : uint8
{
	Begin                                    = 1,
	Ignore                                   = 2,
	EInputCaptureRequestType_MAX             = 3,
};

// Enum InteractiveToolsFramework.EInputCaptureSide
// NumValues: 0x0006
enum class EInputCaptureSide : uint8
{
	None                                     = 0,
	Left                                     = 1,
	Right                                    = 2,
	Both                                     = 3,
	Any                                      = 99,
	EInputCaptureSide_MAX                    = 100,
};

// Enum InteractiveToolsFramework.EInputDevices
// NumValues: 0x0009
enum class EInputDevices : uint16
{
	None                                     = 0,
	Keyboard                                 = 1,
	Mouse                                    = 2,
	Gamepad                                  = 4,
	OculusTouch                              = 8,
	HTCViveWands                             = 16,
	AnySpatialDevice                         = 24,
	TabletFingers                            = 1024,
	EInputDevices_MAX                        = 1025,
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
// NumValues: 0x000F
enum class ETransformGizmoSubElements : uint16
{
	None                                     = 0,
	TranslateAxisX                           = 1,
	TranslateAxisY                           = 2,
	TranslateAxisZ                           = 4,
	TranslateAllAxes                         = 7,
	TranslatePlaneXY                         = 8,
	TranslatePlaneXZ                         = 16,
	TranslatePlaneYZ                         = 32,
	TranslateAllPlanes                       = 56,
	RotateAxisX                              = 64,
	RotateAxisY                              = 128,
	RotateAxisZ                              = 256,
	RotateAllAxes                            = 448,
	StanedardTranslateRotate                 = 511,
	ETransformGizmoSubElements_MAX           = 512,
};

// Enum InteractiveToolsFramework.EToolSide
// NumValues: 0x0004
enum class EToolSide : uint8
{
	Left                                     = 1,
	Mouse                                    = 1,
	Right                                    = 2,
	EToolSide_MAX                            = 3,
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
// NumValues: 0x0005
enum class ESelectedObjectsModificationType : uint8
{
	Replace                                  = 0,
	Add                                      = 1,
	Remove                                   = 2,
	Clear                                    = 3,
	ESelectedObjectsModificationType_MAX     = 4,
};

// Enum InteractiveToolsFramework.EToolMessageLevel
// NumValues: 0x0006
enum class EToolMessageLevel : uint8
{
	Internal                                 = 0,
	UserMessage                              = 1,
	UserNotification                         = 2,
	UserWarning                              = 3,
	UserError                                = 4,
	EToolMessageLevel_MAX                    = 5,
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
// NumValues: 0x0003
enum class EToolContextCoordinateSystem : uint8
{
	World                                    = 0,
	Local                                    = 1,
	EToolContextCoordinateSystem_MAX         = 2,
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
// NumValues: 0x0002
enum class EStandardToolContextMaterials : uint8
{
	VertexColorMaterial                      = 1,
	EStandardToolContextMaterials_MAX        = 2,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
// NumValues: 0x0005
enum class ESceneSnapQueryTargetType : uint8
{
	None                                     = 0,
	MeshVertex                               = 1,
	MeshEdge                                 = 2,
	All                                      = 3,
	ESceneSnapQueryTargetType_MAX            = 4,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
// NumValues: 0x0002
enum class ESceneSnapQueryType : uint8
{
	Position                                 = 1,
	ESceneSnapQueryType_MAX                  = 2,
};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// 0x0020 (0x0020 - 0x0000)
struct FBehaviorInfo final
{
public:
	class UInputBehavior*                         Behavior;                                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x18];                                       // 0x0008(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBehaviorInfo) == 0x000008, "Wrong alignment on FBehaviorInfo");
static_assert(sizeof(FBehaviorInfo) == 0x000020, "Wrong size on FBehaviorInfo");
static_assert(offsetof(FBehaviorInfo, Behavior) == 0x000000, "Member 'FBehaviorInfo::Behavior' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.InputRayHit
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FInputRayHit final
{
public:
	uint8                                         Pad_0[0x28];                                       // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInputRayHit) == 0x000008, "Wrong alignment on FInputRayHit");
static_assert(sizeof(FInputRayHit) == 0x000028, "Wrong size on FInputRayHit");

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// 0x0030 (0x0030 - 0x0000)
struct alignas(0x08) FActiveGizmo final
{
public:
	uint8                                         Pad_0[0x30];                                       // 0x0000(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActiveGizmo) == 0x000008, "Wrong alignment on FActiveGizmo");
static_assert(sizeof(FActiveGizmo) == 0x000030, "Wrong size on FActiveGizmo");

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// 0x0008 (0x0008 - 0x0000)
struct FGizmoFloatParameterChange final
{
public:
	float                                         InitialValue;                                      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentValue;                                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGizmoFloatParameterChange) == 0x000004, "Wrong alignment on FGizmoFloatParameterChange");
static_assert(sizeof(FGizmoFloatParameterChange) == 0x000008, "Wrong size on FGizmoFloatParameterChange");
static_assert(offsetof(FGizmoFloatParameterChange, InitialValue) == 0x000000, "Member 'FGizmoFloatParameterChange::InitialValue' has a wrong offset!");
static_assert(offsetof(FGizmoFloatParameterChange, CurrentValue) == 0x000004, "Member 'FGizmoFloatParameterChange::CurrentValue' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// 0x0010 (0x0010 - 0x0000)
struct FGizmoVec2ParameterChange final
{
public:
	struct FVector2D                              InitialValue;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              CurrentValue;                                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGizmoVec2ParameterChange) == 0x000004, "Wrong alignment on FGizmoVec2ParameterChange");
static_assert(sizeof(FGizmoVec2ParameterChange) == 0x000010, "Wrong size on FGizmoVec2ParameterChange");
static_assert(offsetof(FGizmoVec2ParameterChange, InitialValue) == 0x000000, "Member 'FGizmoVec2ParameterChange::InitialValue' has a wrong offset!");
static_assert(offsetof(FGizmoVec2ParameterChange, CurrentValue) == 0x000008, "Member 'FGizmoVec2ParameterChange::CurrentValue' has a wrong offset!");

}

