#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Party

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Class Party.SocialChatChannel
// 0x00C0 (0x00E8 - 0x0028)
class USocialChatChannel : public UObject
{
public:
	uint8                                         Pad_28[0xC0];                                      // 0x0028(0x00C0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChannel">();
	}
	static class USocialChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChannel>();
	}
};
static_assert(alignof(USocialChatChannel) == 0x000008, "Wrong alignment on USocialChatChannel");
static_assert(sizeof(USocialChatChannel) == 0x0000E8, "Wrong size on USocialChatChannel");

// Class Party.SocialChatRoom
// 0x0010 (0x00F8 - 0x00E8)
class USocialChatRoom : public USocialChatChannel
{
public:
	uint8                                         Pad_E8[0x10];                                      // 0x00E8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatRoom">();
	}
	static class USocialChatRoom* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatRoom>();
	}
};
static_assert(alignof(USocialChatRoom) == 0x000008, "Wrong alignment on USocialChatRoom");
static_assert(sizeof(USocialChatRoom) == 0x0000F8, "Wrong size on USocialChatRoom");

// Class Party.Chatroom
// 0x0030 (0x0058 - 0x0028)
class UChatroom final : public UObject
{
public:
	class FString                                 CurrentChatRoomId;                                 // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         MaxChatRoomRetries;                                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         NumChatRoomRetries;                                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_40[0x18];                                      // 0x0040(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Chatroom">();
	}
	static class UChatroom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatroom>();
	}
};
static_assert(alignof(UChatroom) == 0x000008, "Wrong alignment on UChatroom");
static_assert(sizeof(UChatroom) == 0x000058, "Wrong size on UChatroom");
static_assert(offsetof(UChatroom, CurrentChatRoomId) == 0x000028, "Member 'UChatroom::CurrentChatRoomId' has a wrong offset!");
static_assert(offsetof(UChatroom, MaxChatRoomRetries) == 0x000038, "Member 'UChatroom::MaxChatRoomRetries' has a wrong offset!");
static_assert(offsetof(UChatroom, NumChatRoomRetries) == 0x00003C, "Member 'UChatroom::NumChatRoomRetries' has a wrong offset!");

// Class Party.SocialManager
// 0x0178 (0x01A0 - 0x0028)
class USocialManager final : public UObject
{
public:
	uint8                                         Pad_28[0x20];                                      // 0x0028(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USocialToolkit*>                 SocialToolkits;                                    // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USocialDebugTools*                      SocialDebugTools;                                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_60[0x2];                                       // 0x0060(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bLeavePartyOnDisconnect;                           // 0x0062(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_63[0x13D];                                     // 0x0063(0x013D)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialManager">();
	}
	static class USocialManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialManager>();
	}
};
static_assert(alignof(USocialManager) == 0x000008, "Wrong alignment on USocialManager");
static_assert(sizeof(USocialManager) == 0x0001A0, "Wrong size on USocialManager");
static_assert(offsetof(USocialManager, SocialToolkits) == 0x000048, "Member 'USocialManager::SocialToolkits' has a wrong offset!");
static_assert(offsetof(USocialManager, SocialDebugTools) == 0x000058, "Member 'USocialManager::SocialDebugTools' has a wrong offset!");
static_assert(offsetof(USocialManager, bLeavePartyOnDisconnect) == 0x000062, "Member 'USocialManager::bLeavePartyOnDisconnect' has a wrong offset!");

