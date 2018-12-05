#include <stdio.h>
#include <stdlib.h>

int oddOrEven(int checkNumber);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int number;
    printf("Add a number:\n");
    scanf("%d", &number);
    printf("%d", oddOrEven(number));

    return 0;
}

int oddOrEven(int checkNumber)
{
    int isEven = 0;

    if (checkNumber % 2 == 0) {
        isEven = 1;
    }

    return isEven;
}