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
    Chain::Chain<T>();    
    virtual Chain<T>& operator+=(Card* card); 
    int sell();
    // friend ostream& operator<<(ostream& out, const Chain& chain);

    private:
        vector<T*> chain;

};
