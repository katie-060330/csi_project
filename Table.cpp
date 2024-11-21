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
    //checks if the deck is empty
<<<<<<< Updated upstream
    if(p1.getName() == s && deck.deck.empty() && p1.getNumCoins() > p2.getNumCoins()){
        return true;
    }
    else if(p2.getName() == s &&deck.deck.empty() && p1.getNumCoins() < p2.getNumCoins()){
        return true;
=======
    if(p1->getName() == s && deck.empty() && p1->getNumCoins() > p2.getNumCoins()){
    return true;


    }
    else if(p2->getName() == s && deck.empty() && p1->getNumCoins() < p2.getNumCoins()){
    return true;
>>>>>>> Stashed changes
    }
    return false;

//          returns true when a player has won. The name of the player is
// returned by reference (in the argument). The winning condition is that all cards from the deck
// must have been picked up and then the player with the most coins wins.
    }
    void Table::printHand(bool showFullHand){
        if(showFullHand){
            //TODO print the full hand to the ostream
        }
        else{
            //TODO only show the top card
        }
    }
    //TODO same inserion opperator
//     //and the insertion operator (friend) to print a Table to an std::ostream. The two players,
// the discard pile, the trading area should be printed. This is the top level print out. Note that a
// complete output with all cards for the pause functionality is printed with a separate function.
