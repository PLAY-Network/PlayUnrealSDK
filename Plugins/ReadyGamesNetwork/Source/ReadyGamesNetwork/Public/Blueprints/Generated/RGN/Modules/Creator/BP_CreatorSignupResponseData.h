#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSignupResponseData.h"
#include "BP_CreatorSignupResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreatorSignupResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    FString message;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    bool success;

	static void ConvertToUnrealModel(const RGN::Modules::Creator::CreatorSignupResponseData& source, FBP_CreatorSignupResponseData& target) {
		target.message = FString(source.message.c_str());
		target.success = source.success;
	}

	static void ConvertToCoreModel(const FBP_CreatorSignupResponseData& source, RGN::Modules::Creator::CreatorSignupResponseData& target) {
		target.message = string(TCHAR_TO_UTF8(*source.message));
		target.success = source.success;
	}
};
