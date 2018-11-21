#include "StringedInstrument.h"

StringedInstrument::StringedInstrument(int numberOfStrings) : _numberOfStrings(numberOfStrings) {}

void StringedInstrument::play() {
    std::cout << getName() << ", a " << getStrings() << "-stringed instrument that goes " << sound() << std::endl;
}