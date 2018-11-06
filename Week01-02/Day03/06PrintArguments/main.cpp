#include <iostream>
#include <string>

void printParams(std::string p);

int main(int argc, char* args[]) {

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourth")
    // ...

    std::string inputWords;
    std::cout << "Please enter a word:" << std::endl;
    std::cin >> inputWords;

    printParams(inputWords);

    return 0;
}

void printParams(std::string p){

    std::cout << p << std::endl;

}