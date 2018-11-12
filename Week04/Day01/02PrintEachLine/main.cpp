#include <iostream>
#include <fstream>
#include <string>

int main () {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ifstream myFile("C:/Private/greenfox/leinadsokram/Week04/my-file.txt");

    if (!myFile.is_open()) {

        std::cout << "Something went wrong!" << std::endl;

    }

    std::string cardName;
    std::string cardType;
    int cmc;

    while (myFile >> cardName >> cardType >> cmc) {
        std::cout << cardName << " " << cardType << " " << cmc << std::endl;
    }

    myFile.close();

    return 0;
}


