#ifndef CARDFACTORY_H
#define CARDFACTORY_H
#include <iostream>
using namespace std;
#include "Card.h"
#include "Deck.h"
#include <vector>


//function static CardFactory* getFactory() returns a pointer to the only instance of card factory
//!use singleton patters
class CardFactory{

    private:
    static const int deckSize = 104;
        static Card* deckToBe[deckSize];
        static CardFactory* instance;



        CardFactory();
    public:


    //!done i think
    static CardFactory* getCardFactory();
    Card

    Deck getDeck();
    
};


#endif
