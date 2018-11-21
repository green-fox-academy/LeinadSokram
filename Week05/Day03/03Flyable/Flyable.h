#ifndef INC_03FLYABLE_FLYABLE_H
#define INC_03FLYABLE_FLYABLE_H

#include <string>

class Flyable {

public:
    virtual std::string land() = 0;
    virtual std::string fly() = 0;
    virtual std::string takeOff() = 0;

};

#endif