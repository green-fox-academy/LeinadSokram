#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that prints all the even numbers between 0 and 500

    int even = 2;

    while (even <= 500){
        std::cout << even << std::endl;
        even += 2;
    }

    return 0;
}
