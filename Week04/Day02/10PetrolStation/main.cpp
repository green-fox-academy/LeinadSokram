#include "Station.h"
#include "Car.h"

#include <iostream>

int main()
{
Station station(1000);

Car car1(20, 40);
Car car2(35, 70);
Car car3(32, 50);
Car car4(30, 35);
Car car5(30, 60);

car1.fill();
car2.fill();
car3.fill();
car4.fill();
car5.fill();

}