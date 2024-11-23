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

    public:
    Chain();    
    virtual Chain<T>& operator+=(Card* card); 
    int sell();
    friend std::ostream& operator<<(std::ostream& out, const Chain<T>& chain);
    string getType();
    int startFreshChain(Card* card);
    Card* getCardType();
    private:
        vector<T*> chain;

};
