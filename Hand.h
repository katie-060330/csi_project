#ifndef HAND_H
#define HAND_H
#include "Card.h"
#include "CardFactory.h"
#include <list>
#include <iostream> 
class Hand{
    public:
    std::list<Card*> hand;
    Hand() : hand() {};
    Hand& operator+=(Card* c);
    Card* play();
    Card* top() const;
    Card* operator[](int i);
    friend ostream& operator<<(ostream& out, const Hand& h);

};
#endif