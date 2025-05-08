#include "EventMediator.h"

EventMediator::EventMediator() {
    ui = new UI();
    sound = new SoundSystem();
    score = new ScoreSystem();
    enemy = new Enemy();
}

EventMediator::~EventMediator() {
    delete ui;
    delete sound;
    delete score;
    delete enemy;
}

void EventMediator::notifyAttack() {
    ui->displayAttack();
    sound->playAttackSound();
    score->updateScore();
    enemy->receiveDamage();
}