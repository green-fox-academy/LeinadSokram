#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that prints a few operations on two numbers: 22 and 13
    int noX = 22;
    int noY = 13;

    // Print the result of 13 added to 22
    std::cout << noY + noX << std::endl;

    // Print the result of 13 substracted from 22
    std::cout << noX - noY << std::endl;

    // Print the result of 22 multiplied by 13
    std::cout << noX * noY << std::endl;

    // Print the result of 22 divided by 13 (as a decimal fraction)
    std::cout << (float)noX / noY << std::endl;

    // Print the integer part of 22 divided by 13
    std::cout << noX / noY << std::endl;

    // Print the reminder of 22 divided by 13
    std::cout << noX % noY << std::endl;

    return 0;
}