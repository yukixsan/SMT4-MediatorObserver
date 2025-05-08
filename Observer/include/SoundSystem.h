#ifndef SOUND_SYSTEM_H
#define SOUND_SYSTEM_H
#include "Player.h"

class SoundSystem : public Observer {
public:
    void onAttack() override;
};
#endif