#include <iostream>
#include <list>
#include "Card.h"
#include "CardFactory.h"


class TradeArea{
    public:
    list<Card> tradeBlock; 
    int numberOfCards; 
    TradeArea(istream& in, cosnt CardFactory cardFactory){
        numberOfCards = 0; 
        //TODO same as other constructors
    }
    TradeArea& TradeArea::operator+=(Card* c){
        //*adds the card but doesnt verify that it legally can be added ie the bean is already in the trading area 

    }
    bool TradeArea::legal(Card*){
        //TODO checks if the card is legally allowed to be put into the trade area
    }
    Card* TradeArea::trade(string s){
        //*removes the corresponding bean based off of the input from the user
            //*using the print function from the card class??
    }
    int TradeArea::numCards(){
        return numberOfCards; 
    }
    //?nd the insertion operator (friend) to insert all the cards of the trade area to an std::ostream.  

};