#include <iostream>
#include <fstream>


int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    double dividerNumber;

    try {
        std::cout << "Please enter a number to divide with:" << std::endl;
        std::cin >> dividerNumber;

        if (dividerNumber == 0) {
            throw 22;
        }

    } catch (int e) {
        std::cout << "fail" << std::endl;
        return 22;

    }

    std::cout << dividerNumber / 10 << std::endl;

    return 0;
}