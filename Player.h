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

class Player: public Chain_Base<T>{
    public: 
    string name; 
    int totalCoins;
    int numberOfChains; 
    int nonZeroChains; 
    bool hasThirdChain; 
    int coins;
    Hand hand;
    //TODO needs 2 chains 
    Player(); 
    Player(std::string& n);
    Player(istream& in, const CardFactory cardFactory);
    std::string Player::getName();
    int Player::getNumCoins();
    Player& Player::operator+=(int coins);
    int Player::getMaxChains();
    int Player::getNonZeroChains();
    Chain<T>& Player::operator[](int i);
    void Player::buyThirdChain();
    void Player::printHand(std::ostream& out, bool showFullHand);
};
#endif