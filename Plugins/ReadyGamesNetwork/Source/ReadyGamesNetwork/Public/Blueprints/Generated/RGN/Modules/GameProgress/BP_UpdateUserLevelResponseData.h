#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Response/BP_BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/GameProgress/UpdateUserLevelResponseData.h"
#include "BP_UpdateUserLevelResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UpdateUserLevelResponseData : public FBP_BaseResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    FString playerProgress;

	static void ConvertToUnrealModel(const RGN::Modules::GameProgress::UpdateUserLevelResponseData& source, FBP_UpdateUserLevelResponseData& target) {
		target.playerProgress = FString(source.playerProgress.c_str());
		FBP_BaseResponseData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_UpdateUserLevelResponseData& source, RGN::Modules::GameProgress::UpdateUserLevelResponseData& target) {
		target.playerProgress = string(TCHAR_TO_UTF8(*source.playerProgress));
		FBP_BaseResponseData::ConvertToCoreModel(source, target);
	}
};
