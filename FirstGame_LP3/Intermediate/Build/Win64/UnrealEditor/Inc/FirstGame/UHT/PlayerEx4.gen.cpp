// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/Player/PlayerEx4.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerEx4() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_APlayerEx4();
	FIRSTGAME_API UClass* Z_Construct_UClass_APlayerEx4_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References
	void APlayerEx4::StaticRegisterNativesAPlayerEx4()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerEx4);
	UClass* Z_Construct_UClass_APlayerEx4_NoRegister()
	{
		return APlayerEx4::StaticClass();
	}
	struct Z_Construct_UClass_APlayerEx4_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerEx4_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerEx4_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerEx4_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/PlayerEx4.h" },
		{ "ModuleRelativePath", "Player/PlayerEx4.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerEx4_Statics::NewProp_OverlappingActor_MetaData[] = {
		{ "Category", "PlayerEx4" },
		{ "ModuleRelativePath", "Player/PlayerEx4.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerEx4_Statics::NewProp_OverlappingActor = { "OverlappingActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerEx4, OverlappingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerEx4_Statics::NewProp_OverlappingActor_MetaData), Z_Construct_UClass_APlayerEx4_Statics::NewProp_OverlappingActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerEx4_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerEx4" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerEx4.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerEx4_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerEx4, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerEx4_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_APlayerEx4_Statics::NewProp_Camera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerEx4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerEx4_Statics::NewProp_OverlappingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerEx4_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerEx4_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerEx4>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerEx4_Statics::ClassParams = {
		&APlayerEx4::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerEx4_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerEx4_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerEx4_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerEx4_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerEx4_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerEx4()
	{
		if (!Z_Registration_Info_UClass_APlayerEx4.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerEx4.OuterSingleton, Z_Construct_UClass_APlayerEx4_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerEx4.OuterSingleton;
	}
	template<> FIRSTGAME_API UClass* StaticClass<APlayerEx4>()
	{
		return APlayerEx4::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerEx4);
	APlayerEx4::~APlayerEx4() {}
	struct Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerEx4_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerEx4_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerEx4, APlayerEx4::StaticClass, TEXT("APlayerEx4"), &Z_Registration_Info_UClass_APlayerEx4, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerEx4), 3573700492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerEx4_h_132896813(TEXT("/Script/FirstGame"),
		Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerEx4_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_PlayerEx4_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
