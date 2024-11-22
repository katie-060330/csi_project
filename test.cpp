#include "Chain.h"
#include <iostream>

int main() {
    // Create a Chain for Blue cards
    Chain<Blue*> blueChain;

    // Add Blue cards
    Blue* blueCard1 = new Blue();
    Blue* blueCard2 = new Blue();

    try {
        blueChain += blueCard1;
        blueChain += blueCard2;

        // Print the Chain
        std::cout << "Chain of Blue Cards: " << blueChain << std::endl;

        // Sell the Chain
        int coins = blueChain.sell();
        std::cout << "Coins earned: " << coins << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Clean up dynamically allocated cards
    delete blueCard1;
    delete blueCard2;

    return 0;
}
