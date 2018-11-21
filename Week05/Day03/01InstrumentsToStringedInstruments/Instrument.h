#ifndef INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H
#define INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H

#include <iostream>
#include <string>

enum class Name {
    ELECTRIC_GUITAR,
    BASS_GUITAR,
    VIOLIN
};

class Instrument {

public:
    virtual void play() = 0;
    std::string getName();

protected:
    Name _name;

};

#endif