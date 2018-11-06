#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int array[5];

    std::cout << "Please enter the first integer of the array: " << std::endl;
    std::cin >> array[0];

    std::cout << "Please enter the second integer of the array: " << std::endl;
    std::cin >> array[1];

    std::cout << "Please enter the third integer of the array: " << std::endl;
    std::cin >> array[2];

    std::cout << "Please enter the fourth integer of the array: " << std::endl;
    std::cin >> array[3];

    std::cout << "Please enter the fifth integer of the array: " << std::endl;
    std::cin >> array[4];

    std::cout << "The memory addresses of the elements in the array are:" << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << array + i << std::endl;
    }

    return 0;
}