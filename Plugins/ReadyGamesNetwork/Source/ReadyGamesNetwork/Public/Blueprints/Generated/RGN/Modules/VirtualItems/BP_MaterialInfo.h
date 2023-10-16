#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/VirtualItems/MaterialInfo.h"
#include "BP_MaterialInfo.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_MaterialInfo {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString materialToReplace;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString baseColor;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString baseTextureId;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::MaterialInfo& source, FBP_MaterialInfo& target) {
		target.materialToReplace = FString(source.materialToReplace.c_str());
		target.baseColor = FString(source.baseColor.c_str());
		target.baseTextureId = FString(source.baseTextureId.c_str());
	}

	static void ConvertToCoreModel(const FBP_MaterialInfo& source, RGN::Modules::VirtualItems::MaterialInfo& target) {
		target.materialToReplace = string(TCHAR_TO_UTF8(*source.materialToReplace));
		target.baseColor = string(TCHAR_TO_UTF8(*source.baseColor));
		target.baseTextureId = string(TCHAR_TO_UTF8(*source.baseTextureId));
	}
};
