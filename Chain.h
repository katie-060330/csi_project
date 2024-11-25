#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include <vector>
#include "Chain_Base.h"
#include <string>
#include <typeinfo>
using namespace std;

template <class T>
class Chain
{

public:
    Chain() : chain() {}
    Chain<Card *> &operator+=(Card *card)
    {
        if (typeid(card) != typeid(chain.front()))
        {
            throw std::invalid_argument("Card doesn't match the chain");
        }
        else
        {
            chain.push_back(card);
        }
        return *this;
    }

    void addCard(Card *card)
    {
        *this += card;
    }
    int sell()
    {
        if (chain.empty())
        {
            return 0;
        }
        int size = chain.size();
        //! Cant use the T to access this function
        Card *topCard = chain.front();
        int coins = topCard->getCoinsPerCard(size);
        chain.clear();
        return coins;
    }
    string getType()
    {
        if (chain.empty())
        {
            return "Empty";
        }
        else
        {
            return chain.front()->getName();
        }
    }

    void startFreshChain(Card *card)
    {
        // sells the existing
        sell();
        *this += card;
    }
    Card *getCardType()
    {
        if (chain.empty())
        {
            return nullptr;
        }
        return chain.at(0);
    }

private:
    vector<T> chain;

    friend std::ostream &operator<<(std::ostream &output, const Chain<Card *> &chain);
};
