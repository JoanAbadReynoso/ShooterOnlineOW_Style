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
#ifdef SHOOTER_OW_STYLE_C_BaseCharacter_generated_h
#error "C_BaseCharacter.generated.h already included, missing '#pragma once' in C_BaseCharacter.h"
#endif
#define SHOOTER_OW_STYLE_C_BaseCharacter_generated_h

#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_RPC_WRAPPERS \
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


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_BaseCharacter(); \
	friend struct Z_Construct_UClass_AC_BaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AC_BaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(AC_BaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAC_BaseCharacter(); \
	friend struct Z_Construct_UClass_AC_BaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AC_BaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(AC_BaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_BaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_BaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_BaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_BaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_BaseCharacter(AC_BaseCharacter&&); \
	NO_API AC_BaseCharacter(const AC_BaseCharacter&); \
public:


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_BaseCharacter(AC_BaseCharacter&&); \
	NO_API AC_BaseCharacter(const AC_BaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_BaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_BaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_BaseCharacter)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ZoomedFOV() { return STRUCT_OFFSET(AC_BaseCharacter, ZoomedFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(AC_BaseCharacter, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__StarterWeapon() { return STRUCT_OFFSET(AC_BaseCharacter, StarterWeapon); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(AC_BaseCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(AC_BaseCharacter, WeaponAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__bDied() { return STRUCT_OFFSET(AC_BaseCharacter, bDied); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AC_BaseCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(AC_BaseCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(AC_BaseCharacter, HealthComp); }


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_15_PROLOG
#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_RPC_WRAPPERS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_INCLASS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_INCLASS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_OW_Style_Source_Shooter_OW_Style_Public_C_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
