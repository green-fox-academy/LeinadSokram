#include<stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13

    int a = 22;
    int b = 13;

    // Print the result of 13 added to 22

    int c = a + b;
    printf("%d\n", c);

    // Print the result of 13 substracted from 22

    int d = a - b;
    printf("%d\n", d);

    // Print the result of 22 multiplied by 13

    int e = a * b;
    printf("%d\n", e);

    // Print the result of 22 divided by 13 (as a decimal fraction)

    float f = (float)a / (float)b;
    printf("%f\n", f);

    // Print the remainder of 22 divided by 13

    int g = a % b;
    printf("%d\n", g);

    // Store the results in variables and use them when you display the result

    return 0;
}