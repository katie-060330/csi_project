#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"

class Table{
    public:
    Player p1; 
    Player p2; 
    Deck deck; 
    DiscardPile dp; 
    TradeArea ta; 
<<<<<<< Updated upstream

    Table();
=======
    public:
    Table(istream& in, const CardFactory* cardFactory);
    Table(){
    };
>>>>>>> Stashed changes
    bool Table::win(std::string& s);
    void Table::printHand(bool showFullHand);
    //TODO same inserion opperator 
//     //and the insertion operator (friend) to print a Table to an std::ostream. The two players, 
// the discard pile, the trading area should be printed. This is the top level print out. Note that a 
// complete output with all cards for the pause functionality is printed with a separate function. 
};
#endif