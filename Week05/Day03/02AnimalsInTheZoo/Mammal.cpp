#include "Mammal.h"

Mammal::Mammal(const std::string &name) : Animal(name) {}

std::string Mammal::breed() {
    return "pushing miniature versions out.";
}