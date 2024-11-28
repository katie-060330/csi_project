  #include "Player.h"
  Player::Player(){}
  Player::Player(std::string& n): name(name), hasThirdChain(false){

        
        name = n;
        totalCoins = 0;
        numberOfChains = 2;
        nonZeroChains = 0;
        hasThirdChain = false; 
        hand = Hand();
        chains.push_back(Chain<Card*>());
        chains.push_back(Chain<Card*>());
  
    }

    Player::Player(istream& in, const CardFactory cardFactory){
        //TODO ??
    }
    std::string Player::getName() const{
        return name;
    }
    int Player::getNumCoins(){
        return totalCoins;
    }
    Player& Player::operator+=(int coins){
        totalCoins += coins;
        return *this;

        //*adds coins to the plyers total
    }
    int Player::getMaxChains(){
        return numberOfChains;
    }
    int Player::getNonZeroChains(){
        return nonZeroChains;
    }
    Chain<Card*>& Player::operator[](int i){
        return (chains.at(i));
    }
    void Player::buyThirdChain(){
        //* if the player has enough money to buy the chain and the payer hasnt bouth the chain already

        if(getNumCoins() >=3 && !hasThirdChain){
            totalCoins-=3;
            hasThirdChain = true;
        }
        else{
            throw NotEnoughCoins("Player doesnt have enough coins to buy a third chain. ") ;
        }
        //TODO adds an empty chain to the player
    }
    Hand& Player::getHand(){
        return hand;
    }
    void Player::printHand(std::ostream& out, bool showFullHand){
        if(showFullHand){
            //uisng insertion opperator 
            cout << hand; 
            //TODO print the full hand to the ostream
        }
        else{
        hand.top()->print(out);

            //TODO only show the top card
        }
    }
    std::ostream& operator<<(std::ostream& out,  Player& player) {
            out<<player.getName();
            out<<player.getNumCoins();

            return out;
    }
    //TODO the inserion opperator to print off the chains and the number of coins
    // Dave 3 coins
    //!red RRRR
    //? blue B