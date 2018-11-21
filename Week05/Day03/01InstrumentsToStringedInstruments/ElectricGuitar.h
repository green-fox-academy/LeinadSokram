#ifndef INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
#define INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar: public StringedInstrument {

public:

    void play() override;
    void sound() override;

};


#endif