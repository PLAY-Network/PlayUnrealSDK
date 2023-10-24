#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    struct LoginRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string bio;

        friend void to_json(nlohmann::json& nlohmann_json_j, const LoginRequestData& nlohmann_json_t) {
            nlohmann_json_j["version"] = nlohmann_json_t.version;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["bio"] = nlohmann_json_t.bio;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LoginRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("version")) {
                auto json_version = nlohmann_json_j.at("version");
                if (!json_version.is_null() && json_version.is_number()) {
                    json_version.get_to(nlohmann_json_t.version);
                }
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("bio")) {
                auto json_bio = nlohmann_json_j.at("bio");
                if (!json_bio.is_null() && json_bio.is_string()) {
                    json_bio.get_to(nlohmann_json_t.bio);
                }
            }
        }
    };
}}}