// Class Party.SocialParty
// 0x0278 (0x02A0 - 0x0028)
class alignas(0x10) USocialParty final : public UObject
{
public:
	uint8                                         Pad_28[0x30];                                      // 0x0028(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class APartyBeaconClient>         ReservationBeaconClientClass;                      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASpectatorBeaconClient>     SpectatorBeaconClientClass;                        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_68[0x10];                                      // 0x0068(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       OwningLocalUserId;                                 // 0x0078(0x0028)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                       CurrentLeaderId;                                   // 0x00A0(0x0028)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                  // 0x00C8(0x0050)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                          bEnableAutomaticPartyRejoin;                       // 0x0118(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_119[0x77];                                     // 0x0119(0x0077)(Fixing Size After Last Property [ Dumper-7 ])
	class APartyBeaconClient*                     ReservationBeaconClient;                           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_198[0x8];                                      // 0x0198(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class ASpectatorBeaconClient*                 SpectatorBeaconClient;                             // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1A8[0xF8];                                     // 0x01A8(0x00F8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialParty">();
	}
	static class USocialParty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialParty>();
	}
};
static_assert(alignof(USocialParty) == 0x000010, "Wrong alignment on USocialParty");
static_assert(sizeof(USocialParty) == 0x0002A0, "Wrong size on USocialParty");
static_assert(offsetof(USocialParty, ReservationBeaconClientClass) == 0x000058, "Member 'USocialParty::ReservationBeaconClientClass' has a wrong offset!");
static_assert(offsetof(USocialParty, SpectatorBeaconClientClass) == 0x000060, "Member 'USocialParty::SpectatorBeaconClientClass' has a wrong offset!");
static_assert(offsetof(USocialParty, OwningLocalUserId) == 0x000078, "Member 'USocialParty::OwningLocalUserId' has a wrong offset!");
static_assert(offsetof(USocialParty, CurrentLeaderId) == 0x0000A0, "Member 'USocialParty::CurrentLeaderId' has a wrong offset!");
static_assert(offsetof(USocialParty, PartyMembersById) == 0x0000C8, "Member 'USocialParty::PartyMembersById' has a wrong offset!");
static_assert(offsetof(USocialParty, bEnableAutomaticPartyRejoin) == 0x000118, "Member 'USocialParty::bEnableAutomaticPartyRejoin' has a wrong offset!");
static_assert(offsetof(USocialParty, ReservationBeaconClient) == 0x000190, "Member 'USocialParty::ReservationBeaconClient' has a wrong offset!");
static_assert(offsetof(USocialParty, SpectatorBeaconClient) == 0x0001A0, "Member 'USocialParty::SpectatorBeaconClient' has a wrong offset!");

// Class Party.PartyMember
// 0x00C8 (0x00F0 - 0x0028)
class UPartyMember final : public UObject
{
public:
	uint8                                         Pad_28[0x40];                                      // 0x0028(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialUser*                            SocialUser;                                        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_70[0x80];                                      // 0x0070(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PartyMember">();
	}
	static class UPartyMember* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMember>();
	}
};
static_assert(alignof(UPartyMember) == 0x000008, "Wrong alignment on UPartyMember");
static_assert(sizeof(UPartyMember) == 0x0000F0, "Wrong size on UPartyMember");
static_assert(offsetof(UPartyMember, SocialUser) == 0x000068, "Member 'UPartyMember::SocialUser' has a wrong offset!");

// Class Party.SocialToolkit
// 0x01A0 (0x01C8 - 0x0028)
class USocialToolkit final : public UObject
{
public:
	uint8                                         Pad_28[0x38];                                      // 0x0028(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialUser*                            LocalUser;                                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                    AllUsers;                                          // 0x0068(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_78[0x50];                                      // 0x0078(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	class ULocalPlayer*                           LocalPlayerOwner;                                  // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialChatManager*                     SocialChatManager;                                 // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_D8[0xF0];                                      // 0x00D8(0x00F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialToolkit">();
	}
	static class USocialToolkit* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialToolkit>();
	}
};
static_assert(alignof(USocialToolkit) == 0x000008, "Wrong alignment on USocialToolkit");
static_assert(sizeof(USocialToolkit) == 0x0001C8, "Wrong size on USocialToolkit");
static_assert(offsetof(USocialToolkit, LocalUser) == 0x000060, "Member 'USocialToolkit::LocalUser' has a wrong offset!");
static_assert(offsetof(USocialToolkit, AllUsers) == 0x000068, "Member 'USocialToolkit::AllUsers' has a wrong offset!");
static_assert(offsetof(USocialToolkit, LocalPlayerOwner) == 0x0000C8, "Member 'USocialToolkit::LocalPlayerOwner' has a wrong offset!");
static_assert(offsetof(USocialToolkit, SocialChatManager) == 0x0000D0, "Member 'USocialToolkit::SocialChatManager' has a wrong offset!");

