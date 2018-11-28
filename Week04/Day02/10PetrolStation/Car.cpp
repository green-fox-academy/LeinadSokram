#include "Car.h"

Car::Car(int gasAmount, int capacity) : _gasAmount(gasAmount), _capacity(capacity) {}

bool Car::isFull()
{
    return _gasAmount == _capacity;
}

int Car::fill()
{
    return 0;
}
