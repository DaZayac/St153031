#include <cstddef>
#include "menu_item.hpp"
#include "menu_func.hpp"

//3 
const VZai::MenuItem VZai::PUSHKIN_DUBROVSKY = { "1 - Дубровский", VZai::dubrovsky, &VZai::PUSHKIN, nullptr, 0 };
const VZai::MenuItem VZai::PUSHKIN_ONEGIN = { "2 - Евгений Онегин", VZai::onegin, &VZai::PUSHKIN, nullptr, 0 };
const VZai::MenuItem VZai::PUSHKIN_WINTER_EVENING = { "3 - Зимний вечер", VZai::winter_evening, &VZai::PUSHKIN, nullptr, 0 };
const VZai::MenuItem VZai::PUSHKIN_GO_BACK = { "0 - Выйти в предыдущее меню", VZai::go_back, &VZai::PUSHKIN, nullptr, 0 };

namespace {
    const VZai::MenuItem* const pushkin_children[] = {
        &VZai::PUSHKIN_GO_BACK,
        &VZai::PUSHKIN_DUBROVSKY,
        &VZai::PUSHKIN_ONEGIN,
        &VZai::PUSHKIN_WINTER_EVENING
    };
    const int pushkin_size = sizeof(pushkin_children) / sizeof(pushkin_children[0]);
}

//2
const VZai::MenuItem VZai::PUSHKIN = { "1 - Читать Пушкина", VZai::show_menu, &VZai::WRITERS, pushkin_children, pushkin_size };
const VZai::MenuItem VZai::LERMONTOV = { "2 - Читать Лермонтова", VZai::lermontov, &VZai::WRITERS, nullptr, 0 };
const VZai::MenuItem VZai::KRYLOV = { "3 - Читать Крылова", VZai::krylov, &VZai::WRITERS, nullptr, 0 };
const VZai::MenuItem VZai::WRITERS_GO_BACK = { "0 - Выйти в главное меню", VZai::go_back,   &VZai::WRITERS, nullptr, 0 };

namespace {
    const VZai::MenuItem* const writers_children[] = {
        &VZai::WRITERS_GO_BACK,
        &VZai::PUSHKIN,
        &VZai::LERMONTOV,
        &VZai::KRYLOV
    };
    const int writers_size = sizeof(writers_children) / sizeof(writers_children[0]);
}

//1
const VZai::MenuItem VZai::WRITERS = { "1 - Русские писатели", VZai::show_menu, &VZai::MAIN, writers_children, writers_size };
const VZai::MenuItem VZai::EXIT = { "0 - Завершить чтение", VZai::exit, &VZai::MAIN, nullptr, 0 };

namespace {
    const VZai::MenuItem* const main_children[] = {
        &VZai::EXIT,
        &VZai::WRITERS 
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const VZai::MenuItem VZai::MAIN = { nullptr, VZai::show_menu, nullptr, main_children, main_size };
