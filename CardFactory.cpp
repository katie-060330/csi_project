
#include "CardFactory.h"
#include <algorithm>



//have to initialize static stuff here
CardFactory* CardFactory::instance = nullptr;
Card* CardFactory::deckToBe[CardFactory::deckSize];

 CardFactory::CardFactory(){
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
 }

     CardFactory* CardFactory::getCardFactory(){
       if (instance == nullptr) {
               instance = new CardFactory();
          }
          return instance;
    }

    Card* CardFactory::getCard(string cardType){
        Deck d = getDeck();
        for(int i =0; i < d.deck.size();i++){
            if(d.deck[i]->getName() ==cardType ){
                Card* c = d.deck[i];
                d.deck.erase(d.deck.begin() + i);  
                return c;
            }
        }
        return nullptr;
        //from the deck created we can go through it and if the current card == to that of the same type as parameter
        //we remove it from the deck
        //and put it into chain or 

    }

    //TODO because we need to know proper way to construct the deck
    // and also learn how to use the std::shuffle
    Deck CardFactory::getDeck(){
  //      Deck cardDeck = new Deck("", this);
    //    std::shuffle(cardDeck.deck);
      //  return cardDeck.deck; 
//         returns a deck with all 104 bean cards. Note that the 104 bean cards are
// always the same but their order in the deck needs to be different every time. Use
// std::shuffle to achieve this. 
    }
    




