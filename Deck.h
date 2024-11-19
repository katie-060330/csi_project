#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include "CardFactory.h"
#include <vector> 
#include <iostream>
#include <String>
//! go to lab 5 to suffel deck 

class Deck{

    public:
    Deck(istream& in, const CardFactory* cardFactory);



    //!done i think
    Card* draw();

     friend ostream& operator<<(ostream& out, const Deck& d){
            out<<"deck: ";
            for(int i = 0; i < d.deck.size(); i++){
                out<<d.deck[i]->getName()<< " , ";
            }
            return out;
        }
    

     std::vector<Card*> deck;

};
#endif