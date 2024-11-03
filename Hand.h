#include "Card.h"
#include "CardFactory.h"
class Hand{
    public:
    //TODO how to stroe the hand?? array list
    Hand(istream& in, const CardFactory cardFactory){
        //TODO ??
    }
    Hand& Hand::operator+=(Card*){
        //*adds to the rear of the hand 
    }
    Card* Hand::play(){
        //*returns and removes the card that the player must play, the highest ranking bean 
    }
    Card* Hand::top(){
        //*returns but doesnt remove the top of the hand 
    }
    Card* Hand::operator[](int i){
        //*returns the card given at that index i 
    }
    //?and the insertion operator (friend) to print Hand on an std::ostream. The hand should print all the cards in order.  
    // friend std::ostream& operator<<(std::ostream& os, const Hand& hand) {
    //     for (const auto& card : hand.cards) {
    //         os << card << "\n"; // Utilize the Card's insertion operator
    //     }
    //     return os;
    // }
};