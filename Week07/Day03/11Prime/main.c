#include <stdio.h>
#include <stdlib.h>

int isPrimeFunction(int checkNumber);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    int number;
    printf("Add a number:\n");
    scanf("%d", &number);

    printf("%d", isPrimeFunction(number));

    return 0;
}

int isPrimeFunction(int checkNumber)
{
    int isPrime = 1;

    for (int i = 2; i < checkNumber; ++i) {
        if (checkNumber % i == 0) {
            isPrime = 0;
        }
    }

    return isPrime;
}