#ifndef HAND_H
#define HAND_H
#include "Card.h"
#include "CardFactory.h"
#include <list>
class Hand{
    public:
    std::list<Card*> hand;
    Hand(istream& in, const CardFactory cardFactory);

    Hand& operator+=(Card* c);


    Card* play();

    Card* top() const;

    Card* operator[](int i);

    friend ostream& operator<<(ostream& out, const Hand& h){
        out<< "hand: ";
        for(auto current = h.hand.begin(); current != h.hand.end(); current++){
            out<< (*current)->getName()<<" , ";
        }
        return out;

       }

};
#endif