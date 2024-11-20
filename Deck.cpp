#include "Deck.h"

Deck::Deck()
{
    // the deck constructor
}

//! done i think
Card *Deck::draw()
{
    if (!deck.empty())
    {
        Card *toReturn = deck.front();
        deck.erase(deck.begin());
        return toReturn;
    }
    else
    {
        return nullptr;
    }
}
