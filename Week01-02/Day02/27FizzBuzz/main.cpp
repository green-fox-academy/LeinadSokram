#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that prints the numbers from 1 to 100.
    // But for multiples of three print “Fizz” instead of the number
    // and for the multiples of five print “Buzz”.
    // For numbers which are multiples of both three and five print “FizzBuzz”.

    for (int fizzBuzz = 1; fizzBuzz <= 100; fizzBuzz++) {
        if (fizzBuzz % 3 == 0 && fizzBuzz % 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        } else if (fizzBuzz % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        } else if (fizzBuzz % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << fizzBuzz << std::endl;
        }
    }

    return 0;
}