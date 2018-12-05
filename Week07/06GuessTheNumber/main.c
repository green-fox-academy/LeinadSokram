#include <stdio.h>

int main()
{
    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stored number is lower
    // You found the number: 8

    int storedNumber = 8;
    int guessedNumber;

    printf("Guess the number!\n");
    scanf("%d", guessedNumber);

    while (guessedNumber != storedNumber) {
        if (guessedNumber < storedNumber) {
            printf("The stored number is higher. Try again!\n");
            scanf("%d", guessedNumber);
        }
        else if (guessedNumber > storedNumber) {
            printf("The stored number is lower. Try again!\n");
            scanf("%d", guessedNumber);
        }
        if (guessedNumber == storedNumber) {
            printf("You found the number: %d", storedNumber);
        }
    }

    return 0;
}