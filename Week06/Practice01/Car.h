#ifndef PRACTICE01_CAR_H
#define PRACTICE01_CAR_H

#include <string>

class Car
{
public:
    Car(int maxSpeed, const std::string &color, int weight);

private:
    int _maxSpeed;
    std::string _color;
    int _weight;
};


#endif //PRACTICE01_CAR_H
