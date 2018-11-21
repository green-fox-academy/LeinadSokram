#include "Bird.h"

Bird::Bird(const std::string &name) : Animal(name) {}

std::string Bird::breed() {
    return "laying eggs.";
}