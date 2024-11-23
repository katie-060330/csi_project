#include <iostream>
#include "Card.h"
#include "Chain.h"
#include "Player.h"
#include "Deck.h"
#include "Table.h"
#include "TradeArea.h"
#include "Chain.h"
#include "Hand.h"
#include "CardFactory.h"
#include "DiscardPile.h"
#include "Hand.h"
#include <iostream>
#include <string>
using namespace std;

//Checks user input to see if they have inputed a number 
bool isNumber(const string &str)
{
    for (char const &c : str)
    {
        if (isdigit(c) == 0)
            return false;
    }
    return true;
}

int main()
{
    Table table = Table();
    Player p1 = table.p1; 
    Player p2 = table.p2; 
    Player players[] = {p1,p2};

    // inintlaizing the hands of the two players
    for (int i = 0; i < 5; i++)
    {
        table.p1.hand.operator+=(table.deck.draw());
        table.p2.hand.operator+=(table.deck.draw());
    }

    while (!table.deck.deck.empty())
    {
        // for each player

        // Display table?
        for(int i = 0; i < 2; i++){
            Player currentPlayer = players[i]; 
            //dispayign table 
            cout << table;
            currentPlayer.hand.operator+=(table.deck.draw());
            if (!table.ta.tradeArea.empty()){
                //add bean to the chain or discard them 
                cout << "Would you like to add the card in the trade area (a) or discard them (d) "<<endl; 
                char input; 
                cin >>input; 
                if(input == 'a'){
                    //add to the players chain
                    Card* taCard = table.ta.tradeArea.front(); 
                    table.ta.tradeArea.erase(table.ta.tradeArea.begin());
                    for(int i = 0; i < currentPlayer.chains.size(); i++){
                        if(taCard->getName() == "temp"){

                        }


                    }
                }
                else{
                    //discard the trade area 
                    table.ta.tradeArea.empty(); 
                }
            }
            // currentPlayer.
        }
        


  
}
  return 0;
}


    //     if (!table.ta.tradeArea.empty())
    //     {
    //         // add bean cards form the trade area to chains or discard them from your hand
    //         table.ta.displayTradeArea();
    //         char input = 'y';

    //         while (input == 'Y' || input == 'y')
    //         {
    //             cout << "would you like to add any of the trading cards to your chain";
    //             cin >> input;
    //             cout << "What card would you like to add to your chain (starting at 0)" << endl;
    //             std::string in;

    //             cin >> in;
    //             if (isNumber(in))
    //             {
    //                 int number = std::stoi(in); // Convert string to int
    //                 if(number >=table.ta.tradeArea.size()){
    //                      throw std::invalid_argument( "received negative value" );
    //                 }
                    
    //                         }

                
    //             else
    //             {
    //                 cout << "Input is not a valid number." << endl;
    //             }
    //         }

    //         // dicard all of the trading
    //         table.ta.discard();
    //         cout << "Trade area discared" << endl;
    //     }
    //     // play topmost card from your hand
    // }