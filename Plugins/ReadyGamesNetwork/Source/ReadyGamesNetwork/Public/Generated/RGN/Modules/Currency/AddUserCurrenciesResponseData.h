#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Currency.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct AddUserCurrenciesResponseData {
        vector<RGN::Modules::Currency::Currency> userCurrencies;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(AddUserCurrenciesResponseData, userCurrencies)
    };
}}}