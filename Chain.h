#include "Card.h"
#include "CardFactory.h"
#include <vector>

template<typename T> class Chain{
    Chain chian; 
    public:
    Chain<typename T>(istream& is, const CardFactory* cFactory){
        //?Chain(istream&, const CardFactory*) is a constructor which accepts an 
//?istream and reconstructs the chain from file when a game is resumed. 
        
        cin.get(is);
    }
    Chain<T>& operator+=(Card* card){

    }
    int sell(){
        

    }

};
