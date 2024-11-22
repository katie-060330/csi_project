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
    template<typename T>
    Chain(){
        //the costructor creating a chain of type T
    }

   //!done i think
   template<typename T>
    Chain<T*>::Chain<T>& Chain<T*>::operator+=(Card* card){

        //checking that the card that wants to be added is of the same tye of the existing chain 
        if(typeid(*card) != typeid(chain.front())){
            throw invalid_argument("Not the right type of card");
        }

        //safely casting
        chain.push_back(static_cast<T*>(card));

        return *this;
    }
    template<typename T>
    void Chain<T*>::addCard(Card* card) override {
    *this += card;  
}
    template<typename T>
    int Chain<T*>::sell(){
        //get the card at position 0, and find out how many coins we get based on the size of the chain
        if (chain.empty()) return 0;
        return chain.at(0)->getCoinsPerCard(chain.size()); 
    }

    //not sure about this
    /*
    friend ostream& operator<<(ostream& out, const Chain& chain){
        out<< chain[0].getName(); 
        for(int i = 0; i < chain.size(); i++){
            //is this the same out stream as the one in the card class 
            out<<chain[0].print(); 
        }
        return out; 
        
    }*/


};
