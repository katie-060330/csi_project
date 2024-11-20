#include <iostream>
template<class T> class Chain_Base{
    
    virtual Chain(); 
    virtual Chain<T>& operator+=(Card*); 
    virtual int sell(); 
    // virtual friend ostream& operator<<(ostream& out, const Chain& chain); 



};