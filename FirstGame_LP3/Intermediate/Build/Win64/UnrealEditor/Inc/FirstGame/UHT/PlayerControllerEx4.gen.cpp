// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/Player/PlayerControllerEx4.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerEx4() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FIRSTGAME_API UClass* Z_Construct_UClass_APlayerEx4Controller();
	FIRSTGAME_API UClass* Z_Construct_UClass_APlayerEx4Controller_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References
	void APlayerEx4Controller::StaticRegisterNativesAPlayerEx4Controller()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerEx4Controller);
	UClass* Z_Construct_UClass_APlayerEx4Controller_NoRegister()
	{
		return APlayerEx4Controller::StaticClass();
	}
	struct Z_Construct_UClass_APlayerEx4Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerEx4Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerEx4Controller_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerEx4Controller_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom Player Controller for handling input and player movement\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/PlayerControllerEx4.h" },
		{ "ModuleRelativePath", "Player/PlayerControllerEx4.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Player Controller for handling input and player movement" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerEx4Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerEx4Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerEx4Controller_Statics::ClassParams = {
		&APlayerEx4Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerEx4Controller_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerEx4Controller_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APlayerEx4Controller()
	{
		if (!Z_Registration_Info_UClass_APlayerEx4Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerEx4Controller.OuterSingleton, Z_Construct_UClass_APlayerEx4Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerEx4Controller.OuterSingleton;
	}
	template<> FIRSTGAME_API UClass* StaticClass<APlayerEx4Controller>()
	{
		return APlayerEx4Controller::StaticClass();
	}
	APlayerEx4Controller::APlayerEx4Controller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerEx4Controller);
	APlayerEx4Controller::~APlayerEx4Controller() {}
	struct Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerControllerEx4_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerControllerEx4_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerEx4Controller, APlayerEx4Controller::StaticClass, TEXT("APlayerEx4Controller"), &Z_Registration_Info_UClass_APlayerEx4Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerEx4Controller), 1876399744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerControllerEx4_h_41106823(TEXT("/Script/FirstGame"),
		Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerControllerEx4_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerControllerEx4_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
