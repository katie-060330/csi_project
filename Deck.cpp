#include "Deck.h"

    Deck::Deck(istream& in, const CardFactory* cardFactory){
        string cardType;
        if(cardFactory == nullptr){
            throw std::invalid_argument("CardFactory pointer is null.");
        }
        while(in>>cardType){
            Card* card = cardFactory->getCard(cardType);
            if(card){
                deck.push_back(card);
            }
            else{ throw std::runtime_error("Invalid card type encountered in input stream: " + cardType);}

        }
        //deck.insert()
        //?do we remove what is in the input from the cardFactory and put it into the deck??
        //use cardFactory.getDeck and then i guess like read the in and populate the deck?
        //use pushback here
    }



    //!done i think
    Card* Deck::draw(){
        if(!deck.empty()){
        Card* toReturn = deck.front();
        deck.erase(deck.begin());
        return toReturn;
        }
        else{return nullptr;}
    }

std::ostream& operator<<(std::ostream& out, const Deck& d) {
    out << "deck: ";
    for (size_t i = 0; i < d.deck.size(); ++i) {
        out << d.deck[i]->getName() << " , ";
    }
    return out;
}


