#include "headers/trainer_card.h"
#include <iostream>

TrainerCard::TrainerCard(const std::string& name, const std::string& effect)
    : Card(name), trainerEffect(effect) {}

void TrainerCard::displayInfo() const {
    std::cout << "Trainer Card - Name: " << cardName 
              << ", Effect: " << trainerEffect << "\n";
}

const std::string& TrainerCard::getEffect() const {
    return trainerEffect;
}