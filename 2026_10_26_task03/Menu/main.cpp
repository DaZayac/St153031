#include "menu_item.hpp"
#include "menu_func.hpp"

int main() {
    const VZai::MenuItem* curr = &VZai::MAIN;
    while (true) {
        curr = curr->func(curr);
    }
}   