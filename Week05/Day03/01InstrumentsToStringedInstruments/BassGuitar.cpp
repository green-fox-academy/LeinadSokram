#include "BassGuitar.h"

BassGuitar::BassGuitar() : StringedInstrument(4) {}

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings) {}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}