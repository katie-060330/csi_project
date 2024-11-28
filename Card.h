#ifndef CARD_H   // Check if CARD_H is not defined
#define CARD_H
#include <iostream>
#include <string>
using namespace std;

class Card{
    public:
    //! Do we need a constructor for this class??
    virtual ~Card() {}
    virtual int getCardsPerCoin(int coins) =0;
    virtual int getCoinsPerCard(int cards) = 0;
    virtual string getName()const  = 0;
    virtual void print(ostream& out) const=0; //ostream printing out
    
    //global virtial friend function insertion opperator 
    friend ostream& operator<<(ostream& out,const Card& card);
};


class Blue : public Card {
public:
    virtual int getCardsPerCoin(int coins) override;
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() const override;
    virtual void print(ostream& out)const override;
};

class Chili : public Card {
public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() const override;
    virtual void print(ostream& out)const override;
};

class Stink : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() const override;

    virtual void print(ostream& out) const override;
};

class Green : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() const override;

    virtual void print(ostream& out)const override;
};

class Soy : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() const override;

    virtual void print(ostream& out)const override;
};

class Black : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName() const override;

    virtual void print(ostream& out)const override;
};

class Red : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
        virtual int getCoinsPerCard(int cards) override;
    virtual string getName()const override;

    virtual void print(ostream& out)const override;
};

class Garden : public Card {

public:
    virtual int getCardsPerCoin(int coins) override;
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() const override ;

    virtual void print(ostream& out)const override;


};
#endif