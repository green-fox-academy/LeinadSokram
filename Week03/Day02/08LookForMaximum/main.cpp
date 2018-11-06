#include <iostream>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and then asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int numberOfStoredIntegers;
    std::cout << "How many integers do you want to store?" << std::endl;
    std::cin >> numberOfStoredIntegers;

    int awesomeArray[numberOfStoredIntegers];

    for (int i = 0; i < numberOfStoredIntegers; i++) {
        std::cout << "Please enter a number:" << std::endl;
        std::cin >> awesomeArray[i];
    }

    int greatestNumber = 0;

    for (int i = 0; i < numberOfStoredIntegers; i++){
        if (awesomeArray[i] > greatestNumber){
            greatestNumber = awesomeArray[i];
        }
    }

    std::cout << "The greatest number in the array is: " << greatestNumber << std::endl;
    std::cout << "and its memory address is: " << &greatestNumber << std::endl;

    return 0;
}