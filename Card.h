#ifndef CARD_H   // Check if CARD_H is not defined
#define CARD_H
#include <iostream>
#include <string>
using namespace std;

class Card{
    public:
    //! Do we need a constructor for this class??
    int rank;
    virtual ~Card() = 0;
    virtual int getCardsPerCoin(int coins);
    virtual int getCoinsPerCard(int cards);
    virtual string getName();
    virtual int getRank();//*not sure if we want this or not TBD
    virtual void print(ostream& out); //ostream printing out emuns
    
    //global virtial friend function insertion opperator 
    friend ostream& operator<<(ostream& out, Card& card){
        card.print(out); 
        return out; 
    }
};


class Blue : public Card {
int rank = 8;
public:
    virtual int getCardsPerCoin(int coins) override;
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Chili : public Card {
    int rank = 7;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Stink : public Card {
    int rank = 6;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Green : public Card {
    int rank = 5;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Soy : public Card {
    int rank = 4;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Black : public Card {
    int rank = 3;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Red : public Card {
    int rank = 2;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Garden : public Card {
    int rank = 1;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;


};
#endif