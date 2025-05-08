#ifndef ENEMY_H
#define ENEMY_H
#include "Player.h"

class Enemy : public Observer {
public:
    void onAttack() override;
};
#endif