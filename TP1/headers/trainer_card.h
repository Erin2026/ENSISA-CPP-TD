#ifndef TRAINER_CARD_H
#define TRAINER_CARD_H

#include "card.h"
#include <string>

class TrainerCard : public Card {
private:
    std::string trainerEffect;

public:
    TrainerCard(const std::string& name, const std::string& effect);
    void displayInfo() const override;
    const std::string& getEffect() const;
};

#endif // TRAINER_CARD_H