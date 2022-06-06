#include "Food_Item.h"
#include <string>

Food_Item::Food_Item(std::string name, float mass) {
    m_name = name;
    m_mass = mass;
}

std::string Food_Item::getName() {
    return m_name;
}

void Food_Item::setName(std::string name) {
    m_name = name;
}

void Food_Item::setMass(float mass) {
    m_mass = mass;
}

float Food_Item::getMass() {
    return m_mass;
}

int Food_Item::getFiber() {
    return m_fiber;
}

void Food_Item::setFiber(int fiber) {
    m_fiber = fiber;
}

int Food_Item::getFat() {
    return m_fat;
}

void Food_Item::setFat(int fat) {
    m_fat = fat;
}

int Food_Item::getCarbs() {
    return m_carbs;
}

void Food_Item::setCarbs(int carbs) {
    m_carbs = carbs;
}

int Food_Item::getProtein() {
    return m_protein;
}

void Food_Item::setProtein(int protein) {
    m_protein = protein;
}

void Food_Item::listProperties() {
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Mass(g): " << m_mass << std::endl;
    std::cout << "Fiber(g): " << m_fiber << std::endl;
    std::cout << "Fat(g): " << m_fat << std::endl;
    std::cout << "Carbs(g): " << m_carbs << std::endl;
    std::cout << "Protein(g): " << m_protein << std::endl;
}