#ifndef POKEMONCARD_H
#define POKEMONCARD_H


#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "Card.h"
using namespace std;

class PokemonCard : public Card
{
protected:
    string pokemonType;
    string familyName;
    int evolutionLevel;
    int maxHP;
    int hp;
    vector<tuple<int,int,string,int>> attacks;

public:
    PokemonCard(string _cardName,string _pokemonType,string _familyName,int _evolutionLevel, int _maxHP, int _EnergyCost, string _attackName, int _damage);
    PokemonCard(string _cardName,string _pokemonType,string _familyName,int _evolutionLevel, int _maxHP, int _EnergyCost1, string _attackName1, int _damage1, int _EnergyCost2, string _attackName2, int _damage2);
    
};

#endif