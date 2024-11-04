#include "pokemon_card.h"


PokemonCard::PokemonCard(string _cardName,string _pokemonType,string _familyName,int _evolutionLevel, int _maxHP, int _EnergyCost, string _attackName, int _damage)
    :familyName(_familyName),Card(_cardName),evolutionLevel(_evolutionLevel), maxHP(_maxHP),hp(_maxHP)
{

    attacks[0]={_EnergyCost,_EnergyCost,_attackName,_damage};
}

PokemonCard::PokemonCard(string _cardName,string _pokemonType,string _familyName,int _evolutionLevel, int _maxHP, int _EnergyCost1, string _attackName1, int _damage1, int _EnergyCost2, string _attackName2, int _damage2)
    :familyName(_familyName),Card(_cardName),evolutionLevel(_evolutionLevel), maxHP(_maxHP),hp(_maxHP)
{
    attacks[0]={_EnergyCost1,_EnergyCost1,_attackName1,_damage1};
    attacks[1]={_EnergyCost2,_EnergyCost2,_attackName2,_damage2};
}