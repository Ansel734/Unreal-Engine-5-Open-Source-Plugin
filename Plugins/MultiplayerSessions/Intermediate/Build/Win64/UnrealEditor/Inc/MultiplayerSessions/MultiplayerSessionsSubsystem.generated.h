// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSIONS_MultiplayerSessionsSubsystem_generated_h
#error "MultiplayerSessionsSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionsSubsystem.h"
#endif
#define MULTIPLAYERSESSIONS_MultiplayerSessionsSubsystem_generated_h

#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_14_DELEGATE \
struct _Script_MultiplayerSessions_eventMultplyerOnCreateSessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultplyerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultplyerOnCreateSessionComplete, bool bWasSuccessful) \
{ \
	_Script_MultiplayerSessions_eventMultplyerOnCreateSessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultplyerOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_17_DELEGATE \
struct _Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultiplayerOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnDestroySessionComplete, bool bWasSuccessful) \
{ \
	_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultiplayerOnDestroySessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_18_DELEGATE \
struct _Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultiplayerOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnStartSessionComplete, bool bWasSuccessful) \
{ \
	_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultiplayerOnStartSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_SPARSE_DATA
#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_RPC_WRAPPERS
#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionsSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionsSubsystem)


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionsSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionsSubsystem)


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayerSessionsSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiplayerSessionsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionsSubsystem(UMultiplayerSessionsSubsystem&&); \
	NO_API UMultiplayerSessionsSubsystem(const UMultiplayerSessionsSubsystem&); \
public:


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionsSubsystem(UMultiplayerSessionsSubsystem&&); \
	NO_API UMultiplayerSessionsSubsystem(const UMultiplayerSessionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionsSubsystem)


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_24_PROLOG
#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_SPARSE_DATA \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_RPC_WRAPPERS \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_INCLASS \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_SPARSE_DATA \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<class UMultiplayerSessionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
