  #include "Table.h"

  Table::Table(){
        
        string playerOne;
        string playerTwo;
        // initalizig player one
        cout << "Player one enter name: ";
        getline(cin, playerOne);
        p1 = Player(playerOne);
        // initalizing player two
        cout << "Player two enter name: ";
        getline(cin, playerTwo);
        p2= Player(playerTwo);

        deck = Deck(); 
        dp = DiscardPile(); 
        ta = TradeArea(); 
    }
    bool Table::win(std::string& s){
<<<<<<< Updated upstream
    //checks if the deck is empty
=======

>>>>>>> Stashed changes
    if(p1.getName() == s && deck.deck.empty() && p1.getNumCoins() > p2.getNumCoins()){
        return true;
    }
    else if(p2.getName() == s &&deck.deck.empty() && p1.getNumCoins() < p2.getNumCoins()){
        return true;
<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
    }
    return false;

    }


    void Table::printHand(bool showFullHand){
        if(showFullHand){
        hand->print();
            //TODO print the full hand to the ostream
        }
        else{
        hand->top()->print();
        }
    }
    std::ostream& operator<<(std::ostream& out, const Table& table) {
        out<< table.p1.getName();
        out<< table.p2.getName();
        out<< table.dp.print();
        out<< table.ta.displayTradeArea();
        return out;
    //TODO same inserion opperator
//     //and the insertion operator (friend) to print a Table to an std::ostream. The two players,
// the discard pile, the trading area should be printed. This is the top level print out. Note that a
// complete output with all cards for the pause functionality is printed with a separate function.
}