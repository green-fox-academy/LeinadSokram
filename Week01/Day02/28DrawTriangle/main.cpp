#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was

    int start = 1;
    int triangle;
    std::string stars = "*";

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> triangle;

    while (start <= triangle){
        std::cout << stars << std::endl;
        start += 1;
    }

    return 0;
}