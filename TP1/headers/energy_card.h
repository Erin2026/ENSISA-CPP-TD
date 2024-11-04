#ifndef ENERGY_CARD_H
#define ENERGY_CARD_H

#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "card.h"
using namespace std;

class EnergyCard : public Card
{
protected:
    string energyType;

public:
    EnergyCard(string _energyType);

    void displayInfo();
};

#endif