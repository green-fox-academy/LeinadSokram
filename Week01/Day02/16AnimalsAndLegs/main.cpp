#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    int chickens;
    int pigs;

    std::cout << "How many chickens you have? " << std::endl;
    std::cin >> chickens;

    std::cout << "How many pigs you own? " << std::endl;
    std::cin >> pigs;

    int legsOfAnimals = 2 * chickens + 4 * pigs;

    std::cout << "Your animals have " << legsOfAnimals << " legs." << std::endl;

    return 0;
}