#include "StringedInstrument.h"

StringedInstrument::StringedInstrument(int numberOfStrings, std::string name) : Instrument(name), _numberOfStrings(numberOfStrings) {}

void StringedInstrument::play() {
    std::cout << getName() << ", a " << getStrings() << "-stringed instrument that goes " << sound() << std::endl;
}

int StringedInstrument::getStrings() {
    return _numberOfStrings;
}
