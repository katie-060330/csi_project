#ifndef CARD_H   // Check if CARD_H is not defined
#define CARD_H
#include <iostream>
#include <string>
using namespace std;

class Card{
    public:
    //! Do we need a constructor for this class??
    virtual ~Card() {}
    virtual int getCardsPerCoin(int coins);
    virtual int getCoinsPerCard(int cards);
    virtual string getName();
    virtual void print(ostream& out); //ostream printing out emuns
    
    //global virtial friend function insertion opperator 
    friend ostream& operator<<(ostream& out,const Card& card);
};


class Blue : public Card {
public:
    virtual int getCardsPerCoin(int coins) override;
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual void print(ostream& out) override;
};

class Chili : public Card {
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual void print(ostream& out) override;
};

class Stink : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;

    virtual void print(ostream& out) override;
};

class Green : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;

    virtual void print(ostream& out) override;
};

class Soy : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;

    virtual void print(ostream& out) override;
};

class Black : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;

    virtual void print(ostream& out) override;
};

class Red : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;

    virtual void print(ostream& out) override;
};

class Garden : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;

    virtual void print(ostream& out) override;


};
#endif