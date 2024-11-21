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
        table.p1.hand.operator+=(table.deck.draw());
        if (!table.ta.tradeArea.empty())
        {
            // add bean cards form the trade area to chains or discard them from your hand
            table.ta.displayTradeArea();
            char input = 'y';

            while (input == 'Y' || input == 'y')
            {
                cout << "would you like to add any of the trading cards to your chain";
                cin >> input;
                cout << "What card would you like to add to your chain (starting at 0)" << endl;
                int in;

                cin >> in;
                if (isNumber(in))
                {
                    if(in >=table.ta.tradeArea.size()){
                         throw std::invalid_argument( "received negative value" );
                    }
                    else{
                        //if the chain is empty we add the card of that type to the empty chain 
                        if(p1.chain1.empty()){
                            p1.chain1.push_back(table.ta.tradeArea[in])
                            table.ta.tradeArea.
                            table.ta.p1.chain1.chain+=(table.ta.tradeArea[in])
                        }
                        else if if(table.ta.p1.chain2.chain.empty()){
                            table.ta.p1.chain1.chain+=(table.ta.tradeArea[in])
                        }
                        //if both chians are occupied then we add it to the xisting chian 
                        else if(typeid(table.ta.tradeArea[in] == typeid(table.p1.chain1[0]))){
                            table.ta.p1.chain1.operator+=table.ta.tradeArea[in];

                        }
                        else if(typeid(table.ta.tradeArea[in] == typeid(table.p1.chain2[0]))){
                            table.ta.p1.chain2.operator+=table.ta.tradeArea[in];

                        }
                        //bad play by p1, will have to get rid of one of the chians becasue both are occupied 
                        else{
                            cout<<"What chain would you like to replace"<<endl; 
                            int chainNumber; 
                            cin>>chainNumber; 
                            if(isNumber(chianNumber)){
                                if(chainNumber == 1){
                                    table.p1

                                }
                            }

                        }
                    }
                }
                else
                {
                    cout << "Input is not a valid number." << endl;
                }
            }

            // dicard all of the trading
            table.ta.discard();
            cout << "Trade area discared" << endl;
        }
        // play topmost card from your hand
    }

    return 0;
}