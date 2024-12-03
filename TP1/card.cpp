#include "headers/card.h"

Card::Card(const std::string& name) : cardName(name) {}

const std::string& Card::getName() const {
    return cardName;
}