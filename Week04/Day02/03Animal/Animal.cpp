#include "Animal.h"

void Animal::eat(int e) {
    _hunger -= e;
}

void Animal::drink(int d) {
    _thirst -= d;
}

void Animal::play(int p) {
    _hunger += p;
    _thirst += p;
}

int Animal::getHunger(){
    return _hunger;
}

int Animal::getThirst(){
    return _thirst;
}