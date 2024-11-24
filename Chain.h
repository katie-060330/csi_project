/*#include <iostream>
#include "Card.h"
#include "CardFactory.h"
#include <vector>
#include "Chain_Base.h"
#include <string>
using namespace std; 


template <class T>
class Chain : public Chain_Base{

    public:
    Chain() : chain() {}
     Chain<T>& operator+=(Card* card){
                 T* castC = dynamic_cast<T*>(card);
                    if (!castC) {
                        throw std::invalid_argument("Card doesnt match the chain");
                    }
                    chain.push_back(castC);
                        return *this;

            }

            void addCard(Card* card) {
               *this += card;

        }
        int sell(){
                if (chain.empty()) {
                        return 0;
                    }
                    int size = chain.size();
                    T* topCard = chain.front();
                    int coins = topCard->getCoinsPerCard(size);
                    chain.clear();
                    return coins;



            }
            string getType(){
                    if(chain.empty()){
                        return "Empty";
                    }
                    else{
                       return chain.front()->getName();
                    }
                }

    void startFreshChain(Card* card){
        //sells the existing
        sell();
         *this += card;

    }
    Card* getCardType(){
        if(chain.empty()){
            return nullptr;
        }
        return chain.at(0);
    }
    private:
        vector<T*> chain;

friend std::ostream& operator<<( std::ostream &output, const Chain<Card*> & chain );



};
*/