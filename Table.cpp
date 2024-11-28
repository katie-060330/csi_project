  #include "Table.h"
  Table::Table(){
        
        string playerOne;
        string playerTwo;
        // initalizig player one
        cout << "Player one enter name: ";
    //    cin.ignore();
        getline(cin, playerOne);
      //  cout << "Player one name: " << playerOne << endl;
        p1 = Player(playerOne);
        cout << "Player two enter name: ";
        getline(cin, playerTwo);
       // cout << "Player two name: " << playerTwo << endl;
       /* cout << "Player one enter name: ";
        getline(cin, playerOne);
        
        // initalizing player two
        cout << "Player two enter name: ";*/
        p2= Player(playerTwo);
        //deck = new Deck();
        CardFactory *cf = CardFactory::getCardFactory();
	    deck = cf->getDeck();
        dp = DiscardPile(); 
        ta = TradeArea(); 
    }
    bool Table::win(std::string& s){
    if(deck.deck.empty()){
    if(p1.getName() == s && p1.getNumCoins() > p2.getNumCoins()){
        return true;
    }
    else if(p2.getName() == s && p1.getNumCoins() < p2.getNumCoins()){
        return true;

    }
    }
    return false;

    }


    void Table::printHand(bool showFullHand){
        if(showFullHand){
            cout << hand; 
            //TODO print the full hand to the ostream
        }
        else{
            cout <<hand->top(); 
        }
    }
    std::ostream& operator<<(std::ostream& out, const Table& table) {
        out<< "Player 1 Name: "<<table.p1.getName()<<"\n";
        out<< "Player 2 Name: "<< table.p2.getName()<<"\n";
        out<<"Discard Pile: "<< table.dp;
        out<<"Trade Area: "<< table.ta;
        return out;
    //TODO same inserion opperator
//     //and the insertion operator (friend) to print a Table to an std::ostream. The two players,
// the discard pile, the trading area should be printed. This is the top level print out. Note that a
// complete output with all cards for the pause functionality is printed with a separate function.
}