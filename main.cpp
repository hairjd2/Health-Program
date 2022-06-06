#include <iostream>
#include "Food_Item.h"

int main() {
    Food_Item apple = Food_Item("apple");
    std::cout << apple.getName();
    return 0;
}