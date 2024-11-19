#ifndef CARD_H   // Check if CARD_H is not defined
#define CARD_H
#include <iostream>
#include <string>
using namespace std;

class Card{
    public:
    //! Do we need a constructor for this class??
    virtual int getCoinsPerCard(int cards) = 0;
    virtual string getName() = 0;
    virtual int getRank() = 0;//*not sure if we want this or not TBD
    virtual void print(ostream& out) = 0; //ostream printing out emuns

};
class Blue : public Card {
    int rank = 8;
public:
    virtual int getCoinsPerCard(int cards)) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Chili : public Card {
    int rank = 7;
public:
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Stink : public Card {
    int rank = 6;
public:
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Green : public Card {
    int rank = 5;
public:
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Soy : public Card {
    int rank = 4;
public:
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Black : public Card {
    int rank = 3;
public:
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Red : public Card {
    int rank = 2;
public:
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;
};

class Garden : public Card {
    int rank = 1;
public:
    virtual int getCoinsPerCard(int cards) override;
    virtual string getName() override;
    virtual int getRank() override;
    virtual void print(ostream& out) override;


};
#endif