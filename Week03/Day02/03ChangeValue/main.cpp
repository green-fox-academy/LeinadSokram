#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;

    float *temperaturePointer = &temperature;

    *temperaturePointer = 15.5;

    std::cout << *temperaturePointer << std::endl;

    return 0;
}