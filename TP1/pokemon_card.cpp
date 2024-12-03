#include "headers/pokemon_card.h"
#include <iostream>

PokemonCard::PokemonCard(const std::string& name, const std::string& type, 
                        const std::string& family, int evolution, int maxHealth,
                        int attack1Cost, const std::string& attack1Desc, int attack1Damage,
                        int attack2Cost, const std::string& attack2Desc, int attack2Damage)
    : Card(name), pokemonType(type), familyName(family), 
      evolutionLevel(evolution), maxHP(maxHealth), hp(maxHealth) {
    
    // Initialize attacks vector with two attacks
    attacks.push_back(std::make_tuple(attack1Cost, 0, attack1Desc, attack1Damage));
    attacks.push_back(std::make_tuple(attack2Cost, 0, attack2Desc, attack2Damage));
}

void PokemonCard::displayInfo() const {
    std::cout << "Pokemon Card - Name: " << cardName 
              << ", Type: " << pokemonType 
              << ", Evolution Level: " << evolutionLevel 
              << " of the family \"" << familyName 
              << ", HP: " << hp << "\"\n";
    
    std::cout << "Attacks:\n";
    for (size_t i = 0; i < attacks.size(); ++i) {
        std::cout << "Attack #" << i << ":\n";
        std::cout << "Attack cost: " << std::get<0>(attacks[i]) << "\n";
        std::cout << "Attack current energy storage: " << std::get<1>(attacks[i]) << "\n";
        std::cout << "Attack description: " << std::get<2>(attacks[i]) << "\n";
        std::cout << "Attack damage: " << std::get<3>(attacks[i]) << "\n";
    }
}

void PokemonCard::attachEnergy(const std::string& energyType) {
    if (energyType == pokemonType) {
        // Increment current energy for both attacks
        for (auto& attack : attacks) {
            std::get<1>(attack)++;
        }
    }
}

bool PokemonCard::canUseAttack(int attackIndex) const {
    if (attackIndex >= 0 && attackIndex < static_cast<int>(attacks.size())) {
        return std::get<1>(attacks[attackIndex]) >= std::get<0>(attacks[attackIndex]);
    }
    return false;
}

int PokemonCard::getAttackDamage(int attackIndex) const {
    if (attackIndex >= 0 && attackIndex < static_cast<int>(attacks.size())) {
        return std::get<3>(attacks[attackIndex]);
    }
    return 0;
}

std::string PokemonCard::getAttackName(int attackIndex) const {
    if (attackIndex >= 0 && attackIndex < static_cast<int>(attacks.size())) {
        return std::get<2>(attacks[attackIndex]);
    }
    return 0;
}

void PokemonCard::takeDamage(int damage) {
    hp = std::max(0, hp - damage);
}

void PokemonCard::heal() {
    hp = maxHP;
}

bool PokemonCard::isAlive() const {
    return hp > 0;
}

const std::string& PokemonCard::getType() const {
    return pokemonType;
}