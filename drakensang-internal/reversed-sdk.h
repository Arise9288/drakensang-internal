#pragma once
#include <iostream>
#include "core.h"

// Created with ReClass.NET 1.2 by KN4CK3R

class CameraFromZoom
{
public:
	char pad_0000[24]; //0x0000
	float N00000052; //0x0018
	float zoomSpeed; //0x001C
	float currentZoom; //0x0020
	float targetZoom; //0x0024
	float minZoom; //0x0028
	float maxZoom; //0x002C
	float fogAmount; //0x0030
	float cameraRotX; //0x0034
	float cameraRotY; //0x0038
	float FOV; //0x003C
	float coordinateOffsetFromPlayerX; //0x0040
	float coordinateOffsetFromPlayerY; //0x0044
	char pad_0048[8]; //0x0048
	float N00000059; //0x0050
	float N00000092; //0x0054
	float N0000005A; //0x0058
	float N00000094; //0x005C
	float N0000005B; //0x0060
	float N00000096; //0x0064
	float N0000005C; //0x0068
	float N00000098; //0x006C
	float N0000005D; //0x0070
	float N0000009A; //0x0074
	char pad_0078[8]; //0x0078
	float N00000071; //0x0080
	float N000000A1; //0x0084
	float N00000072; //0x0088
	float N000000A3; //0x008C
	float N00000073; //0x0090
	float N000000A5; //0x0094
	float N00000074; //0x0098
	float N000000A7; //0x009C
	char pad_00A0[224]; //0x00A0
}; //Size: 0x0180

class Camera
{
public:
	char pad_0008[104]; //0x0008
	float N000000BB; //0x0070
	float N00000139; //0x0074
	float N000000BC; //0x0078
	float N0000013B; //0x007C
	float N000000BD; //0x0080
	float N0000013D; //0x0084
	float N000000BE; //0x0088
	float N0000013F; //0x008C
	float N000000BF; //0x0090
	float N00000141; //0x0094
	float N000000C0; //0x0098
	float N00000143; //0x009C
	char pad_00A0[8]; //0x00A0
	float N000000C2; //0x00A8
	float N0000014B; //0x00AC
	Vector4 N000000C3; //0x00B0
	Vector4 CameraCoords; //0x00C0
	char pad_00D0[952]; //0x00D0

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
	virtual void Function10();
	virtual void Function11();
	virtual void Function12();
	virtual void Function13();
	virtual void Function14();
	virtual void Function15();
	virtual void Function16();
	virtual void Function17();
	virtual void Function18();
	virtual void Function19();
	virtual void Function20();
	virtual void Function21();
	virtual void Function22();
	virtual void Function23();
}; //Size: 0x0488

class GameMonster
{
public:
	char pad_0008[40]; //0x0008
	class ContainerList* containerPtr; //0x0030
	class ClientGameWorld* clientGameWorldPtr; //0x0038
	char pad_0040[16]; //0x0040
	class N00000659* observerPtr; //0x0050
	char pad_0058[184]; //0x0058
	class ItemTemplate* N00000169; //0x0110
	char pad_0118[136]; //0x0118
	char* model; //0x01A0
	char* lastUsedSpell; //0x01A8
	char pad_01B0[128]; //0x01B0
	char* araSpellName; //0x0230
	char pad_0238[432]; //0x0238
	char playerName[8]; //0x03E8
	char pad_03F0[56]; //0x03F0
	char guildName[8]; //0x0428
	char pad_0430[352]; //0x0430
	char* npcName; //0x0590
	char pad_0598[552]; //0x0598

	virtual void Initializer();
	virtual void Function1();
	virtual void Destructor();
	virtual void Setup();
	virtual void Function4();
	virtual void SetupSkillTemplates();
	virtual void OnClientOccurs();
	virtual void Function7();
	virtual void Function8();
}; //Size: 0x07C0

