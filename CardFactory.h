#include <iostream>
using namespace std;
#include "Card.h"


// ??not sure if this is a class or not im conused with the bean classes 

//! constructor witj all cards needed
//?20 instances of blue
//18 chilli
//16 stink
//14 green
//12 soy
//10 black
//8 red
//6 garden


//function static CardFactory* getFactory() returns a pointer to the only instance of card factory
class CardFactory{

    public:
            int top = 0; 
    CardFactory(){
        Card* deckToBe[104];

        for(int i = 0; i < 104; i++){
            if(top < 20){
                deckToBe[i] = new Blue(); 
            }
            else if (top >= 20 && top <38){
                deckToBe[i] = new Chili(); 
            }
            else if (top >= 38 && top <54){
                deckToBe[i] = new Stink(); 
            }
            else if (top >= 54 && top <68){
                deckToBe[i] = new Green(); 
            }
            else if (top >= 68 && top <80){
                deckToBe[i] = new soy(); 
            }
            else if (top >= 80 && top <90){
                deckToBe[i] = new black(); 
            }
            else if (top >= 90 && top <98){
                deckToBe[i] = new Red(); 
            }
            else{
                deckToBe[i] = new garden(); 
            }
            top++; 
        }


    }
    // Deck CardFactory::getDeck(){

    // }
    
};



