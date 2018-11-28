#include <iostream>
#include "Station.h"

Station::Station(int gasAmount) : _gasAmount(gasAmount)
{}

void Station::fill(Car &car)
{
    while (!car.isFull()) {
        car.fill();
        _gasAmount--;
        std::cout << "Filling car!" << std::endl;
    }

    std::cout << "The car is full! The remaining capacity of the station is " << _gasAmount << std::endl;

}
