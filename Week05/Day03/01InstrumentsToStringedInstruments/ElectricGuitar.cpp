#include "ElectricGuitar.h"

void ElectricGuitar::play() {
    std::cout << getName() << ", a " << getStrings() << "-stringed instrument that goes " << sound() << std::endl;
}

void ElectricGuitar::sound() {
    std::cout << "Twang" << std::endl;
}

void StringedInstrument::getStrings() {
    _numberOfStrings = 6;
}