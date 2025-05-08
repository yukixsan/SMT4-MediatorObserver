#ifndef PLAYER_H
#define PLAYER_H
#include "EventMediator.h"
#include <string>

class Player {
private:
    EventMediator* mediator;
public:
    Player(EventMediator* med);
    void attack();
};
#endif