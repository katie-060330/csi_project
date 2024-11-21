#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include <vector>
#include "Chain_Base.h"
#include <string>
using namespace std; 

//The template Chain will have to be instantiated in the program by the concrete derived card classes, e.g., 
template <class T>
class Chain : public Chain_Base{

    vector<T*> chain;

    public:
    Chain::Chain<T>(){
        //the costructor creating a chain of type T
    }

   //!done i think
    Chain<T>& operator+=(Card* card){

        //checking that the card that wants to be added is of the same tye of the existing chain 
        if(typeid(*card) != typeid(T)){
            throw invalid_argument("Not the right type of card");
        }

        //safely casting
        chain.push_back(static_cast<T*>(card));

        return *this;
    }

    int sell(){
        //get the card at position 0, and find out how many coins we get based on the size of the chain
        return chain.at(0)->getCoinsPerCard(chain.size()); 
    }

    //not sure about this
    friend ostream& operator<<(ostream& out, const Chain& chain){
        out<< chain[0].getName(); 
        for(int i = 0; i < chain.size(); i++){
            //is this the same out stream as the one in the card class 
            out<<chain[0].print(); 
        }
        return out; 
        
    }

};
