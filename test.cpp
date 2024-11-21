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

int main()
{
    Table table = Table();

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

            }

            
            // dicard all of the trading
            table.ta.discard();
            cout<<"Trade area discarede"<<endl;
        }
        // play topmost card from your hand
    }

    return 0;
}