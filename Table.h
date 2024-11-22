#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"
#include "Hand.h"

class Table{
    public:
    Player p1; 
    Player p2; 
    Deck deck; 
    DiscardPile dp; 
    TradeArea ta;
    Hand* hand;


    Table();


    Table(istream& in, const CardFactory* cardFactory);
    Table(){
    };

    bool win(std::string& s);
    void printHand(bool showFullHand);

    friend ostream &operator<<(ostream &out, const Table &table);
};
#endif