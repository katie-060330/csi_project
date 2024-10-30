#include <iostream>
#include <string>
using namespace std;

class Card{
    int rank;
    public:
    
    virtual int getCardsPerCoin(int coins); 
    virtual string getName();
    virtual int getRank();//*not sure if we want this or not TBD
    virtual void print(ostream& out); //ostream printing out emuns
};

class Blue: public Card{
    int rank = 8;
    public:

    virtual int getCardsPerCoin(int coins){
        if(coins == 1){
            return 4; 
        }
        else if (coins == 2){
            return 6; 
        }
        else if(coins == 3){
            return 8; 
        }
        else{
            return 10; 
        }
    }
    virtual string getName(){
        return "Blue"; 
   }
       virtual int getRank(){
        return rank; 
    }
   virtual void print(ostream& out){ //?
    out<<"B";

   }


};

class Chili: public Card{
    int rank =7; 
    public:

    virtual int getCardsPerCoin(int coins){
        if(coins == 1){
            return 3; 
        }
        else if (coins == 2){
            return 6; 
        }
        else if(coins == 3){
            return 8; 
        }
        else{
            return 9; 
        }
    }
    virtual string getName(){
        return "Chili"; 
   }
       virtual int getRank(){
        return rank; 
    }
   virtual void print(ostream& out){ //?
    out<<"C";

   }


};
class Stink: public Card{
    int rank = 6; 
    public:

    virtual int getCardsPerCoin(int coins){
        if(coins == 1){
            return 3; 
        }
        else if (coins == 2){
            return 5; 
        }
        else if(coins == 3){
            return 7; 
        }
        else{
            return 8; 
        }
    }
    virtual string getName(){
        return "Stink"; 
   }
       virtual int getRank(){
        return rank; 
    }
   virtual void print(ostream& out){ //?
    out<<"S";

   }


};
class Green: public Card{
    int rank = 5; 
    public:

    virtual int getCardsPerCoin(int coins){
        if(coins == 1){
            return 3; 
        }
        else if (coins == 2){
            return 5; 
        }
        else if(coins == 3){
            return 6; 
        }
        else{
            return 7; 
        }
    }
    virtual string getName(){
        return "Green"; 
   }
       virtual int getRank(){
        return rank; 
    }
   virtual void print(ostream& out){ //?
    out<<"G";

   }


};
class soy: public Card{
    int rank = 4; 
    public:

    virtual int getCardsPerCoin(int coins){
        if(coins == 1){
            return 2; 
        }
        else if (coins == 2){
            return 4; 
        }
        else if(coins == 3){
            return 6; 
        }
        else{
            return 7; 
        }
    }
    virtual string getName(){
        return "soy"; 
   }
       virtual int getRank(){
        return rank; 
    }
   virtual void print(ostream& out){ //?
    out<<"s";

   }


};
class black: public Card{
    int rank = 3; 
    public:

    virtual int getCardsPerCoin(int coins){
        if(coins == 1){
            return 2; 
        }
        else if (coins == 2){
            return 4; 
        }
        else if(coins == 3){
            return 5; 
        }
        else{
            return 6; 
        }
    }
    virtual string getName(){
        return "black"; 
   }
       virtual int getRank(){
        return rank; 
    }
   virtual void print(ostream& out){ //?
    out<<"b";

   }


};
class Red: public Card{
    int rank = 2; 
    
    public:

    virtual int getCardsPerCoin(int coins){
        if(coins == 1){
            return 2; 
        }
        else if (coins == 2){
            return 3; 
        }
        else if(coins == 3){
            return 4; 
        }
        else{
            return 5; 
        }
    }
    virtual string getName(){
        return "Red"; 
   }
       virtual int getRank(){
        return rank; 
    }
   virtual void print(ostream& out){ //?
    out<<"R";

   }


};
class garden: public Card{
    int rank = 1; 
    public:

    virtual int getCardsPerCoin(int coins){
        if(coins == 1){
            return 0; //!maybe 0??? maybe null
        }
        else if (coins == 2){
            return 2; 
        }
        else if(coins == 3){
            return 3; 
        }
        else{
            return 0; //!maybe null??
        }
    }
    virtual string getName(){
        return "garden"; 
   }
       virtual int getRank(){
        return rank; 
    }
   virtual void print(ostream& out){ //?
    out<<"g";

   }


};