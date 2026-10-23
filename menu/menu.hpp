#pragma once

namespace menu {
    struct MenuItem {
        const char* const title;
        void (*func)();
    };
}