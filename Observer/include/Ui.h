#ifndef UI_H
#define UI_H
#include "Player.h"

class UI : public Observer {
public:
    void onAttack() override;
};
#endif