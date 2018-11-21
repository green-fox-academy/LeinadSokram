#include "Animal.h"

Animal::Animal(const std::string &name) : _name(name) {}

std::string Animal::getName() {
    return _name;
}
