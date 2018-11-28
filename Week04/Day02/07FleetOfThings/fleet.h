#ifndef FLEET_OF_THINGS_FLEET_H
#define FLEET_OF_THINGS_FLEET_H

#include <vector>
#include <string>

#include "thing.h"

class Fleet
{
public:
    Fleet();

    void add(const Thing& thing); //(this function adds new elements to "things" vector)
    std::string toString(); //(this lists the "things" vector, adding a new number before it. Also in main)

private:
    std::vector<Thing> things;
};

#endif