class ContainerList
{
public:
	class ActorAttributeModule* healthContainerPtr; //0x0000
	class ActorMovementModule* coordContainerPtr; //0x0008
	class ActorStatusEffectModule* statusEffectPtr; //0x0010
	char pad_0018[128]; //0x0018
}; //Size: 0x0098

class ActorMovementModule
{
public:
	char pad_0008[24]; //0x0008
	Vector4 coords; //0x0020
	float speed; //0x0030
	float direction1; //0x0034
	float direction2; //0x0038
	char pad_003C[36]; //0x003C
	float something; //0x0060
	char pad_0064[4]; //0x0064
	float something2; //0x0068
	char pad_006C[4]; //0x006C
	float something3; //0x0070
	char pad_0074[124]; //0x0074

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void SupplyMovementState();
}; //Size: 0x00F0

class ActorAttributeModule
{
public:
	char pad_0008[36]; //0x0008
	float currentHealth; //0x002C
	char pad_0030[4]; //0x0030
	float currentSkillResource; //0x0034
	char pad_0038[60]; //0x0038
	float movementSpeedPrimaryModifier; //0x0074
	char pad_0078[8]; //0x0078
	float movementSpeedAbsoluteModifier; //0x0080
	char pad_0084[64]; //0x0084
	float primaryAttackSpeed; //0x00C4
	char pad_00C8[8]; //0x00C8
	float attackSpeedAbsoluteModifier; //0x00D0
	char pad_00D4[68]; //0x00D4
	float maxHealth; //0x0118
	char pad_011C[236]; //0x011C
	float maxSkillResource; //0x0208
	char pad_020C[56]; //0x020C

	virtual void Function0();
	virtual void Function1();
	virtual void Destructor();
	virtual void Setup();
	virtual void Function4();
	virtual void Function5();
	virtual void GetCurrentHealthPointsPercentage();
	virtual void GetCurrentSkillResourcePercentage();
}; //Size: 0x0244

