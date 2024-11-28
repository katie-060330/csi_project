#include <iostream>
#include <string>
#include <cctype>
#include "Table.h"
using namespace std;
void playCard(Player& currentPlayer);
// Checks user input to see if they have inputed a number
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
    

    Table table; 
    
    Player &p1 = table.p1;
    Player &p2 = table.p2;
    Player *players[] = {&p1, &p2};
    
    for (int i = 0; i < 5; i++)
    {
        table.p1.hand.operator+=(table.deck.draw());
        table.p2.hand.operator+=(table.deck.draw());
    }

    if (!table.deck.deck.empty())
    {
        // for each player
        for (int i = 0; i < 2; i++)
        {
            Player *currentPlayer = players[i];
            // dispayign table
            cout << table;
            currentPlayer->hand.operator+=(table.deck.draw());
            
            cout<<currentPlayer->hand;
            if (!table.ta.tradeArea.empty())
            {
                // add bean to the chain or discard them
                cout << "Would you like to add the card in the trade area (a) or discard them (d) " << endl;
                char input;
                cin >> input;
                if (input == 'a')
                {
                    // add to the players chain
                    Card *taCard = table.ta.tradeArea.front();
                    for (int j = 0; j < currentPlayer->chains.size(); j++)
                    {
                        // verifying that the
                        if (taCard->getName() == currentPlayer->chains[j].getType())
                        {
                            // trading and deleting the card from the trade area
                            currentPlayer->chains[j].operator+=(table.ta.trade(taCard->getName()));
                        }
                    }
                }
                else
                {
                    // discard the trade area
                    table.ta.discard();
                }
            }

           
            // currentPlayer has to play top most hand
            playCard(*currentPlayer);  
            string input = "y";
            // keeps asking if they want to play cards
            while (input == "y")
            {
                cout << "Would you like to play a card again you must play: " << *(currentPlayer->hand.top()) << endl;
                cin >> input;
                if (input == "y")
                {
                    playCard(*currentPlayer);
                }
                else
                {
                    break;
                }
            }
            // if the player wants to sell thier chains
            // TODO i think we automaticall sell the chains that are of length to earn coins...

            cout << "would you like to sell any of your " << currentPlayer->chains.size() << " chains?" << endl;
            cin >> input;
            if (isNumber(input))
            {
                // getting index of the chain
                int number = stoi(input);
                number = number - 1;
                if (number > currentPlayer->chains.size())
                {
                    throw invalid_argument("index is out of range");
                }
                else
                {
                    currentPlayer->chains[number].sell();
                    cout << "sold chain " << number + 1 << endl;
                }
            }

            cout << "would you like to discard any of your cards (y)" << endl;
            cin >> input;

            if (input == "y" || input == "Y")
            {
                cout << currentPlayer->hand << endl;
                cout << "what card would you like to discard starting at 0" << endl;
                cin >> input;
                if (isNumber(input))
                {
                    // getting index of the chain
                    int number = stoi(input);
                    if (number > currentPlayer->hand.hand.size())
                    {
                        throw invalid_argument("index is out of range");
                    }
                    else
                    {
                        auto itterator = currentPlayer->hand.hand.begin();
                        advance(itterator, number);
                        currentPlayer->hand.hand.erase(itterator);
                    }
                }
                else
                {
                    throw invalid_argument("Input was not a character");
                }
            }
            // draw three cards from the deck and add them to the trade area
            for (int j = 0; j < 3; j++)
            {
                table.ta.operator+=(table.deck.draw());
            }
            // if hte top card of hte discard pile matches the esisting

            while (table.ta.legal(table.dp.top()))
            {
                table.ta.operator+=(table.dp.pickUp());
            }

            input = "y";
            do
            {
                cout << "would you like to chain up any of these cards (y) " << table.ta << endl;
                cin >> input;
                if (input == "y" || input == "Y")
                {
                    for (int j = 0; j < currentPlayer->chains.size(); j++)
                    {
                        // auotmatical adds all of the cards to the chains that it matches
                        currentPlayer->chains[j].operator+=(table.ta.trade(currentPlayer->chains[j].getType()));
                    }
                }

            } while (input == "y" || input == "Y");

            for (int j = 0; j < 2; j++)
            {
                currentPlayer->hand.operator+=(table.deck.draw());
            }
        }
    }
    return 0;
}

void playCard(Player& currentPlayer){
    bool played = false;
    Card* toPlay = currentPlayer.hand.play(); 
   
   
    for (int i = 0; i < currentPlayer.chains.size(); ++i) {
        //if the type of chain and the card name match then add it to the chain
        if (toPlay->getName() == currentPlayer.chains[i].getType()) {
            currentPlayer.chains[i].operator+=(toPlay);
            played = true;
            break;
        }
    }

    //if you end up not playing it
    if (!played) {
        string inputNumber;
        int chainLimit = currentPlayer.hasThirdChain ? 3 : 2;
        //print out current chains
        cout << "Your current chains are:" << endl;
        for (int i = 0; i < currentPlayer.chains.size(); ++i) {
            cout << "Chain " << (i + 1) << ": " << currentPlayer.chains[i] << endl;
        }
        //choose the chain you want to replace
        cout << "You need to replace a chain. Which one would you like to replace (1-" << chainLimit << ")?" << endl;
        cin >> inputNumber;


        if (isNumber(inputNumber)) {
            int number = stoi(inputNumber) - 1; 
            if (number < 0 || number >= currentPlayer.chains.size()) {
                throw invalid_argument("Index is out of range");
            }
            //refresh chain with current
            currentPlayer.chains[number].startFreshChain(toPlay);
        } else {
            throw invalid_argument("Invalid input: not a number");
        }
    }

}