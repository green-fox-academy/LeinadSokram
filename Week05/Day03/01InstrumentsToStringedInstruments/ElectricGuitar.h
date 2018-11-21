#ifndef INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
#define INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar: public StringedInstrument {

public:

    ElectricGuitar();
    ElectricGuitar(int numberOfStrings);

    std::string sound() override;

};

#endif