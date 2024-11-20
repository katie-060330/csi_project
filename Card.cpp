
#include "Card.h"
#include <stdexcept>
Card::~Card() {}

std::ostream& operator<<(std::ostream& os, const Card& card) {
    card.print(os);
    return os;
}

int Blue::getCardsPerCoin(int coins) {
    if(coins == 1){return 4; }
           else if (coins == 2){ return 6; }
           else if(coins == 3){ return 8;}
           else if (coins == 4){  return 10; }
    else{ throw std::invalid_argument("Coins cannot have values other than 1, 2, 3, 4");}
    }

int Blue::getCoinsPerCard(int cards) {
        if(cards <4 && cards>=0){return 0;}
        else if(cards==4 || cards==5){return 1; }
           else if (cards<=7 && cards>5){ return 2; }
           else if(cards>7 && cards<=9){ return 3;}
           else if (cards>9 && cards <=20){  return 4; }
    else {throw std::invalid_argument("Only 20 Blue cards in deck");}

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
            else if(coins == 2){return 6; }
            else if(coins == 3){  return 8; }
            else if(coins==4) {  return 9;}
      else{throw std::invalid_argument( "Coins cannot have values other than 1,2,3,4" );}
}
int Chili::getCoinsPerCard(int cards) {
    if(cards <3 &&cards>=0){return 0;}
        else if(cards<=5 && cards>=3){return 1; }
           else if (cards<=7 && cards>5){ return 2; }
           else if(cards==8){ return 3;}
           else  if(cards>=9 && cards <=18 ){  return 4; }
            else{throw std::invalid_argument( "Only 18 Chili cards in deck" );}
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
            else if(coins==4){  return 8; }
 else{throw std::invalid_argument( "Coins cannot have values other than 1,2,3,4" );}
}
int Stink::getCoinsPerCard(int cards) {
    if(cards <3&&cards >=0){return 0;}
        else if(cards==4 || cards==3){return 1; }
           else if (cards<=7 && cards>5){ return 2; }
           else if(cards==8){ return 3;}
           else if (cards>=9 && cards <=16){  return 4; }

            else{throw std::invalid_argument( "Only 16 stink cards in deck" );}
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
           else if (coins ==4) {return 7;}
           else{throw std::invalid_argument( "Coins cannot have values other than 1,2,3,4" );}
}

int Green::getCoinsPerCard(int cards) {
    if(cards <3&& cards>=0){return 0;}
        else if(cards==4 || cards==3){return 1; }
           else if (cards==5){ return 2; }
           else if(cards==6){ return 3;}
           else if (cards>=7 && cards <=14){  return 4; }

            else{throw std::invalid_argument( "Only 14 green cards in deck" );}
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
               else if (coins ==4){ return 7;}
      else{throw std::invalid_argument( "Coins cannot have values other than 1,2,3,4" );}
   }
   int Soy::getCoinsPerCard(int cards) {
       if(cards <2 && cards>=0){return 0;}
       else if(cards==2 || cards==3){return 1; }
       else if (cards==5 || cards==4){ return 2; }
       else if(cards==6){ return 3;}
       else if(cards>=7 && cards <=12){  return 4; }
       //not enought cards in teh deck to make a chain
       else{throw std::invalid_argument( "Only 12 soy cards in deck" );}
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
                 else if (coins ==4){ return 6;   }
             else{throw std::invalid_argument( "Coins cannot have values other than 1,2,3,4" );}
    }
    int Black::getCoinsPerCard(int cards) {
           if(cards < 2 && cards>=0){return 0;}
               else if(cards==2 || cards==3){return 1; }
                  else if (cards==4){ return 2; }
                  else if(cards==5){ return 3;}
                  else if (cards>=6 && cards <=10){  return 4; }

                   else{throw std::invalid_argument( "Only 10 Black cards in deck & there cant be negatives" );}
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
                      else if (coins ==4) {return 5;}
     else{throw std::invalid_argument( "Coins cannot have values other than 1,2,3,4" );}
        }
         int Red::getCoinsPerCard(int cards) {
                   if(cards < 2 && cards>=0){return 0;}
                       else if(cards==2){return 1; }
                          else if (cards==3){ return 2; }
                          else if(cards==4){ return 3;}
                          else if (cards==5 && cards <=8){  return 4; }

                           else{throw std::invalid_argument( "Only 10 Black cards in deck & there cant be negatives" );}
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
                     else if(coins==4) { return 0; }
                    else{throw std::invalid_argument( "Coins cannot have values other than 1,2,3,4" );}

            }
    int Garden::getCoinsPerCard(int cards){
    //not enougth cards to get coins
        if(cards <2 && cards>=0){return 0;}
               else if(cards==2){return 2; }
               else if (cards==3){ return 3; }
               //not enought cards in teh deck to make a chain
               else{throw std::invalid_argument( "Only 6 garden cards in deck" );}
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

