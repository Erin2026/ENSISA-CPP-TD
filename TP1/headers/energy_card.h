#ifndef ENERGY_CARD_H
#define ENERGY_CARD_H

#include "card.h"
#include <string>

class EnergyCard : public Card {
private:
    std::string energyType;

public:
    explicit EnergyCard(const std::string& type);
    void displayInfo() const override;
    const std::string& getEnergyType() const;
};

#endif // ENERGY_CARD_H