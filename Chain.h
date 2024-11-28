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
friend std::ostream &operator<<(std::ostream &out, const Chain<T> &chain) {
        if (chain.chain.empty()) {
            out << "Empty";
        } else {
            // Prints type of the card
            out << chain.chain.front()->getName() << "\t";
            // Prints every card in the chain
            for (const auto &card : chain.chain) {
                card->print(out);
                out << " ";
            }
        }
        return out;
    }
private:
    vector<T> chain;
   

};
