#ifndef INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
#define INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"

class StringedInstrument: public Instrument {

public:
    virtual void sound() = 0;
    void getStrings();

protected:
    int _numberOfStrings;

};

#endif