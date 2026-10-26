#pragma once

namespace VZai {
    struct MenuItem {
        const char* title;
        const MenuItem* (*func)(const MenuItem* current);
        const MenuItem* parent;
        const MenuItem* const* children;
        const int children_count;
    };
}
