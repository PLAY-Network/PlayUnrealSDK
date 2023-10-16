#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Currency/CurrencyProduct.h"
#include "BP_CurrencyProduct.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CurrencyProduct {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString id;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString currencyName;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    float price;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    int32 quantity;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString type;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString promotionalSticker;

	static void ConvertToUnrealModel(const RGN::Modules::Currency::CurrencyProduct& source, FBP_CurrencyProduct& target) {
		target.id = FString(source.id.c_str());
		target.currencyName = FString(source.currencyName.c_str());
		target.price = source.price;
		target.quantity = source.quantity;
		target.type = FString(source.type.c_str());
		target.promotionalSticker = FString(source.promotionalSticker.c_str());
	}

	static void ConvertToCoreModel(const FBP_CurrencyProduct& source, RGN::Modules::Currency::CurrencyProduct& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.currencyName = string(TCHAR_TO_UTF8(*source.currencyName));
		target.price = source.price;
		target.quantity = source.quantity;
		target.type = string(TCHAR_TO_UTF8(*source.type));
		target.promotionalSticker = string(TCHAR_TO_UTF8(*source.promotionalSticker));
	}
};
