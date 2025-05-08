#include "Player.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"
#include <iostream>

int main() {
    Player player;
    UI ui;
    SoundSystem sound;
    ScoreSystem score;
    Enemy enemy;

    // Subscribe observers to the player
    player.addObserver(&ui);
    player.addObserver(&sound);
    player.addObserver(&score);
    player.addObserver(&enemy);

    std::string input;
    while (true) {
        std::cout << "Enter 'y' to perform an attack or 'n' to quit: ";
        std::getline(std::cin, input);
        if (input == "n") break;
        if (input == "y") {
            player.attack();
        } else {
            std::cout << "Invalid input. Try again.\n";
        }
    }
    return 0;
}