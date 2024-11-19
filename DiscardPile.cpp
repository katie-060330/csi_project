
   DiscardPile::DiscardPile(istream& in, const CardFactory* cardFactory){
      //TODO ask what the input for the constuctors are becaseu they are all ahinvg the same inputs but it doesnt make any sense to me
   //do a for loop for the amount of lines in in
   for(int i =0; in.gcount; i++){
       Card card = in.getline();
       discardPile.insert(card);


   }



    //!done i think
   DiscardPile& DiscardPile::operator+=(Card* c){
       //TODO return a refrence the the card just added to the discard pile
        discardPile.push_back(c);
        return *this;
   }

    //!done i think
   Card* DiscardPile::pickUp(){
       if(!discardPile.empty()){
            Card* c = discardPile.top();
            discardPile.erase(discardPile.begin());
            return c;
       }

       return nullptr;


   }
    //!done i think
   Card* DiscardPile::top(){

    if(!discardPile.empty()){
        return discardPile.front();
    }
    return nullptr;

   }



   void DiscardPile::print(std::ostream& out){
       //TODO again ask how these inputs and outputs work
       //*print out all the cards taht where just added to the


       for(int i=0; i< discardPile.size();i++){
        out<< discardPile[i] + "/n";
       }



       }

