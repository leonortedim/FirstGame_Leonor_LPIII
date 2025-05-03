// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/Player/NPC_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_AIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	FIRSTGAME_API UClass* Z_Construct_UClass_ANPC_AIController();
	FIRSTGAME_API UClass* Z_Construct_UClass_ANPC_AIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References
	void ANPC_AIController::StaticRegisterNativesANPC_AIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC_AIController);
	UClass* Z_Construct_UClass_ANPC_AIController_NoRegister()
	{
		return ANPC_AIController::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/NPC_AIController.h" },
		{ "ModuleRelativePath", "Player/NPC_AIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp_PatrolRadius_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Patrol radius in which to roam\n" },
#endif
		{ "ModuleRelativePath", "Player/NPC_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Patrol radius in which to roam" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_PatrolRadius = { "PatrolRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC_AIController, PatrolRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_PatrolRadius_MetaData), Z_Construct_UClass_ANPC_AIController_Statics::NewProp_PatrolRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_AIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_PatrolRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_AIController_Statics::ClassParams = {
		&ANPC_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPC_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANPC_AIController()
	{
		if (!Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton, Z_Construct_UClass_ANPC_AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton;
	}
	template<> FIRSTGAME_API UClass* StaticClass<ANPC_AIController>()
	{
		return ANPC_AIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_AIController);
	ANPC_AIController::~ANPC_AIController() {}
	struct Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_NPC_AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_NPC_AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPC_AIController, ANPC_AIController::StaticClass, TEXT("ANPC_AIController"), &Z_Registration_Info_UClass_ANPC_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC_AIController), 1191270263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_NPC_AIController_h_2318446112(TEXT("/Script/FirstGame"),
		Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_NPC_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_uni_2o_ano_2o_semestre_UnrealGames_FirstGame_FirstGame_LP3_Source_FirstGame_Player_NPC_AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
