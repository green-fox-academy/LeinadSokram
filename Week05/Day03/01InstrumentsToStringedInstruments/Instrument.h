#ifndef INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H
#define INC_01INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H

#include <iostream>
#include <string>

class Instrument {

public:
    Instrument(const std::string &name);

    virtual void play() = 0;
    std::string getName();

protected:
    std::string _name;

};

#endif