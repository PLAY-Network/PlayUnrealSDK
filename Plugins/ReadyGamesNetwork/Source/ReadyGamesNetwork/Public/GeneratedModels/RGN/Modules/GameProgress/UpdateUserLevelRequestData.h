#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "../../Utility/BaseMigrationRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    template <class T>
    struct UpdateUserLevelRequestData : public RGN::Utility::BaseMigrationRequestData {
        T playerProgress;
        vector<RGN::Modules::Currency::Currency> reward;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(UpdateUserLevelRequestData, playerProgress, reward)
    };
}}}