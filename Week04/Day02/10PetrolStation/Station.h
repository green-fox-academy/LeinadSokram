#ifndef INC_10PETROLSTATION_STATION_H
#define INC_10PETROLSTATION_STATION_H

#include "Car.h"
#include <string>

class Station
{

public:
    Station(int gasAmount);

    void fill(Car &car);

private:
    int _gasAmount;

};

#endif