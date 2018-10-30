#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5

    int smallNumber;
    int bigNumber;

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> smallNumber;

    std::cout << "Please enter another number" << std::endl;
    std::cin >> bigNumber;

    if (smallNumber > bigNumber){
        std::cout << "The second number should be bigger" << std::endl;
    }else while (smallNumber < bigNumber){
        std::cout << smallNumber << std::endl;
        smallNumber += 1;
    }

    return 0;
}