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
#ifdef SHOOTER_OW_STYLE_ExplosiveBarrel_generated_h
#error "ExplosiveBarrel.generated.h already included, missing '#pragma once' in ExplosiveBarrel.h"
#endif
#define SHOOTER_OW_STYLE_ExplosiveBarrel_generated_h

#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveBarrel(); \
	friend struct Z_Construct_UClass_AExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(AExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveBarrel)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAExplosiveBarrel(); \
	friend struct Z_Construct_UClass_AExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(AExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveBarrel)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveBarrel(AExplosiveBarrel&&); \
	NO_API AExplosiveBarrel(const AExplosiveBarrel&); \
public:


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveBarrel(AExplosiveBarrel&&); \
	NO_API AExplosiveBarrel(const AExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveBarrel)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(AExplosiveBarrel, HealthComp); } \
	FORCEINLINE static uint32 __PPO__BarrelMesh() { return STRUCT_OFFSET(AExplosiveBarrel, BarrelMesh); } \
	FORCEINLINE static uint32 __PPO__RadialForceComp() { return STRUCT_OFFSET(AExplosiveBarrel, RadialForceComp); } \
	FORCEINLINE static uint32 __PPO__DamageTypeSubClass() { return STRUCT_OFFSET(AExplosiveBarrel, DamageTypeSubClass); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(AExplosiveBarrel, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__ExplosionImpulse() { return STRUCT_OFFSET(AExplosiveBarrel, ExplosionImpulse); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(AExplosiveBarrel, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplodeMaterial() { return STRUCT_OFFSET(AExplosiveBarrel, ExplodeMaterial); }


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_15_PROLOG
#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_RPC_WRAPPERS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_INCLASS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_INCLASS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_OW_Style_Source_Shooter_OW_Style_Public_ExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
