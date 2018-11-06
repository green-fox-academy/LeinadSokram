#include <iostream>
#include <string>

float factorio(float f);

int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   that returns it's input's factorial

    float number;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number;

    std::cout << "The factorial of that number is " << factorio(number) << std::endl;

    return 0;
}

float factorio(float f){

    float total = 1;

    for (int a = 1; a <= f; a++){
        total = total * a;
    }

    return total;
}