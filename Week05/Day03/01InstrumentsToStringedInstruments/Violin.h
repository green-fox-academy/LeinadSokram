#ifndef INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H
#define INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"

class Violin: public StringedInstrument {

public:

    Violin();
    Violin(int numberOfStrings);

    std::string sound() override;


};


#endif