#include "Player.h"
#include "EventMediator.h"
#include <iostream>

int main() {
    EventMediator mediator;
    Player player(&mediator);

    std::string input;
    while (true) {
        std::cout << "Enter 'attack' to perform an attack or 'exit' to quit: ";
        std::getline(std::cin, input);
        if (input == "exit") break;
        if (input == "attack") {
            player.attack();
        } else {
            std::cout << "Invalid input. Try again.\n";
        }
    }
    return 0;
}