// Class Party.SocialChatManager
// 0x01F8 (0x0220 - 0x0028)
class USocialChatManager final : public UObject
{
public:
	uint8                                         Pad_28[0x50];                                      // 0x0028(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                        // 0x0078(0x0050)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialChatRoom*>   ChatRoomsById;                                     // 0x00C8(0x0050)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                     // 0x0118(0x0050)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                          bEnableChatSlashCommands;                          // 0x0168(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                     // 0x0170(0x0050)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C0[0x60];                                     // 0x01C0(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatManager">();
	}
	static class USocialChatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatManager>();
	}
};
static_assert(alignof(USocialChatManager) == 0x000008, "Wrong alignment on USocialChatManager");
static_assert(sizeof(USocialChatManager) == 0x000220, "Wrong size on USocialChatManager");
static_assert(offsetof(USocialChatManager, DirectChannelsByTargetUser) == 0x000078, "Member 'USocialChatManager::DirectChannelsByTargetUser' has a wrong offset!");
static_assert(offsetof(USocialChatManager, ChatRoomsById) == 0x0000C8, "Member 'USocialChatManager::ChatRoomsById' has a wrong offset!");
static_assert(offsetof(USocialChatManager, ReadOnlyChannelsByDisplayName) == 0x000118, "Member 'USocialChatManager::ReadOnlyChannelsByDisplayName' has a wrong offset!");
static_assert(offsetof(USocialChatManager, bEnableChatSlashCommands) == 0x000168, "Member 'USocialChatManager::bEnableChatSlashCommands' has a wrong offset!");
static_assert(offsetof(USocialChatManager, GroupChannels) == 0x000170, "Member 'USocialChatManager::GroupChannels' has a wrong offset!");

// Class Party.SocialDebugTools
// 0x0060 (0x0088 - 0x0028)
class USocialDebugTools final : public UObject
{
public:
	uint8                                         Pad_28[0x60];                                      // 0x0028(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialDebugTools">();
	}
	static class USocialDebugTools* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialDebugTools>();
	}
};
static_assert(alignof(USocialDebugTools) == 0x000008, "Wrong alignment on USocialDebugTools");
static_assert(sizeof(USocialDebugTools) == 0x000088, "Wrong size on USocialDebugTools");

// Class Party.SocialGroupChannel
// 0x0068 (0x0090 - 0x0028)
class USocialGroupChannel final : public UObject
{
public:
	class USocialUser*                            SocialUser;                                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                       GroupId;                                           // 0x0030(0x0028)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                   DisplayName;                                       // 0x0058(0x0018)(NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                    Members;                                           // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_80[0x10];                                      // 0x0080(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialGroupChannel">();
	}
	static class USocialGroupChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialGroupChannel>();
	}
};
static_assert(alignof(USocialGroupChannel) == 0x000008, "Wrong alignment on USocialGroupChannel");
static_assert(sizeof(USocialGroupChannel) == 0x000090, "Wrong size on USocialGroupChannel");
static_assert(offsetof(USocialGroupChannel, SocialUser) == 0x000028, "Member 'USocialGroupChannel::SocialUser' has a wrong offset!");
static_assert(offsetof(USocialGroupChannel, GroupId) == 0x000030, "Member 'USocialGroupChannel::GroupId' has a wrong offset!");
static_assert(offsetof(USocialGroupChannel, DisplayName) == 0x000058, "Member 'USocialGroupChannel::DisplayName' has a wrong offset!");
static_assert(offsetof(USocialGroupChannel, Members) == 0x000070, "Member 'USocialGroupChannel::Members' has a wrong offset!");

