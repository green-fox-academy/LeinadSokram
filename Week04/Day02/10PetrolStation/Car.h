#ifndef INC_10PETROLSTATION_CAR_H
#define INC_10PETROLSTATION_CAR_H

class Car
{

public:
    Car(int gasAmount, int capacity);

    bool isFull();

    void fill();

private:
    int _gasAmount;
    int _capacity;

};

#endif