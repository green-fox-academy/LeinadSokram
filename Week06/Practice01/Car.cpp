#include "Car.h"

Car::Car(int speed, const std::string &color, int weight) : _speed(speed), _color(color), _weight(weight)
{}

Car::Car()
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

int Car::getGreenCarNumber(std::vector<Car> carVector)
{
    int greenCarNumber = 0;

    for (int i = 0; i < carVector.size(); ++i) {
        if (carVector[i].getColor() == "Green") {
            greenCarNumber++;
        }
    }

    return greenCarNumber;
}

int Car::getFastestCarWeight(std::vector<Car> carVector)
{
    int fastestCarSpeed = 0;
    int fastestCarWeight = 0;

    for (int i = 0; i < carVector.size(); ++i) {
        if (carVector[i].getSpeed() > fastestCarSpeed) {
            fastestCarSpeed = carVector[i].getSpeed();
            fastestCarWeight = carVector[i].getWeight();
        }
    }

    return fastestCarWeight;
}

bool Car::areThereHeavyCars(std::vector<Car> carVector)
{
    for (int i = 0; i < carVector.size(); ++i) {
        if (carVector[i].getWeight() > 1000) {
            return true;
        }
    }

    return false;
}