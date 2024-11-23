#ifndef PLAYERS_H
#define PLAYERS_H
#include <iostream>
#include "CardFactory.h"
#include "Card.h"
#include "Chain.h"

#include "NotEnoughCoins.h"
#include "Deck.h"
#include <string>
#include "Hand.h"
#include <vector>

class Player{
    public: 
    string name; 
    int totalCoins;
    int numberOfChains; 
    int nonZeroChains; 
    bool hasThirdChain; 
    Hand hand;
    bool hasThirdChain;
    vector<Chain<Card*>> chains; 
    //TODO needs 2 chains 
    Player(); 
    //how do i make a player have a hand of cards
    public: 
    Player(std::string& n);
    Player(istream& in, const CardFactory cardFactory);
    std::string getName() const;
    int getNumCoins();
    Player& operator+=(int coins);
    int getMaxChains();
    int getNonZeroChains();
    
    Chain<Card*>& Player::operator[](int i);
    void buyThirdChain();
    Hand& getHand();
    void printHand(std::ostream& out, bool showFullHand);
     friend ostream &operator<<(ostream &out, const Player &player);
};
#endif