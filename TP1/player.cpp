#include "headers/player.h"
#include <iostream>

Player::Player(const std::string& name) : playerName(name) {}

Player::~Player() {
    for (auto card : benchCards) {
        delete card;
    }
}

void Player::addCardToBench(Card* card) {
    benchCards.push_back(card);
}

void Player::activatePokemonCard(int benchIndex) {
    if (benchIndex >= 0 && benchIndex < static_cast<int>(benchCards.size())) {
        PokemonCard* pokemon = dynamic_cast<PokemonCard*>(benchCards[benchIndex]);
        if (pokemon) {
            std::cout << playerName << " is activating a Pokemon  Card: " << pokemon->getName() << "\n";
            actionCards.push_back(pokemon);
            benchCards.erase(benchCards.begin() + benchIndex);
        }
    }
}

void Player::attachEnergyCard(int benchIndex, int actionIndex) {
    if (benchIndex >= 0 && benchIndex < static_cast<int>(benchCards.size()) &&
        actionIndex >= 0 && actionIndex < static_cast<int>(actionCards.size())) {
        
        EnergyCard* energy = dynamic_cast<EnergyCard*>(benchCards[benchIndex]);
        if (energy) {
            std::cout << playerName << " is attaching Energy Card of type " 
                      << energy->getEnergyType() << " to the Pokemon " 
                      << actionCards[actionIndex]->getName() << "\n";
            
            actionCards[actionIndex]->attachEnergy(energy->getEnergyType());
            delete energy;
            benchCards.erase(benchCards.begin() + benchIndex);
        }
    }
}

void Player::useTrainer(int benchIndex) {
    if (benchIndex >= 0 && benchIndex < static_cast<int>(benchCards.size())) {
        TrainerCard* trainer = dynamic_cast<TrainerCard*>(benchCards[benchIndex]);
        if (trainer) {
            std::cout << playerName << " is using the Trainer Card to \"" 
                      << trainer->getEffect() << "\"\n";
            
            if (trainer->getEffect() == "heal all your action pokemon") {
                for (auto pokemon : actionCards) {
                    pokemon->heal();
                }
            }
            
            delete trainer;
            benchCards.erase(benchCards.begin() + benchIndex);
        }
    }
}

void Player::displayBench() const {
    std::cout << "Bench cards for Player " << playerName << ":\n";
    for (const auto card : benchCards) {
        card->displayInfo();
    }
}

void Player::displayAction() const {
    std::cout << "Action cards for Player " << playerName << ":\n";
    for (const auto pokemon : actionCards) {
        pokemon->displayInfo();
    }
}

void Player::attack(int attackerIndex, int attackIndex, Player& opponent, int targetIndex) {
    if (attackerIndex >= static_cast<int>(actionCards.size()) || 
        attackIndex >= 2) {
        std::cout << "Only 2 attacks exist.\n";
        return;
    }

    if (targetIndex >= static_cast<int>(opponent.actionCards.size())) {
        return;
    }

    PokemonCard* attacker = actionCards[attackerIndex];
    PokemonCard* target = opponent.actionCards[targetIndex];

    if (attacker->canUseAttack(attackIndex)) {
        int damage = attacker->getAttackDamage(attackIndex);
        std::cout << playerName << " attacking " << opponent.playerName 
                  << "'s Pokemon " << target->getName() 
                  << " with the Pokemon " << attacker->getName() 
                  << " with its attack: " << attacker->getAttackName(attackIndex) << "\n";
        
        std::cout << "Reducing " << damage << " from " 
                  << opponent.playerName << "'s Pokemon's HP\n";
        
        target->takeDamage(damage);
        
        if (target->isAlive()) {
            std::cout << "Pokemon " << target->getName() << " is still alive\n";
        } else {
            std::cout << "Pokemon " << target->getName() << " has fainted\n";
        }
    }
}