// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SHOOTER_OW_STYLE_Claymore_generated_h
#error "Claymore.generated.h already included, missing '#pragma once' in Claymore.h"
#endif
#define SHOOTER_OW_STYLE_Claymore_generated_h

#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBoxBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBoxBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClaymore(); \
	friend struct Z_Construct_UClass_AClaymore_Statics; \
public: \
	DECLARE_CLASS(AClaymore, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(AClaymore)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAClaymore(); \
	friend struct Z_Construct_UClass_AClaymore_Statics; \
public: \
	DECLARE_CLASS(AClaymore, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter_OW_Style"), NO_API) \
	DECLARE_SERIALIZER(AClaymore)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClaymore(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClaymore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClaymore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClaymore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClaymore(AClaymore&&); \
	NO_API AClaymore(const AClaymore&); \
public:


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClaymore(AClaymore&&); \
	NO_API AClaymore(const AClaymore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClaymore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClaymore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClaymore)


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(AClaymore, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__ClaymoreMesh() { return STRUCT_OFFSET(AClaymore, ClaymoreMesh); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(AClaymore, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__RadialForceComp() { return STRUCT_OFFSET(AClaymore, RadialForceComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(AClaymore, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__DamageTypeSubClass() { return STRUCT_OFFSET(AClaymore, DamageTypeSubClass); }


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_14_PROLOG
#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_RPC_WRAPPERS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_INCLASS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_PRIVATE_PROPERTY_OFFSET \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_INCLASS_NO_PURE_DECLS \
	Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_OW_Style_Source_Shooter_OW_Style_Public_Claymore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
