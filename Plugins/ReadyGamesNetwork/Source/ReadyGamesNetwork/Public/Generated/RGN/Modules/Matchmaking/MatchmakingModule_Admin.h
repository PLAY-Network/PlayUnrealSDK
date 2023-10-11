#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../..//Core/RGNCore.h"
#include <string>
#include <functional>
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    class MatchmakingModule_Admin {
    public:
        static void DeleteMatchesByAppIdAsync(
            string appIdToRemoveTheMatchesFor,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["appIdToRemoveTheMatchesFor"] = appIdToRemoveTheMatchesFor;
                RGNCore::CallAPI("matchmaking-deleteAllMatchesForApp", requestData, complete, fail);
            };
    };
}}}