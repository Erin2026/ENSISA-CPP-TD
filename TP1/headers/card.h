#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

using namespace std;

class Card
{
public:
    string cardName;
    Card(string _cardName);

    virtual void displayInfo() = 0 ;
};

#endif