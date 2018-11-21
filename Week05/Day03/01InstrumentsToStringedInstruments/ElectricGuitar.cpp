#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar() : StringedInstrument(6) {}

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings) {}

std::string ElectricGuitar::sound() {
    return "Twang";
}