// Class Party.SocialPartyChatRoom
// 0x0000 (0x00F8 - 0x00F8)
class USocialPartyChatRoom final : public USocialChatRoom
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialPartyChatRoom">();
	}
	static class USocialPartyChatRoom* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPartyChatRoom>();
	}
};
static_assert(alignof(USocialPartyChatRoom) == 0x000008, "Wrong alignment on USocialPartyChatRoom");
static_assert(sizeof(USocialPartyChatRoom) == 0x0000F8, "Wrong size on USocialPartyChatRoom");

// Class Party.SocialPrivateMessageChannel
// 0x0008 (0x00F0 - 0x00E8)
class USocialPrivateMessageChannel final : public USocialChatChannel
{
public:
	class USocialUser*                            TargetUser;                                        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialPrivateMessageChannel">();
	}
	static class USocialPrivateMessageChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPrivateMessageChannel>();
	}
};
static_assert(alignof(USocialPrivateMessageChannel) == 0x000008, "Wrong alignment on USocialPrivateMessageChannel");
static_assert(sizeof(USocialPrivateMessageChannel) == 0x0000F0, "Wrong size on USocialPrivateMessageChannel");
static_assert(offsetof(USocialPrivateMessageChannel, TargetUser) == 0x0000E8, "Member 'USocialPrivateMessageChannel::TargetUser' has a wrong offset!");

// Class Party.SocialReadOnlyChatChannel
// 0x0000 (0x00E8 - 0x00E8)
class USocialReadOnlyChatChannel final : public USocialChatChannel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialReadOnlyChatChannel">();
	}
	static class USocialReadOnlyChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialReadOnlyChatChannel>();
	}
};
static_assert(alignof(USocialReadOnlyChatChannel) == 0x000008, "Wrong alignment on USocialReadOnlyChatChannel");
static_assert(sizeof(USocialReadOnlyChatChannel) == 0x0000E8, "Wrong size on USocialReadOnlyChatChannel");

// Class Party.SocialSettings
// 0x0020 (0x0048 - 0x0028)
class USocialSettings final : public UObject
{
public:
	TArray<class FName>                           OssNamesWithEnvironmentIdPrefix;                   // 0x0028(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int32                                         DefaultMaxPartySize;                               // 0x0038(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bPreferPlatformInvites;                            // 0x003C(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bMustSendPrimaryInvites;                           // 0x003D(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UserListAutoUpdateRate;                            // 0x0040(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialSettings">();
	}
	static class USocialSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialSettings>();
	}
};
static_assert(alignof(USocialSettings) == 0x000008, "Wrong alignment on USocialSettings");
static_assert(sizeof(USocialSettings) == 0x000048, "Wrong size on USocialSettings");
static_assert(offsetof(USocialSettings, OssNamesWithEnvironmentIdPrefix) == 0x000028, "Member 'USocialSettings::OssNamesWithEnvironmentIdPrefix' has a wrong offset!");
static_assert(offsetof(USocialSettings, DefaultMaxPartySize) == 0x000038, "Member 'USocialSettings::DefaultMaxPartySize' has a wrong offset!");
static_assert(offsetof(USocialSettings, bPreferPlatformInvites) == 0x00003C, "Member 'USocialSettings::bPreferPlatformInvites' has a wrong offset!");
static_assert(offsetof(USocialSettings, bMustSendPrimaryInvites) == 0x00003D, "Member 'USocialSettings::bMustSendPrimaryInvites' has a wrong offset!");
static_assert(offsetof(USocialSettings, UserListAutoUpdateRate) == 0x000040, "Member 'USocialSettings::UserListAutoUpdateRate' has a wrong offset!");

// Class Party.SocialUser
// 0x0140 (0x0168 - 0x0028)
class USocialUser final : public UObject
{
public:
	uint8                                         Pad_28[0x140];                                     // 0x0028(0x0140)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUser">();
	}
	static class USocialUser* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUser>();
	}
};
static_assert(alignof(USocialUser) == 0x000008, "Wrong alignment on USocialUser");
static_assert(sizeof(USocialUser) == 0x000168, "Wrong size on USocialUser");

}

