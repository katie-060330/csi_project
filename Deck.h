#include "Card.h"
#include "CardFactory.h"
#include <vector> 
#include <iostream>
//! go to lab 5 to suffel deck 

class Deck{
    int top =103; 
    public:
    std::vector<Card> deck; 
    Deck(istream& in, const CardFactory* cardFactory){
        deck.insert()
        //?do we remove what is in the input from the cardFactory and put it into the deck??

    }
    Card* Deck::draw(){
        Card* toReturn; 
        toReturn = deck.erase(top);
        top--; 
    }


    //* should we do deck[i].print() out of the card class but how would we use the out in this class??
    friend ostream& operator<<(ostream& out){
        out<<"deck";
        for(int i = 0; i < top; i++){
            Card temp = deck[i];
            out<<temp.getName(); 
        }
    }

};