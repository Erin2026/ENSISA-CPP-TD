#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "card.h"
#include "pokemon_card.h"
using namespace std;

class Player
{
protected:
    string name;
    vector<Card*> benchCards;
    vector<PokemonCard*> actionCards;

public:
    Player(string _name);

    void addCardToBench(Card *card);
    void activatePokemonCard(int number);
    void attachEnergyCard(int,int);
    void attack (int , int , Player person , int );
    void useTrainer(int number);
    void displayBench();
    void displayAction();
};

#endif