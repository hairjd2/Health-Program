#include <iostream>
#include "Food_Item.h"

int main() {
    Food_Item apple("apple", 100);
    apple.setFiber(4);
    apple.setCarbs(14);
    apple.listProperties();
    return 0;
}