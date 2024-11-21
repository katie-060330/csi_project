#include "Hand.h"
using namespace std; 


Hand::Hand(){
         list<Card*> hand = {};
    }


    Hand& Hand::operator+=(Card* c){
        //*adds to the rear of the hand
        hand.push_back(c);
        return *this;
    }

    Card* Hand::play(){
        //*returns and removes the card that the player must play, the highest ranking bean
        if(hand.empty()){
            return nullptr;
        }
        Card* card = top();

        hand.remove(card);

        return card;



        }

    //!done i think
    Card* Hand::top() const{
        //*returns but doesnt remove the top of the hand
        if(!hand.empty()){
            Card* c = hand.begin();
            return c;
        }
        return nullptr;
/*
        for(int i=0; i< hand.size();i++){
            Card* currentCard = operator[](i);
            if(currentCard->getRank() > highest->getRank()){
                highest = currentCard;
            }

        }*/
        //for everycard in the cards, get the rank
        //then get the card with the highest rank
    }


   //!done i think
    Card* Hand::operator[](int i){
        if (i<0|| i>= hand.size()) {
        return nullptr;
    }
        //*returns the card given at that index i
        auto front = hand.begin();
        std::advance(front, i);
        return *front;

    }