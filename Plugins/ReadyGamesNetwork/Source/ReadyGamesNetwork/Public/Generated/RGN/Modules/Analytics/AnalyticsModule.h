#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../CustomImpl/RGN/Modules/Analytics/AnalyticsModule.h"
#include "../../../../Core/CancellationToken.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Analytics {
    class AnalyticsModule {
    public:
        static void LogEventAsync(
            const string& eventName,
            const string& eventParameters,
            const CancellationToken& cancellationToken,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Analytics::AnalyticsModuleCustomImpl::LogEventAsync(
                    eventName,
                    eventParameters,
                    cancellationToken,
                    complete,
                    fail);
            };
    };
}}}