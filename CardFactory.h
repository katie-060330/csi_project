#ifndef CARDFACTORY_H
#define CARDFACTORY_H
#include <iostream>
#include <vector>
#include <string>
#include "Card.h"

using namespace std;


class Deck;
class CardFactory{

    private:
       static const int deckSize = 104;
       static Card* deckToBe[deckSize];
       static CardFactory* instance;
       CardFactory();

    public:
    Deck* cardDeck;
    ~CardFactory();
    static CardFactory* getCardFactory();
    Deck* getDeck();
    Card* getCard(string cardType) const;
};


#endif
