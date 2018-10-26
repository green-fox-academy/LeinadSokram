#include <iostream>

int main(int argc, char* args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user

    std::string userName;
    std::cout << "Please enter Username:" << userName << std::endl;
    std::cin >> userName;

    std::cout << "Hello " << userName << "!! :D" << std::endl;

    return 0;
}