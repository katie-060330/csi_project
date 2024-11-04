#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include <vector>


template<typename T> class Chain{
    //!work on this in relation to chain_base, how do these class and interface interact wiht each other
    vector<Card*> chian;
    public:
    Chain<typename T>(istream& is, const CardFactory* cFactory){
        //?Chain(istream&, const CardFactory*) is a constructor which accepts an 
//?istream and reconstructs the chain from file when a game is resumed. 
        
        chain.push_back(cin.get(is));
    }
    Chain<T>& operator+=(Card* card){

    }
    int sell(){
        

    }

    friend ostream& operator<<(ostream& out){
        
    }

};
