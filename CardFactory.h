#ifndef CARDFACTORY_H
#define CARDFACTORY_H
#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "Deck.h"
using namespace std;



class CardFactory{

    private:
       static const int deckSize = 104;
       static Card* deckToBe[deckSize];
       static CardFactory* instance;
       CardFactory();

    public:
    Deck cardDeck = new Deck();
    ~CardFactory();
    static CardFactory* getCardFactory();
    Deck getDeck();
    Card* getCard(string cardType) const;
};


#endif
