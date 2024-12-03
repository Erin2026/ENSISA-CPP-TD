#ifndef POKEMON_CARD_H
#define POKEMON_CARD_H

#include "card.h"
#include <string>
#include <vector>
#include <tuple>

class PokemonCard : public Card {
private:
    std::string pokemonType;
    std::string familyName;
    int evolutionLevel;
    int maxHP;
    int hp;
    std::vector<std::tuple<int, int, std::string, int>> attacks;

public:
    PokemonCard(const std::string& name, const std::string& type, 
                const std::string& family, int evolution, int maxHealth,
                int attack1Cost, const std::string& attack1Desc, int attack1Damage,
                int attack2Cost, const std::string& attack2Desc, int attack2Damage);
    
    void displayInfo() const override;
    void attachEnergy(const std::string& energyType);
    bool canUseAttack(int attackIndex) const;
    int getAttackDamage(int attackIndex) const;
    std::string getAttackName(int attackIndex) const;
    void takeDamage(int damage);
    void heal();
    bool isAlive() const;
    const std::string& getType() const;
};

#endif // POKEMON_CARD_H