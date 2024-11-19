
#include "Card.h"


int Blue::getCardsPerCoin(int coins) {
    if(coins == 1){return 4; }
           else if (coins == 2){ return 6; }
           else if(coins == 3){ return 8;}
           else if (coins == 4){  return 10; }
           else{
                return -1;
           }
    }


string Blue::getName() {
    return "Blue";
}

int Blue::getRank() {
    return rank;
}

void Blue::print(ostream& out) {
    out << "B";
}


int Chili::getCardsPerCoin(int coins) {
     if(coins == 1){ return 3;  }
            else if (coins == 2){return 6; }
            else if(coins == 3){  return 8; }
            else{  return 9;}
}

string Chili::getName() {
    return "Chili";
}

int Chili::getRank() {
    return rank;
}

void Chili::print(ostream& out) {
    out << "C";
}


int Stink::getCardsPerCoin(int coins) {
    if(coins == 1){return 3; }
            else if (coins == 2){ return 5; }
            else if(coins == 3){ return 7; }
            else{  return 8; }
}

string Stink::getName() {
    return "Stink";
}

int Stink::getRank() {
    return rank;
}

void Stink::print(ostream& out) {
    out << "S";
}


int Green::getCardsPerCoin(int coins) {
    if(coins == 1){ return 3; }
           else if (coins == 2){ return 5; }
           else if(coins == 3){return 6; }
           else{return 7;}
}
string Green::getName(){
        return "Green";
   }
int Green::getRank(){
        return rank;
    }
void Green::print(ostream& out){
    out<<"G";

   }

   int Soy::getCardsPerCoin(int coins) {
        if(coins == 1){return 2;}
               else if (coins == 2){ return 4;  }
               else if(coins == 3){return 6; }
               else{ return 7;}
   }
   string Soy::getName(){
           return "Soy";
      }
   int Soy::getRank(){
           return rank;
       }
   void Soy::print(ostream& out){ //?
       out<<"s";

      }

    int Black::getCardsPerCoin(int coins) {
          if(coins == 1){return 2;}
                 else if (coins == 2){return 4;}
                 else if(coins == 3){  return 5;}
                 else{ return 6;   }
    }

    string Black::getName() {
        return "Black";
    }

    int Black::getRank() {
        return rank;
    }

    void Black::print(ostream& out) {
        out << "b";
    }


     int Red::getCardsPerCoin(int coins) {
              if(coins == 1){return 2;}
                      else if (coins == 2){return 3;}
                      else if(coins == 3){return 4;}
                      else{return 5;}
        }

        string Red::getName() {
            return "Red";
        }

        int Red::getRank() {
            return rank;
        }

        void Red::print(ostream& out) {
            out << "R";
        }

    int Garden::getCardsPerCoin(int coins) {
                 if(coins == 1) { return 0; }
                     else if (coins == 2) { return 2; }
                     else if(coins == 3) { return 3; }
                     else { return 0; }
            }

            string Garden::getName() {
                return "Garden";
            }

            int Garden::getRank() {
                return rank;
            }

            void Garden::print(ostream& out) {
                out << "g";
            }



/*
class Blue: public Card{
    int rank = 8;
    public:


//TODO its supposed to getcoinspercard
//!stupid
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


};*/