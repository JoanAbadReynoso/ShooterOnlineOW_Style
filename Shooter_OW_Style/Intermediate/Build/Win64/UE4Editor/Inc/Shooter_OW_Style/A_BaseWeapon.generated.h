// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_OW_STYLE_A_BaseWeapon_generated_h
#error "A_BaseWeapon.generated.h already included, missing '#pragma once' in A_BaseWeapon.h"
#endif
#define SHOOTER_OW_STYLE_A_BaseWeapon_generated_h

#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrace_Statics; \
	SHOOTER_OW_STYLE_API static class UScriptStruct* StaticStruct();


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_RPC_WRAPPERS \
	virtual bool ServerShootFire_Validate(); \
	virtual void ServerShootFire_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerShootFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerShootFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerShootFire_Validate")); \
			return; \
		} \
		P_THIS->ServerShootFire_Implementation(); \
		P_NATIVE_END; \
	}


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerShootFire_Validate(); \
	virtual void ServerShootFire_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerShootFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerShootFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerShootFire_Validate")); \
			return; \
		} \
		P_THIS->ServerShootFire_Implementation(); \
		P_NATIVE_END; \
	}


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_EVENT_PARMS
#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_CALLBACK_WRAPPERS
#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAA_BaseWeapon(); \
	friend struct Z_Construct_UClass_AA_BaseWeapon_Statics; \
public: \
	DECLARE_CLASS(AA_BaseWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(AA_BaseWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAA_BaseWeapon(); \
	friend struct Z_Construct_UClass_AA_BaseWeapon_Statics; \
public: \
	DECLARE_CLASS(AA_BaseWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(AA_BaseWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AA_BaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AA_BaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AA_BaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AA_BaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AA_BaseWeapon(AA_BaseWeapon&&); \
	NO_API AA_BaseWeapon(const AA_BaseWeapon&); \
public:


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AA_BaseWeapon(AA_BaseWeapon&&); \
	NO_API AA_BaseWeapon(const AA_BaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AA_BaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AA_BaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AA_BaseWeapon)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Weapon() { return STRUCT_OFFSET(AA_BaseWeapon, SM_Weapon); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AA_BaseWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(AA_BaseWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(AA_BaseWeapon, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__PS_Muzzle() { return STRUCT_OFFSET(AA_BaseWeapon, PS_Muzzle); } \
	FORCEINLINE static uint32 __PPO__PS_ImpactActor() { return STRUCT_OFFSET(AA_BaseWeapon, PS_ImpactActor); } \
	FORCEINLINE static uint32 __PPO__PS_DefaultActor() { return STRUCT_OFFSET(AA_BaseWeapon, PS_DefaultActor); } \
	FORCEINLINE static uint32 __PPO__PS_TracerEffect() { return STRUCT_OFFSET(AA_BaseWeapon, PS_TracerEffect); } \
	FORCEINLINE static uint32 __PPO__FireCameraShake() { return STRUCT_OFFSET(AA_BaseWeapon, FireCameraShake); } \
	FORCEINLINE static uint32 __PPO__baseDamage() { return STRUCT_OFFSET(AA_BaseWeapon, baseDamage); } \
	FORCEINLINE static uint32 __PPO__RateOfFire() { return STRUCT_OFFSET(AA_BaseWeapon, RateOfFire); } \
	FORCEINLINE static uint32 __PPO__RifleShotSound() { return STRUCT_OFFSET(AA_BaseWeapon, RifleShotSound); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(AA_BaseWeapon, HitScanTrace); }


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_33_PROLOG \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_EVENT_PARMS


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_RPC_WRAPPERS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_CALLBACK_WRAPPERS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_INCLASS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_CALLBACK_WRAPPERS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_INCLASS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_OW_Style_Source_Shooter_OW_Style_Public_A_BaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
