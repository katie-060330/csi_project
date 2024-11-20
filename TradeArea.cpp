#include "TradeArea.h"

    TradeArea::TradeArea(istream& in, const CardFactory cardFactory){
        numberOfCards = 0;
        //TODO same as other constructors
    }
    TradeArea& TradeArea::operator+=(Card* c){
        //*adds the card but doesnt verify that it legally can be added ie the bean is already in the trading area
        tradeArea.push_back(c);
        return *this;

    }
    bool TradeArea::legal(Card* c){
        for(Card* card: tradeArea){
        if(c->getName() == card->getName()){
        return true;
        }
        return false;
}
    }
    Card* TradeArea::trade(string s){
        //*removes the corresponding bean based off of the input from the user
            //*using the print function from the card class??
    }
    int TradeArea::numCards(){
        return tradeArea.size();
    }
    std::ostream& operator<<(std::ostream& out, const TradeArea& tA) {
        out << "trade Area: ";
        for(Card* card: tA.tradeArea){
            out<< card->getName() << " , ";
        }
        return out;
    }

    //?nd the insertion operator (friend) to insert all the cards of the trade area to an std::ostream.