class ActorStatusEffectModule
{
public:
	char pad_0008[64]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0048

class ClientGameWorld
{
public:
	char pad_0008[256]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0108

class N00000659
{
public:
	class ClientActorObserver* observerPtr; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048

class ClientActorObserver
{
public:
	char pad_0008[64]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void OnAttributeUpdate();
	virtual void Function4();
	virtual void Function5();
	virtual void OnHealthPointsChanged();
	virtual void OnSkillResourceChanged();
	virtual void Function8();
	virtual void Function9();
	virtual void Function10();
	virtual void Function11();
	virtual void Function12();
	virtual void Function13();
	virtual void Function14();
	virtual void Function15();
	virtual void Function16();
	virtual void Function17();
	virtual void Function18();
	virtual void Function19();
	virtual void Function20();
	virtual void Function21();
	virtual void Function22();
}; //Size: 0x0048

class N000006E8
{
public:
	char pad_0008[64]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0048

class N00000721
{
public:
	char pad_0008[64]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0048

class Array
{
public:
	char pad_0000[4]; //0x0000
	uint32_t maxSize; //0x0004
	uint32_t currentSize; //0x0008
	char pad_000C[4]; //0x000C
	class GameMonster* (*elements)[28]; //0x0010
}; //Size: 0x0018

class ClientGameWorld
{
public:
	char pad_0008[16]; //0x0008
	class N0000084B* functionNames; //0x0018
	char pad_0020[80]; //0x0020
	uint64_t tick; //0x0070
	class TaskScheduler* taskScheduler; //0x0078
	class Array areaSkillShotList; //0x0080
	char pad_0098[8]; //0x0098
	class Array directionalSkillShotList; //0x00A0
	char pad_00B8[8]; //0x00B8
	class Array playerList; //0x00C0
	char pad_00D8[48]; //0x00D8
	class Array npcList; //0x0108
	char pad_0120[48]; //0x0120
	class Array monsterList; //0x0150
	char pad_0168[120]; //0x0168
	class Array interactableItemList; //0x01E0
	char pad_01F8[48]; //0x01F8
	class Array droppedItemList; //0x0228
	char pad_0240[1072]; //0x0240
	class GamePlayer* gamePlayer_670; //0x0670
	class Entity* gameEntity; //0x0678
	char pad_0680[40]; //0x0680
	class Array array6A8; //0x06A8
	char pad_06C0[512]; //0x06C0

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
	virtual void Function10();
	virtual void RemovePlayer();
	virtual void NewNPC();
	virtual void RemoveNPC();
	virtual void NewMonster();
	virtual void RemoveMonster();
	virtual void Function16();
	virtual void Function17();
	virtual void Function18();
	virtual void Function19();
	virtual void Function20();
	virtual void Function21();
	virtual void NewItem();
	virtual void RemoveItem();
	virtual void Function24();
	virtual void NewProp();
	virtual void RemoveProp();
	virtual void NewDestroyable();
	virtual void RemoveDestroyable();
	virtual void NewTrap();
	virtual void RemoveTrap();
	virtual void Function31();
	virtual void NewLocationEffect();
	virtual void RemoveLocationEffect();
	virtual void Function34();
	virtual void Function35();
	virtual void Function36();
	virtual void Function37();
	virtual void Function38();
	virtual void Function39();
	virtual void Function40();
	virtual void HandleSkillResourceChange();
	virtual void Function42();
	virtual void Function43();
	virtual void HandleBeginDeath();
	virtual void Function45();
	virtual void SomethingWithCursor();
	virtual void Function47();
	virtual void Function48();
	virtual void Function49();
	virtual void Function50();
	virtual void Function51();
	virtual void GetPropPickingRange();
	virtual void Function53();
	virtual void GetNpcPickingRange();
	virtual void Function55();
	virtual void Function56();
	virtual void Function57();
	virtual void Function58();
	virtual void Function59();
	virtual void Function60();
	virtual void Function61();
	virtual void Function62();
	virtual void Function63();
	virtual void Function64();
	virtual void Function65();
	virtual void Function66();
	virtual void Function67();
	virtual void Function68();
	virtual void Function69();
	virtual void RegisterPlayer();
	virtual void UnRegisterPlayer();
	virtual void RegisterNpc();
	virtual void UnregisterNpc();
	virtual void RegisterMonster();
	virtual void UnregisterMonster();
	virtual void RegisterDestroyable();
	virtual void UnregisterDestroyable();
	virtual void RegisterItem();
	virtual void Function79();
	virtual void RegisterProp();
	virtual void UnregisterProp();
	virtual void RegisterTrap();
	virtual void Function83();
	virtual void RegisterLocationEffect();
	virtual void UnregisterLocationEffect();
	virtual void Function86();
}; //Size: 0x08C0

class TaskScheduler
{
public:
	char pad_0008[64]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0048

class N000007BD
{
public:
	char pad_0008[8]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
	virtual void Function10();
}; //Size: 0x0010

class GamePlayer
{
public:
	char pad_0008[64]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0048

class Entity
{
public:
	char pad_0008[64]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0048

class N000006A5
{
public:
	class N00000723* N000006A6; //0x0000
	char pad_0008[320]; //0x0008
}; //Size: 0x0148

class N00000723
{
public:
	char pad_0008[64]; //0x0008

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0048

class ItemTemplate
{
public:
	char pad_0008[8]; //0x0008
	char* templateName; //0x0010
	char* description; //0x0018
	char* icon; //0x0020
	char* N00000889; //0x0028
	char* itemType; //0x0030
	char* N0000088B; //0x0038
	char* N0000088C; //0x0040
	char* N00000898; //0x0048
	char* N00000899; //0x0050
	char* N0000089A; //0x0058
	char* N0000089B; //0x0060
	char pad_0068[232]; //0x0068

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0150