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
    std::vector<Chain_Base*> chain;
    //TODO needs 2 chains 
    Player(); 
    //how do i make a player have a hand of cards
    public: 
    Player(std::string& n);
    Player(istream& in, const CardFactory cardFactory);
    std::string Player::getName();
    int Player::getNumCoins();
    Player& Player::operator+=(int coins);
    int Player::getMaxChains();
    int Player::getNonZeroChains();
    Chain<T>& Player::operator[](int i);
    void Player::buyThirdChain();
    Hand& Player::getHand();
    void Player::printHand(std::ostream& out, bool showFullHand);
};
#endif