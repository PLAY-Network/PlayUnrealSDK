#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/UserProfile/GetUserStatusRequestData.h"
#include "BP_GetUserStatusRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserStatusRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    FString userId;

	static void ConvertToUnrealModel(const RGN::Modules::UserProfile::GetUserStatusRequestData& source, FBP_GetUserStatusRequestData& target) {
		target.userId = FString(source.userId.c_str());
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_GetUserStatusRequestData& source, RGN::Modules::UserProfile::GetUserStatusRequestData& target) {
		target.userId = string(TCHAR_TO_UTF8(*source.userId));
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
