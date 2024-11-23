#include <iostream>
template <class T>
class Chain_Base{
    
    virtual ~Chain_Base() = default;
    virtual void addCard(Card* card);
    virtual int sell(); 
    friend ostream& operator<<(ostream& out, const Chain<T>& chain); 



};