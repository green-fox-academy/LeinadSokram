#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that prints the numbers from 1 to 100.
    // But for multiples of three print “Fizz” instead of the number
    // and for the multiples of five print “Buzz”.
    // For numbers which are multiples of both three and five print “FizzBuzz”.

    int fizzBuzz = 1;

    while (fizzBuzz <= 100){
        std::cout << fizzBuzz << std::endl,
        fizzBuzz += 1;
    }

    return 0;
}