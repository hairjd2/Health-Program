#include "Food_Item.h"

Food_Item::Food_Item(std::string name) {
    m_name = name;
}

std::string Food_Item::getName() {
    return m_name;
}

void Food_Item::setName(std::string name) {
    m_name = name;
}