  #include "Player.h"
  Player::Player(){}
  Player::Player(std::string& n){
      //*initally when the game starts the player has 2 chaons that are worth 0
        //*when the player adds a card to the chain, we incremtn this value
        
        name = n;
        totalCoins = 0;
        numberOfChains = 2;
        nonZeroChains = 0;
        hasThirdChain = false; 
        hand = Hand(); 
        //player must have 2 chains 
  
    }

    Player::Player(istream& in, const CardFactory cardFactory){
        //TODO ??
    }
    std::string Player::getName(){
        return name;
    }
    int Player::getNumCoins(){
        return coins;
    }
    Player& Player::operator+=(int coins){
        totalCoins += coins;
        return *this

        //*adds coins to the plyers total
    }
    int Player::getMaxChains(){
        return numberOfChains;
    }
    int Player::getNonZeroChains(){
        return nonZeroChains;
    }
<<<<<<< Updated upstream:Player.cpp
    Chain<T>& Player::operator[](int i){
=======
    Chain& Player::operator[](int i){
        return chain.[i];
>>>>>>> Stashed changes:Players.cpp
        //*returns the chain at position i
        //?do we have a array of chains?
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
    Hand* Player::getHand(){
    return hand;
    }
    void Player::printHand(std::ostream& out, bool showFullHand){
        if(showFullHand){
        hand.print(out);
            //TODO print the full hand to the ostream
        }
        else{
        hand.top()->print(out);

            //TODO only show the top card
        }
    }
    
    //TODO the inserion opperator to print off the chains and the number of coins
    // Dave 3 coins
    //!red RRRR
    //? blue B