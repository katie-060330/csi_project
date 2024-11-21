#include <iostream>
class Chain_Base{
    
    virtual ~Chain_Base() = default;
    virtual void addCard(Card* card) = 0;
    virtual int sell(); 
    // virtual friend ostream& operator<<(ostream& out, const Chain& chain); 



};