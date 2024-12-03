#include "headers/energy_card.h"
#include <iostream>

EnergyCard::EnergyCard(const std::string& type)
    : Card("Energy"), energyType(type) {}

void EnergyCard::displayInfo() const {
    std::cout << "Energy Card - Type: " << energyType << "\n";
}

const std::string& EnergyCard::getEnergyType() const {
    return energyType;
}