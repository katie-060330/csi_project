#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include <vector>
#include "IllegalType.h"

//The template Chain will have to be instantiated in the program by the concrete derived card classes, e.g., 
class Chain<typename T> : public Card{
    //!work on this in relation to chain_base, how do these class and interface interact wiht each other
    vector<Card*> chain;
    public:
    Chain<typename T>(istream& in, const CardFactory* cFactory){
        //?Chain(istream&, const CardFactory*) is a constructor which accepts an 
//?istream and reconstructs the chain from file when a game is resumed. 
        
        //* gets the input and pushes it into the vector chain
        chain.push_back(cin.get(in));
        
    }



   //!done i think
    Chain<T>& operator+=(Card* card){
// do exception handling for the card if it does not match the template type in the chain
    //illegal type needs to be raised
    //otherwise
    chain.push_back(card);
    return *this;
    }



   //TODO
    int sell(){
        //!ask about this function
        // no because it would just be one so what we can do is retrieve the
        //type of the chain, then count the amount of cards in the chain
        // and sell accordingly
        //! stupid
        return 0;
    }

    //not sure about this
    friend ostream& operator<<(ostream& out, const Chain& chain){
        out<< chain[0].getName(); 
        for(int i = 0; i < chain.size(); i++){
            out<<chain[0].print(); 
        }
        return out; 
        
    }

};
