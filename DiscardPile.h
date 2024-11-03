#include "Card.h"
#include "CardFactory.h"
#include <vector>

class DiscardPile{
    DiscardPile(istream& in, const CardFactory* cardFactory){
        //TODO ask what the input for the constuctors are becaseu they are all ahinvg the same inputs but it doesnt make any sense to me 
    }

    DiscardPile& DiscardPile::operator+=(Card* c){
        //TODO return a refrence the the card just added to the discard pile

    }
    Card* DiscardPile::pickUp(){
        //*returns and removes the first card on the discard pile
            //*this happens when the card returned is equal to one of the 3 cards on teh trading block 
    }
    Card* DiscardPile::top(){
        //*used to check if one the top card is equal to one of the three on the trading block 
            //*if so then we do deck.pickUp()
    }
    void DiscardPile::print(std::ostream out){
        //TODO again ask how these inputs and outputs work 
        //*print out all the cards taht where just added to the 
    }
    //TODO insertion operator??
};