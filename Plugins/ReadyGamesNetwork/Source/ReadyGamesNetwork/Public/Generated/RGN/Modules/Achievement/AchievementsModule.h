#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../CustomImpl/RGN/Modules/Achievement/AchievementsModule.h"
#include "GetAchievementsResponse.h"
#include "AchievementData.h"
#include "GetAchievementsWithUserDataResponse.h"
#include "AchievementWithUserData.h"
#include "TriggerAndClaimResponse.h"
#include "TriggerByIdRequestData.h"
#include "TriggerByRequestNameRequestData.h"
#include "ClaimByIdRequestData.h"
#include "ClaimByRequestNameRequestData.h"
#include "GetUserAchievementsResponse.h"
#include "UserAchievement.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    class AchievementsModule {
    public:
        static void GetByIdsAsync(
            const vector<string>& ids,
            const function<void(const vector<RGN::Modules::Achievement::AchievementData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ids"] = ids;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Achievement::GetAchievementsResponse>(
                    "achievements-getByIds",
                    requestData,
                    [complete] (const RGN::Modules::Achievement::GetAchievementsResponse& result) {
                        complete(result.achievements);
                    },
                    fail);
            };
        static void GetByAppIdsAsync(
            const vector<string>& appIds,
            const int32_t limit,
            const string& startAfter = "",
            const function<void(const vector<RGN::Modules::Achievement::AchievementData>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["appIds"] = appIds;
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Achievement::GetAchievementsResponse>(
                    "achievements-getByAppIds",
                    requestData,
                    [complete] (const RGN::Modules::Achievement::GetAchievementsResponse& result) {
                        complete(result.achievements);
                    },
                    fail);
            };
        /**
         * Asynchronously retrieves a list of achievements for the current application from the Ready Games Network (RGN).
         * @param limit - An integer indicating the maximum number of achievements to retrieve.
         * @param startAfter - An optional parameter representing an achievement id after which to
         * start retrieving the achievements. The default is an empty string.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
         * of T:RGN.Modules.Achievement.AchievementData objects representing the achievements that match the current application identifier,
         * limit and other optional parameters.
         * @throw: Thrown when the provided limit value is zero.
         */
        static void GetForCurrentAppAsync(
            const int32_t limit,
            const string& startAfter = "",
            const function<void(const vector<RGN::Modules::Achievement::AchievementData>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Achievement::AchievementsModuleCustomImpl::GetForCurrentAppAsync(
                    limit,
                    startAfter,
                    complete,
                    fail);
            };
        static void GetByAppIdsWithUserDataAsync(
            const vector<string>& appIds,
            const int32_t limit,
            const string& startAfter = "",
            const bool withHistory = false,
            const function<void(const vector<RGN::Modules::Achievement::AchievementWithUserData>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Achievement::AchievementsModuleCustomImpl::GetByAppIdsWithUserDataAsync(
                    appIds,
                    limit,
                    startAfter,
                    withHistory,
                    complete,
                    fail);
            };
        /**
         * Asynchronously retrieves a list of achievements for the current application from the Ready Games Network (RGN).
         * The user achievement data is also returned in case user made any progress with the given achievement
         * @param limit - An integer indicating the maximum number of achievements to retrieve.
         * @param startAfter - An optional parameter representing an achievement id after which to
         * start retrieving the achievements. The default is an empty string.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
         * of T:RGN.Modules.Achievement.AchievementWithUserData objects representing the achievements that match the current application identifier,
         * limit and other optional parameters.
         * @throw: Thrown when the provided limit value is zero.
         */
        static void GetForCurrentAppWithUserDataAsync(
            const int32_t limit,
            const string& startAfter = "",
            const function<void(const vector<RGN::Modules::Achievement::AchievementWithUserData>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Achievement::AchievementsModuleCustomImpl::GetForCurrentAppWithUserDataAsync(
                    limit,
                    startAfter,
                    complete,
                    fail);
            };
        /**
         * Asynchronously retrieves a achievement from the Ready Games Network (RGN)
         * based on the provided achievement request name.
         * @param requestName - Request name to filter achievements.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list of
         * T:RGN.Modules.Achievement.AchievementData objects representing the achievement that match the specified identifiers.
         * @throw: Thrown when the provided request name is null or empty.
         */
        static void GetByRequestNameAsync(
            const string& requestName,
            const function<void(const RGN::Modules::Achievement::AchievementData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["requestName"] = requestName;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Achievement::AchievementData>(
                    "achievements-getByRequestName",
                    requestData,
                    complete,
                    fail);
            };
        static void GetByRequestNamesAsync(
            const vector<string>& requestNames,
            const function<void(const vector<RGN::Modules::Achievement::AchievementData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["requestNames"] = requestNames;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Achievement::GetAchievementsResponse>(
                    "achievements-getByRequestNames",
                    requestData,
                    [complete] (const RGN::Modules::Achievement::GetAchievementsResponse& result) {
                        complete(result.achievements);
                    },
                    fail);
            };
        /**
         * Triggers the achievement by id to make achievement progress
         * @param id - The achievement id to trigger
         * @param progress - The achievement trigger progress delta
         * @return Trigger and Claim response data
         */
        static void TriggerByIdAsync(
            const string& id,
            const int32_t progress = 1,
            const function<void(const RGN::Modules::Achievement::TriggerAndClaimResponse& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Achievement::TriggerByIdRequestData requestData;
                requestData.id = id;
                requestData.progress = progress;
                RGNCore::CallAPI<RGN::Modules::Achievement::TriggerByIdRequestData, RGN::Modules::Achievement::TriggerAndClaimResponse>(
                    "achievements-triggerById",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Triggers the achievement by request name to make achievement progress
         * @param requestName - The achievement request name to trigger
         * @param progress - The achievement trigger progress delta
         * @return Trigger and Claim response data
         */
        static void TriggerByRequestNameAsync(
            const string& requestName,
            const int32_t progress = 1,
            const function<void(const RGN::Modules::Achievement::TriggerAndClaimResponse& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Achievement::TriggerByRequestNameRequestData requestData;
                requestData.requestName = requestName;
                requestData.progress = progress;
                RGNCore::CallAPI<RGN::Modules::Achievement::TriggerByRequestNameRequestData, RGN::Modules::Achievement::TriggerAndClaimResponse>(
                    "achievements-triggerByRequestName",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Claim the achievement to give rewards to the user
         * For more information about the rewards see T:RGN.Modules.Achievement.AchievementData class
         * @param achievementId - The achievement id to trigger
         * @return Trigger and Claim response data
         */
        static void ClaimByIdAsync(
            const string& achievementId,
            const function<void(const RGN::Modules::Achievement::TriggerAndClaimResponse& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Achievement::ClaimByIdRequestData requestData;
                requestData.id = achievementId;
                RGNCore::CallAPI<RGN::Modules::Achievement::ClaimByIdRequestData, RGN::Modules::Achievement::TriggerAndClaimResponse>(
                    "achievements-claimById",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Claim the achievement to give rewards to the user
         * For more information about the rewards see T:RGN.Modules.Achievement.AchievementData class
         * @param requestName - The achievement id to trigger
         * @return Trigger and Claim response data
         */
        static void ClaimByRequestNameAsync(
            const string& requestName,
            const function<void(const RGN::Modules::Achievement::TriggerAndClaimResponse& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Achievement::ClaimByRequestNameRequestData requestData;
                requestData.requestName = requestName;
                RGNCore::CallAPI<RGN::Modules::Achievement::ClaimByRequestNameRequestData, RGN::Modules::Achievement::TriggerAndClaimResponse>(
                    "achievements-claimByRequestName",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Gets current user competed achievements
         * If the userId is provided, then it returns the comleted achievements for provided userId
         * Supports pagination queries in case the startAfter and limit are provided
         * @param userId - User id to return the completed achievements
         * @param startAfter - The time stamp to start the query after F:RGN.Modules.Achievement.UserAchievement.lastCompleteTime
         * @param limit - Maximal number of documents to return
         * @return Requested amount of completed achievements
         */
        static void GetUserAchievementsAsync(
            const string& userId = string(),
            const int64_t startAfter = INT64_MAX,
            const int32_t limit = INT32_MAX,
            const function<void(const vector<RGN::Modules::Achievement::UserAchievement>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Achievement::AchievementsModuleCustomImpl::GetUserAchievementsAsync(
                    userId,
                    startAfter,
                    limit,
                    complete,
                    fail);
            };
    };
}}}