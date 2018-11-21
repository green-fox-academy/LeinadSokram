#ifndef INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
#define INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H

#include "StringedInstrument.h"

class BassGuitar: public StringedInstrument {

public:

    BassGuitar();
    BassGuitar(int numberOfStrings);

    std::string sound() override;

};


#endif