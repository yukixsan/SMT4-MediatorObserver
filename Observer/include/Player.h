#ifndef PLAYER_H
#define PLAYER_H
#include <vector>

class Observer {
public:
    virtual void onAttack() = 0;
    virtual ~Observer() {}
};

class Player {
private:
    std::vector<Observer*> observers;
public:
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void attack();
};
#endif