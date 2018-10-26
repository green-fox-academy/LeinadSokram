#include <iostream>

int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean

    std::string myName = "Daniel Markos";
    int myAge = 31;
    double myHeight = 1.98;
    bool myMarriage = false;

    std::cout << myName << std::endl;
    std::cout << myAge << std::endl;
    std::cout << myHeight << std::endl;
    std::cout << myMarriage << std::endl;

    return 0;
}