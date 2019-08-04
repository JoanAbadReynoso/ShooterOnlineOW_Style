// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef SHOOTER_OW_STYLE_TrackerBot_generated_h
#error "TrackerBot.generated.h already included, missing '#pragma once' in TrackerBot.h"
#endif
#define SHOOTER_OW_STYLE_TrackerBot_generated_h

#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwningHealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwningHealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrackerBot(); \
	friend struct Z_Construct_UClass_ATrackerBot_Statics; \
public: \
	DECLARE_CLASS(ATrackerBot, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(ATrackerBot)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATrackerBot(); \
	friend struct Z_Construct_UClass_ATrackerBot_Statics; \
public: \
	DECLARE_CLASS(ATrackerBot, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(ATrackerBot)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrackerBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrackerBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrackerBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrackerBot(ATrackerBot&&); \
	NO_API ATrackerBot(const ATrackerBot&); \
public:


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrackerBot(ATrackerBot&&); \
	NO_API ATrackerBot(const ATrackerBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrackerBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrackerBot)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ATrackerBot, MeshComp); } \
	FORCEINLINE static uint32 __PPO__MovementForce() { return STRUCT_OFFSET(ATrackerBot, MovementForce); } \
	FORCEINLINE static uint32 __PPO__RequiredDistanceToTarget() { return STRUCT_OFFSET(ATrackerBot, RequiredDistanceToTarget); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ATrackerBot, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__explosionRadius() { return STRUCT_OFFSET(ATrackerBot, explosionRadius); } \
	FORCEINLINE static uint32 __PPO__explosionDamage() { return STRUCT_OFFSET(ATrackerBot, explosionDamage); } \
	FORCEINLINE static uint32 __PPO__SelfDamageInterval() { return STRUCT_OFFSET(ATrackerBot, SelfDamageInterval); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(ATrackerBot, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ATrackerBot, SphereComp); } \
	FORCEINLINE static uint32 __PPO__ExplossionEffect() { return STRUCT_OFFSET(ATrackerBot, ExplossionEffect); } \
	FORCEINLINE static uint32 __PPO__SelfDestructSound() { return STRUCT_OFFSET(ATrackerBot, SelfDestructSound); } \
	FORCEINLINE static uint32 __PPO__ExplodedSound() { return STRUCT_OFFSET(ATrackerBot, ExplodedSound); }


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_16_PROLOG
#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_RPC_WRAPPERS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_INCLASS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_INCLASS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_OW_Style_Source_Shooter_OW_Style_Public_TrackerBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
