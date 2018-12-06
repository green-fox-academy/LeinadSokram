#include "Car.h"

Car::Car(int speed, const std::string &color, int weight) : _speed(speed), _color(color), _weight(weight)
{}

int Car::getSpeed() const
{
    return _speed;
}

const std::string &Car::getColor() const
{
    return _color;
}

int Car::getWeight() const
{
    return _weight;
}

int Car::getGreenNumber(std::vector)
{
    return 0;
}