#include "TradeArea.h"

    TradeArea::TradeArea(istream& in, cosnt CardFactory cardFactory){
        numberOfCards = 0;
        //TODO same as other constructors
    }
    TradeArea& TradeArea::operator+=(Card* c){
        //*adds the card but doesnt verify that it legally can be added ie the bean is already in the trading area
        tradeArea.push_front(c);

    }
    bool TradeArea::legal(Card* c){
        //TODO checks if the card is legally allowed to be put into the trade area
        //for every card in the trade area
        //check if the card type matches so c.getRank() or getname == to i.getrank or getname
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