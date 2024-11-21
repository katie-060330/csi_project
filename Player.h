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
<<<<<<< Updated upstream:Player.h
#include "Hand.h"
=======
#include <vector>
>>>>>>> Stashed changes:Players.h

class Player: public Chain_Base<T>{
    public: 
    string name; 
    int totalCoins;
    int numberOfChains; 
    int nonZeroChains; 
<<<<<<< Updated upstream:Player.h
    bool hasThirdChain; 
    int coins;
    Hand hand;
    //TODO needs 2 chains 
    Player(); 
=======
    bool hasThirdChain;
    std::vector<Chain_Base*> chain;
    Hand* hand;
    //how do i make a player have a hand of cards
    public: 
>>>>>>> Stashed changes:Players.h
    Player(std::string& n);
    Player(istream& in, const CardFactory cardFactory);
    std::string Player::getName();
    int Player::getNumCoins();
    Player& Player::operator+=(int coins);
    int Player::getMaxChains();
    int Player::getNonZeroChains();
    Chain<T>& Player::operator[](int i);
    void Player::buyThirdChain();
<<<<<<< Updated upstream:Player.h
=======
    Hand& Player::getHand();

>>>>>>> Stashed changes:Players.h
    void Player::printHand(std::ostream& out, bool showFullHand);
};
#endif