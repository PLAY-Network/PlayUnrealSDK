#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace SignIn {
    class GuestSignInModule {
    public:
        static void TryToSignInAsync(
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // Request parameters are null
            };
        static void SignOut() {
                // Request parameters are null
            };
    };
}}}