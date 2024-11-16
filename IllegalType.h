#include <iostream>
#include <string>
using namespace std; 
class IllegalType{
    string message; 
    public:
    IllegalType(const char* msg): message(msg){}

    const char* what() const throw(){
        return message.c_str();
    }

}; 