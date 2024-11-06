#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include <vector>


template<typename T> class Chain{
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

    }
    int sell(){
        //!ask about this function

    }

    //not sure about this
    friend ostream& operator<<(ostream& out){
        out<< chain[0].getName(); 
        for(int i = 0; i < chain.size(); i++){
            out<<chain[0].print(); 
        }
        
    }

};
