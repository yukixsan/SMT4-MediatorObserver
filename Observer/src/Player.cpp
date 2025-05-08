#include "Player.h"
#include <iostream>

void Player::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void Player::removeObserver(Observer* observer) {
    for (auto it = observers.begin(); it != observers.end(); ++it) {
        if (*it == observer) {
            observers.erase(it);
            break;
        }
    }
}

void Player::attack() {
    std::cout << "Player attacks!\n";
    for (Observer* observer : observers) {
        observer->onAttack();
    }
}