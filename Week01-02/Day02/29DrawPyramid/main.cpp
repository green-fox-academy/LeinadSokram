#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int start = 1;
    int pyramid;
    std::string stars = "*";
    int spaceNumber = pyramid - 1;
    std::string space = " ";

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> pyramid;

    while (start <= pyramid){
        std::cout << space(spaceNumber) << stars << std::endl;
        start += 1;
        stars = stars + "**";
        spaceNumber = spaceNumber - 1;
    }

    //I still need to find a way how to cout a string n times w/o using functions.

    return 0;
}