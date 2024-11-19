#ifndef PLAYERS_H
#define PLAYERS_H
#include <iostream>
#include "CardFactory.h"
#include "Card.h"
#include "Chain.h"
#include "NotEnoughCoins.h"
#include <string>

class Player{
    string name; 
    int coins; 
    int numberOfChains; 
    int nonZeroChains; 
    bool hasThirdChain; 
    public: 
    Player(std::string& n);
    Player(istream& in, const CardFactory cardFactory);
    std::string Player::getName();
    int Player::getNumCoins();
    Player& Player::operator+=(int coins);
    int Player::getMaxChains();
    int Player::nonZeroChains();
    Chain& Player::operator[](int i){;
    void Player::buyThirdChain();

    void Player::printHand(std::ostream& out, bool showFullHand);
};
#endif