#ifndef FOOD_ITEM_H
#define FOOD_ITEM_H
#include <iostream>

class Food_Item {
private:
    std::string m_name;

public:
    Food_Item(std::string name);
    std::string getName();
    void setName(std::string);
};

#endif