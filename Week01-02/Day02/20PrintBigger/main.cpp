#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    int numberA;
    int numberB;

    std::cout << "Enter a number:" << std::endl;
    std::cin >> numberA;

    std::cout << "Enter another number:" << std::endl;
    std::cin >> numberB;

    if (numberA > numberB){
        std::cout << "The bigger number is " << numberA << std::endl;
    }else if (numberA < numberB){
        std::cout << "The bigger number is " << numberB << std::endl;
    }else{
        std::cout << "I said ANOTHER number! :)" << std::endl;
    }

    return 0;
}