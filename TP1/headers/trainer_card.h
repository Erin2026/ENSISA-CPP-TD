#ifndef TRAINER_CARD_H
#define TRAINER_CARD_H


#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "card.h"
using namespace std;

class TrainerCard : public Card
{
protected:
    string trainerEffect;
    
public:
    TrainerCard(string _name,string _trainerEffect);

    void healAllActionPokemon();
    void displayInfo();
};

#endif