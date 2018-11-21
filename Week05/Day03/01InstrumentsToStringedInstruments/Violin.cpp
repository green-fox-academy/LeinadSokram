#include "Violin.h"

Violin::Violin() : StringedInstrument(4) {}

Violin::Violin(int numberOfStrings) : StringedInstrument(numberOfStrings) {}

std::string Violin::sound() {
    return "Screech";
}