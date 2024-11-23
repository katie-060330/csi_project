#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardFactory.h"
#include "Chain_Base.h"
using namespace std; 

//The template Chain will have to be instantiated in the program by the concrete derived card classes, e.g., 
template <class T>
class Chain : public Chain_Base{



    public:
    Chain(){
        //the costructor creating a chain of type T
    }

   //!done i think
    Chain<T>& operator+=(Card* card){
        

        //checking that the card that wants to be added is of the same tye of the existing chain 
        if(typeid(*card) != typeid(chain.front())){
            throw invalid_argument("Not the right type of card");
        }

        //safely casting
        chain.push_back(static_cast<T*>(card));

        return *this;
    }
    void Chain<T*>::addCard(Card* card) override {
    *this += card;  
}

    int sell(){
        //get the card at position 0, and find out how many coins we get based on the size of the chain
        if (chain.empty()) return 0;
        Card* chainOfType = chain.at(0); 
        chain.erase();
        return chainOfType->getCoinsPerCard(chain.size()); 
        
    }

    string getType(){
        if(chain.empty()){
            return "Empty"; 
        }
        else{
           return chain.begin()->getName(); 

        }
    }

    //not sure about this

friend std::ostream& operator<<(std::ostream& out, const Chain<T>& chain)
{
        if(chain.chain.empty()){
            out << "Empty";

        }
        out<< chain[0].getName(); 
        for(int i = 0; i < chain.size(); i++){
            //is this the same out stream as the one in the card class 
            out<<chain[0].print(); 
        }
        return out; 
        
    }

    int startFreshChin(Card* card){
        //sells the existing 
        sell();
        chain.push_back(card); 

    }
    Card* getCardType(){
        if(chain.empty()){
            return nullptr; 
        }
        return chain.at(0); 
    }
    private:
        vector<T*> chain; 


};
