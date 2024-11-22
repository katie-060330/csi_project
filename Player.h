#ifndef PLAYERS_H
#define PLAYERS_H
#include <iostream>
#include "CardFactory.h"
#include "Card.h"
#include "Chain.h"
#include "NotEnoughCoins.h"
#include "Deck.h"
#include "Chain_Base.h"
#include <string>
#include "Hand.h"
#include <vector>

class Player: public Chain_Base<T>{
    public: 
    string name; 
    int totalCoins;
    int numberOfChains; 
    int nonZeroChains; 
    bool hasThirdChain; 
    int coins;
    Hand hand;
    bool hasThirdChain;
    Chain<T> chain1;
    Chain<T> chain2; 
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
    Chain<T>& operator[](int i);
    void buyThirdChain();
    Hand& getHand();
    void printHand(std::ostream& out, bool showFullHand);
     friend ostream &operator<<(ostream &out, const Player &player);
};
#endif