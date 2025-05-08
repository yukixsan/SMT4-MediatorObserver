#ifndef SCORE_SYSTEM_H
#define SCORE_SYSTEM_H
#include "Player.h"

class ScoreSystem : public Observer {
public:
    void onAttack() override;
};
#endif