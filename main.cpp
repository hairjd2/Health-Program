#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <json\json.h>
#include "Food_Item.h"

void parseItems();

int main() {
    Food_Item apple = parseItems();
    apple.listProperties();
    return 0;
}

Food_Item parseItems() {
    Food_Item apple("apple", 100);
    apple.setFiber(4);
    apple.setCarbs(14);
}