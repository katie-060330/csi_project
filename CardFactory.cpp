#include "CardFactory.h"
#include "Deck.h"
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <random>
#include <chrono>





//have to initialize static stuff here
CardFactory* CardFactory::instance = nullptr;
//static initalization of the array deck to be
Card* CardFactory::deckToBe[CardFactory::deckSize];

CardFactory::CardFactory() : cardDeck(new Deck()) {
    for (int i = 0; i < deckSize; i++) {
        if (i < 20) deckToBe[i] = new Blue();
        else if (i < 38) deckToBe[i] = new Chili();
        else if (i < 54) deckToBe[i] = new Stink();
        else if (i < 68) deckToBe[i] = new Green();
        else if (i < 80) deckToBe[i] = new Soy();
        else if (i < 90) deckToBe[i] = new Black();
        else if (i < 98) deckToBe[i] = new Red();
        else deckToBe[i] = new Garden();
    }
}/*
 CardFactory::CardFactory() cardDeck(new Deck()){

             for(int i = 0; i < deckSize; i++){
                              if(i < 20){ deckToBe[i] = new Blue();}
                              else if (i < 38) {deckToBe[i] = new Chili();  }
                              else if (i < 54) {deckToBe[i] = new Stink(); }
                              else if (i < 68) {deckToBe[i] = new Green();}
                               else if (i < 80) {deckToBe[i] = new Soy();}
                               else if (i < 90) {deckToBe[i] = new Black();}
                               else if (i < 98) {deckToBe[i] = new Red(); }
                               else {deckToBe[i] = new Garden();}
                          }

             }*/

 CardFactory::~CardFactory() {
     for (Card* card : deckToBe) {
         delete card;
     }
 }

     CardFactory* CardFactory::getCardFactory(){
       if (instance == nullptr) {
               instance = new CardFactory();
          }
          return instance;
    }
/*
    Card* CardFactory::getCard(string cardType){
        
        for(int i =0; i < deck.size();i++){
            if(d.deck[i]->getName() == cardType ){
                Card* c = d.deck[i];
                // d.deck.erase(d.deck.begin() + i);  
                return c;
            }
        }
        return nullptr;


    }
*/
    //TODO because we need to know proper way to construct the deck

    Deck CardFactory::getDeck(){
        for(int i =0; i<deckSize; i++){
        cardDeck->deck.push_back(deckToBe[i]);
        }
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::shuffle(cardDeck->deck.begin(), cardDeck->deck.end(), std::default_random_engine(seed));

        return *cardDeck;
    }
    




