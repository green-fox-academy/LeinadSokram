#include <stdio.h>

int main()
{
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // You should get these variables via console input
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double a;
    printf("Give me side A:\n");
    scanf("%lf", &a);

    double b;
    printf("Give me side B:\n");
    scanf("%lf", &b);

    double c;
    printf("Give me side C:\n");
    scanf("%lf", &c);

    double sa;
    sa = 2 * (a + b + c);

    double v;
    v = a * b * c;

    printf("Surface Area: %lf\nVolume: %lf\n", sa, v);

    return 0;
}