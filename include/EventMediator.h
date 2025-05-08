#ifndef EVENT_MEDIATOR_H
#define EVENT_MEDIATOR_H
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"

class EventMediator {
private:
    UI* ui;
    SoundSystem* sound;
    ScoreSystem* score;
    Enemy* enemy;
public:
    EventMediator();
    ~EventMediator();
    void notifyAttack();
};
#endif