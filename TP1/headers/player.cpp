#include "player.h"


Player::Player(string _name): name(_name) {}

void Player::addCardToBench(Card *card){
    benchCards.push_back(card);
}

void Player::activatePokemonCard(int number){
    actionCards.push(benchCards[number]);
    benchCards.erase(number);
}

void Player::attachEnergyCard(int,int){

}

void Player::attack (int , int , Player person , int ){

}

void Player::useTrainer(int number){

}

void Player::displayBench(){

}

void Player::displayAction(){

}