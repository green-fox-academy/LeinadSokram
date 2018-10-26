#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it

    int distanceInKm;
    std::cout << "Please enter the distance in kilometers to convert:" << std::endl;
    std::cin >> distanceInKm;

    double distanceInMiles = distanceInKm / 1.6;

    std::cout << "The number of miles in " << distanceInKm << " kilometers is around " << distanceInMiles << " miles" << std::endl;

    return 0;
}