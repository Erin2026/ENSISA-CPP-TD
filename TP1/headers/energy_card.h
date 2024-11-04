#ifndef ENERGYCARD_H
#define ENERGYCARD_H


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
};

#endif