#include "Deck.h"

    Deck::Deck(istream& in, const CardFactory* cardFactory){
        //deck.insert()
        //?do we remove what is in the input from the cardFactory and put it into the deck??
        //use cardFactory.getDeck and then i guess like read the in and populate the deck?
        //use pushback here
    }



    //!done i think
    Card* Deck::draw(){
        if(!deck.empty()){
        Card* toReturn = deck.front();
        deck.erase(deck.begin());
        return toReturn;
        }
        else{return nullptr;}
    }


