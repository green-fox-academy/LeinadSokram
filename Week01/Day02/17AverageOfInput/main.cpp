#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int numberA;
    int numberB;
    int numberC;
    int numberD;
    int numberE;

    std::cout << "Enter the first integer: " << std::endl;
    std::cin >> numberA;

    std::cout << "Enter the second integer: " << std::endl;
    std::cin >> numberB;

    std::cout << "Enter the third integer: " << std::endl;
    std::cin >> numberC;

    std::cout << "Enter the fourth integer: " << std::endl;
    std::cin >> numberD;

    std::cout << "Enter the fifth integer: " << std::endl;
    std::cin >> numberE;

    double sumOfNumbers = numberA + numberB + numberC + numberD + numberE;
    double avarageOFNumbers = sumOfNumbers / 5;

    std::cout << "The sum of numbers you entered is " << sumOfNumbers << std::endl;
    std::cout << "The avarage of numbers of entered is " << avarageOFNumbers << std::endl;

    return 0;
}