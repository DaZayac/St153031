#pragma once
#include "menu.hpp"

namespace VZai {
    const MenuItem* show_menu(const MenuItem* curr);
    const MenuItem* exit(const MenuItem* curr);
    const MenuItem* go_back(const MenuItem* curr);

    const MenuItem* lermontov(const MenuItem* curr);
    const MenuItem* krylov(const MenuItem* curr);

    const MenuItem* dubrovsky(const MenuItem* curr);
    const MenuItem* onegin(const MenuItem* curr);
    const MenuItem* winter_evening(const MenuItem* curr);
}
