#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include "pokemon_card.h"
#include "energy_card.h"
#include "trainer_card.h"
#include <string>
#include <vector>

class Player {
private:
    std::string playerName;
    std::vector<Card*> benchCards;
    std::vector<PokemonCard*> actionCards;

public:
    explicit Player(const std::string& name);
    ~Player();
    
    void addCardToBench(Card* card);
    void activatePokemonCard(int benchIndex);
    void attachEnergyCard(int benchIndex, int actionIndex);
    void useTrainer(int benchIndex);
    void displayBench() const;
    void displayAction() const;
    void attack(int attackerIndex, int attackIndex, Player& opponent, int targetIndex);
};

#endif // PLAYER_H