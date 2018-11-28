#include <iostream>
#include "Station.h"

Station::Station(int gasAmount) : _gasAmount(1000) {}

std::string Station::fill(Car car)
{
for (int i = 0; i < _capacity; i++ ) {
    if (!isFull()) {
        return "Filling car!";
        _gasAmount++;
        } else {
            return "The car is full! The remaining capacity of the station is " << _gasAmount;
        }
    }
}
