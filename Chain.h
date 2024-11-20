#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include <vector>
#include "IllegalType.h"
#include "Chain_Base.h"
#include <string>

//The template Chain will have to be instantiated in the program by the concrete derived card classes, e.g., 
template <class T>
class Chain : public Chain_Base{

    vector<Card*> chain;

    public:
    Chain<class T>(istream& in, const CardFactory* cf){
        string cardType; 

        //*check if the pointer to the card factory is valid 
        if(!cf){
            throw std::invalid_argument("CardFactory pointer is null")
        }
        while(in>>cardType){
            //TODO

        }

        chain.push_back(cin.get(in));
        
    }



   //!done i think
    Chain<T>& operator+=(Card* card){
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
