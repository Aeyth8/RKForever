#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericGraphRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GenericGraphRuntime.GenericGraph
// 0x0068 (0x0090 - 0x0028)
class UGenericGraph final : public UObject
{
public:
	class FString                                 Name_0;                                            // 0x0028(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGenericGraphNode>          NodeType;                                          // 0x0038(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGenericGraphEdge>          EdgeType;                                          // 0x0040(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  GraphTags;                                         // 0x0048(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UGenericGraphNode*>              RootNodes;                                         // 0x0068(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UGenericGraphNode*>              AllNodes;                                          // 0x0078(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bEdgeEnabled;                                      // 0x0088(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetNodesByLevel(int32 Level, TArray<class UGenericGraphNode*>* Nodes);
	void Print(bool ToConsole, bool ToScreen);

	int32 GetLevelNum() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenericGraph">();
	}
	static class UGenericGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenericGraph>();
	}
};
static_assert(alignof(UGenericGraph) == 0x000008, "Wrong alignment on UGenericGraph");
static_assert(sizeof(UGenericGraph) == 0x000090, "Wrong size on UGenericGraph");
static_assert(offsetof(UGenericGraph, Name_0) == 0x000028, "Member 'UGenericGraph::Name_0' has a wrong offset!");
static_assert(offsetof(UGenericGraph, NodeType) == 0x000038, "Member 'UGenericGraph::NodeType' has a wrong offset!");
static_assert(offsetof(UGenericGraph, EdgeType) == 0x000040, "Member 'UGenericGraph::EdgeType' has a wrong offset!");
static_assert(offsetof(UGenericGraph, GraphTags) == 0x000048, "Member 'UGenericGraph::GraphTags' has a wrong offset!");
static_assert(offsetof(UGenericGraph, RootNodes) == 0x000068, "Member 'UGenericGraph::RootNodes' has a wrong offset!");
static_assert(offsetof(UGenericGraph, AllNodes) == 0x000078, "Member 'UGenericGraph::AllNodes' has a wrong offset!");
static_assert(offsetof(UGenericGraph, bEdgeEnabled) == 0x000088, "Member 'UGenericGraph::bEdgeEnabled' has a wrong offset!");

// Class GenericGraphRuntime.GenericGraphEdge
// 0x0018 (0x0040 - 0x0028)
class UGenericGraphEdge : public UObject
{
public:
	class UGenericGraph*                          Graph;                                             // 0x0028(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGenericGraphNode*                      StartNode;                                         // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGenericGraphNode*                      EndNode;                                           // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class UGenericGraph* GetGraph() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenericGraphEdge">();
	}
	static class UGenericGraphEdge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenericGraphEdge>();
	}
};
static_assert(alignof(UGenericGraphEdge) == 0x000008, "Wrong alignment on UGenericGraphEdge");
static_assert(sizeof(UGenericGraphEdge) == 0x000040, "Wrong size on UGenericGraphEdge");
static_assert(offsetof(UGenericGraphEdge, Graph) == 0x000028, "Member 'UGenericGraphEdge::Graph' has a wrong offset!");
static_assert(offsetof(UGenericGraphEdge, StartNode) == 0x000030, "Member 'UGenericGraphEdge::StartNode' has a wrong offset!");
static_assert(offsetof(UGenericGraphEdge, EndNode) == 0x000038, "Member 'UGenericGraphEdge::EndNode' has a wrong offset!");

// Class GenericGraphRuntime.GenericGraphNode
// 0x0078 (0x00A0 - 0x0028)
class UGenericGraphNode : public UObject
{
public:
	class UGenericGraph*                          Graph;                                             // 0x0028(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGenericGraphNode*>              ParentNodes;                                       // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UGenericGraphNode*>              ChildrenNodes;                                     // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class UGenericGraphNode*, class UGenericGraphEdge*> Edges;                                             // 0x0050(0x0050)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	class UGenericGraphEdge* GetEdge(class UGenericGraphNode* ChildNode);

	class FText GetDescription() const;
	class UGenericGraph* GetGraph() const;
	bool IsLeafNode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenericGraphNode">();
	}
	static class UGenericGraphNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenericGraphNode>();
	}
};
static_assert(alignof(UGenericGraphNode) == 0x000008, "Wrong alignment on UGenericGraphNode");
static_assert(sizeof(UGenericGraphNode) == 0x0000A0, "Wrong size on UGenericGraphNode");
static_assert(offsetof(UGenericGraphNode, Graph) == 0x000028, "Member 'UGenericGraphNode::Graph' has a wrong offset!");
static_assert(offsetof(UGenericGraphNode, ParentNodes) == 0x000030, "Member 'UGenericGraphNode::ParentNodes' has a wrong offset!");
static_assert(offsetof(UGenericGraphNode, ChildrenNodes) == 0x000040, "Member 'UGenericGraphNode::ChildrenNodes' has a wrong offset!");
static_assert(offsetof(UGenericGraphNode, Edges) == 0x000050, "Member 'UGenericGraphNode::Edges' has a wrong offset!");

}

