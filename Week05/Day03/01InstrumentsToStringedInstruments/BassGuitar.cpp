#include "BassGuitar.h"

BassGuitar::BassGuitar() : StringedInstrument(4, "Bass Guitar") {}

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings, "Bass Guitar") {}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}