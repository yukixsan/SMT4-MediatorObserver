#include "Player.h"
#include <iostream>

Player::Player(EventMediator* med) : mediator(med) {}

void Player::attack() {
    std::cout << "Player attacks!\n";
    mediator->notifyAttack();
}