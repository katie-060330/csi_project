#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include <vector>
#include "IllegalType.h"

//The template Chain will have to be instantiated in the program by the concrete derived card classes, e.g., 
class Chain<typename T> : public Card{
    //!work on this in relation to chain_base, how do these class and interface interact wiht each other
    
    vector<Card*> chian;
    public:
    Chain<typename T>(istream& in, const CardFactory* cFactory){
        //?Chain(istream&, const CardFactory*) is a constructor which accepts an 
//?istream and reconstructs the chain from file when a game is resumed. 
        
        //* gets the input and pushes it into the vector chain
        chain.push_back(cin.get(in));
        
    }
    Chain<T>& operator+=(Card* card){
        //*returns a refrence of chain after adding the card to the chain 
        if (typeid(chain)) != typeid(card){
            throw IllegalType("Not the same type as existing chain")
        }
        else{
            //!temprary not sure about this but this will add it to the chain 
            char temp[] = card.getName();
            chain.push_back(temp[0]);
        }
        return *chain; 

    }
    int sell(){
        //!ask about this function
        int size = chain.size(); 


    }

    //not sure about this
    friend ostream& operator<<(ostream& out){
        out<< chain[0].getName(); 
        for(int i = 0; i < chain.size(); i++){
            out<<chain[0].print(); 
        }
        return out; 
        
    }

};
