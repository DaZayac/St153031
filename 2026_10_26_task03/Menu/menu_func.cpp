#include "menu_func.hpp"
#include <iostream>
#include <limits>

const VZai::MenuItem* VZai::show_menu(const MenuItem* curr) {
    if (curr->parent == nullptr) {
        std::cout << "Привет!" << std::endl;
    }
    for (int i = 1; i < curr->children_count; ++i) {
        std::cout << curr->children[i]->title << std::endl;
    }
    std::cout << curr->children[0]->title << std::endl;

    int choice;
    while (true) {
        std::cout << "Обучайка > ";
        if (std::cin >> choice && choice >= 0 && choice < curr->children_count) {
            return curr->children[choice];
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод" << std::endl;
    }
}

// Завершение программы
const VZai::MenuItem* VZai::exit(const MenuItem* curr) {
    return nullptr;
}

// curr - пункт "Назад"; его parent - текущее меню; parent меню - предыдущее
const VZai::MenuItem* VZai::go_back(const MenuItem* curr) {
    if (curr->parent != nullptr && curr->parent->parent != nullptr) {
        return curr->parent->parent;
    }
    return curr->parent;
}

// Подменю авторов: просто заходим в него
const VZai::MenuItem* VZai::lermontov(const MenuItem* curr) {
    return curr;
}

const VZai::MenuItem* VZai::krylov(const MenuItem* curr) {
    return curr;
}

// Произведения: выводим текст и возвращаемся в меню
const VZai::MenuItem* VZai::dubrovsky(const MenuItem* curr) {
    std::cout << "Дубровский: ..." << std::endl;
    return curr->parent;
}

const VZai::MenuItem* VZai::onegin(const MenuItem* curr) {
    std::cout << "Евгений Онегин: ..." << std::endl;
    return curr->parent;
}

const VZai::MenuItem* VZai::winter_evening(const MenuItem* curr) {
    std::cout << "Зимний вечер: ..." << std::endl;
    return curr->parent;
}