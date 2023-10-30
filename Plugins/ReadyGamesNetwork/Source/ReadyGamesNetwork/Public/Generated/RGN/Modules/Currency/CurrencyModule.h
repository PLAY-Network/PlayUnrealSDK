#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../random.hpp"
#include "RGNCoinEconomy.h"
#include "../../Model/Request/BaseRequestData.h"
#include "PurchaseRGNCoinRequestData.h"
#include "Currency.h"
#include "CurrencyProductsData.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "PurchaseCurrencyProductRequestData.h"
#include "AddUserCurrenciesResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    class CurrencyModule {
    public:
        static void GetRGNCoinEconomyAsync(
            const function<void(const RGN::Modules::Currency::RGNCoinEconomy& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseRequestData, RGN::Modules::Currency::RGNCoinEconomy>(
                    "currency-getRGNCoinEconomy",
                    requestData,
                    complete,
                    fail);
            };
        static void PurchaseRGNCoinAsync(
            const string& iapUUID,
            const string& iapTransactionId,
            const string& iapReceipt,
            const function<void(const vector<RGN::Modules::Currency::Currency>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Currency::PurchaseRGNCoinRequestData requestData;
                requestData.iapUUID = iapUUID;
                requestData.requestId = RGN::Random::generate_uuid_v4();
                requestData.iapTransactionId = iapTransactionId;
                requestData.iapReceipt = iapReceipt;
                RGNCore::CallAPI<RGN::Modules::Currency::PurchaseRGNCoinRequestData, nlohmann::json>(
                    "currency-purchaseRGNCoinV2",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["userCurrencies"].template get<vector<RGN::Modules::Currency::Currency>>());
                    },
                    fail);
            };
        static void GetInAppPurchaseCurrencyDataAsync(
            const function<void(const RGN::Modules::Currency::CurrencyProductsData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseMigrationRequestData, RGN::Modules::Currency::CurrencyProductsData>(
                    "currency-getProducts",
                    requestData,
                    complete,
                    fail);
            };
        static void PurchaseCurrencyProductAsync(
            const string& productId,
            const function<void(const vector<RGN::Modules::Currency::Currency>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Currency::PurchaseCurrencyProductRequestData requestData;
                requestData.productId = productId;
                RGNCore::CallAPI<RGN::Modules::Currency::PurchaseCurrencyProductRequestData, vector<RGN::Modules::Currency::Currency>>(
                    "currency-purchaseProduct",
                    requestData,
                    complete,
                    fail);
            };
        static void AddUserCurrenciesAsync(
            const vector<RGN::Modules::Currency::Currency>& currencies,
            const function<void(const vector<RGN::Modules::Currency::Currency>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["currencies"] = currencies;
                requestData["version"] = 3;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Currency::AddUserCurrenciesResponseData>(
                    "currency-addUserCurrencies",
                    requestData,
                    [complete] (const RGN::Modules::Currency::AddUserCurrenciesResponseData& result) {
                        complete(result.userCurrencies);
                    },
                    fail);
            };
    };
}}}