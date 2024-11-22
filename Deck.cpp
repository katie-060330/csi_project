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
std::ostream& operator<<(std::ostream& out, const Deck& d) {
    out << "deck: ";
    for (size_t i = 0; i < d.deck.size(); ++i) {
        out << d.deck[i]->getName() + "/n";
    }
    return out;
}