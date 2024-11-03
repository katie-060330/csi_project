#include "Card.h"
#include "CardFactory.h"
#include <vector> 
//! go to lab 5 to suffel deck 

class Deck{
    public:
    std::vector<Card> deck; 
    Deck(istream& in, const CardFactory* cardFactory){
        //?do we remove what is in the input from the cardFactory and put it into the deck??

    }
};