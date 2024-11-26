#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardFactory.h"
// #include "Chain_Base.h"
using namespace std; 

//The template Chain will have to be instantiated in the program by the concrete derived card classes, e.g., 
template <class T>
class Chain {

friend std::ostream& operator<<(std::ostream& out, const Chain& chain) {
    if (chain.chain.empty()) {
        out << "Empty";
    } else {
    //prints type of car
        out << chain.chain.front()->getName() << "\t";
        //prints every card initial
        for (const T* card : chain.chain) {
            card->print(out);
            out<<" ";
        }
    }
    return out;
}
};
