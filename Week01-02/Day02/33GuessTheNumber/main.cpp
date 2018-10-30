#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stored number is lower
    // You found the number: 8

    int number = 8;
    int guess;

    std::cout << "Guess the number!" << std::endl;
    std::cin >> guess;

    while (guess != number) {
        if (guess < number) {
            std::cout << "The stored number is higher. Guess again!" << std::endl;
            std::cin >> guess;
        } else if (guess > number) {
            std::cout << "The stored number is lower. Guess again!" << std::endl;
            std::cin >> guess;
        } if (guess == number) {
            std::cout << "You found the number: " << number << std::endl;
        }
    }

    return 0;
}