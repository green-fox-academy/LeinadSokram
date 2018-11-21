#ifndef INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
#define INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"

class StringedInstrument: public Instrument {

public:
    StringedInstrument(int numberOfStrings, std::string name);

    virtual std::string sound() = 0;
    int getStrings();
    void play() override;

protected:
    int _numberOfStrings;

};

#endif