#include <stdio.h>
#include <stdlib.h>

int digitSummer(int numberA, int numberB);

int main()
{
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int a;
    printf("Add a number:\n");
    scanf("%d", &a);

    int b;
    printf("Add another number:\n");
    scanf("%d", &b);

    printf("%d", digitSummer(a, b));

    return 0;
}

int digitSummer(int numberA, int numberB)
{
    int isEqual = 0;
    int aSum = numberA % 10 + numberA % 100 + numberA % 1000;
    int bSum = numberB % 10 + numberB % 100 + numberB % 1000;

    if (aSum == bSum) {
        isEqual = 1;
    }

    return isEqual;
}