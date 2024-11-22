#ifndef CARD_H   // Check if CARD_H is not defined
#define CARD_H
#include <iostream>
#include <string>
using namespace std;

class Card{
    public:
    //! Do we need a constructor for this class??
    int rank;
    virtual ~Card() {}
    virtual int getCardsPerCoin(int coins);
    virtual int getCoinsPerCard(int cards);
    virtual string getName();
    virtual int getRank();//*not sure if we want this or not TBD
    virtual void print(ostream& out); //ostream printing out emuns
    
    //global virtial friend function insertion opperator 
    friend ostream& operator<<(ostream& out,const Card& card);
};


class Blue : public Card {
int rank;
public:
    virtual int getCardsPerCoin(int coins) override;
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Chili : public Card {
    int rank;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Stink : public Card {
    int rank;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Green : public Card {
    int rank;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Soy : public Card {
    int rank;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Black : public Card {
    int rank;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Red : public Card {
    int rank;
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Garden : public Card {
    int rank;
public:
    virtual int getCardsPerCoin(int coins) override;
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;


};
#endif