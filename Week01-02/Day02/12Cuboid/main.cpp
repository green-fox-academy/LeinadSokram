#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    // 
    // Surface Area: 600
    // Volume: 1000
    
    double sideA;
    double sideB;
    double sideC;

    std::cout << "Surface Area: " << 2 * (sideA + sideB + sideC) << std::endl;
    std::cout << "Volume: " << sideA * sideB * sideC << std::endl;

    return 0;
}