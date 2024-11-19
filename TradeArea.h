#ifndef TRADEAREA_H
#define TRADEAREA_H

#include <iostream>
#include <list>
#include "Card.h"
#include "CardFactory.h"


class TradeArea{
    public:
    list<Card> tradeBlock; 
    int numberOfCards; 
    std::list<Card*> tradeArea;

    TradeArea(istream& in, cosnt CardFactory cardFactory);
    TradeArea& operator+=(Card* c);
    bool legal(Card* c);
    Card* trade(string s);
    int numCards();

};
#endif