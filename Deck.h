#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include "CardFactory.h"
#include <vector>
#include <iostream>
#include <String>

class Deck
{

public:
    Deck();
    Card *draw();
    friend ostream &operator<<(ostream &out, const Deck &d);
    std::vector<Card *> deck;
};
#endif