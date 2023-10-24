#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct GetVirtualItemsByIdsRequestData : public RGN::Model::Request::BaseRequestData {
        vector<string> ids;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetVirtualItemsByIdsRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["ids"] = nlohmann_json_t.ids;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetVirtualItemsByIdsRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("ids")) {
                auto json_ids = nlohmann_json_j.at("ids");
                if (!json_ids.is_null() && json_ids.is_array()) {
                    json_ids.get_to(nlohmann_json_t.ids);
                }
            }
        }
    };
}}}