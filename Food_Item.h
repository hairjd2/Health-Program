#ifndef FOOD_ITEM_H
#define FOOD_ITEM_H
#include <iostream>

class Food_Item {
private:
    std::string m_name;
    int m_fiber = -1;
    int m_fat = -1;
    int m_carbs = -1;
    int m_protein = -1;
    float m_mass = -1.0;

public:
    Food_Item(std::string name, float mass);
    std::string getName();
    void setName(std::string);
    float getMass();
    void setMass(float mass);
    int getFiber();
    void setFiber(int fiber);
    int getFat();
    void setFat(int fat);
    int getCarbs();
    void setCarbs(int carbs);
    int getProtein();
    void setProtein(int protein);
    void listProperties();
};

#endif