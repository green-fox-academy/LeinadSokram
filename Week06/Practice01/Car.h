#ifndef PRACTICE01_CAR_H
#define PRACTICE01_CAR_H

#include <string>
#include <vector>

class Car
{
public:
    Car(int speed, const std::string &color, int weight);

    int getSpeed() const;
    const std::string &getColor() const;
    int getWeight() const;

    int getGreenCarNumber(std::vector<Car> carVector);
    int getFastestCarWeight(std::vector<Car> carVector);
    bool areThereHeavyCars(std::vector<Car> carVector);

private:
    int _speed;
    std::string _color;
    int _weight;
};

#endif //PRACTICE01_CAR_H