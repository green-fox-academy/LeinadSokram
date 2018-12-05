#include <stdio.h>
#include <stdlib.h>

int isEqual(int numberA, int numberB);

int main()
{
    // Create a program which asks for two integers and stores them separately
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise

    int a;
    printf("Give me a number:\n");
    scanf("%d", &a);
    int b;
    printf("Give me another number:\n");
    scanf("%d", &b);
    printf("%d", isEqual(a, b));

    return 0;
}

int isEqual(int numberA, int numberB)
{
    int equal = 0;

    if (numberA == numberB) {
        equal = 1;
    }

    return equal;
}