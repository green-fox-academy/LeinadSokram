#include <stdio.h>
#include <stdlib.h>

char* isOldEnough(int ageToCheck);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int age;
    printf("How old are you?\n");
    scanf("%d", &age);
    printf(isOldEnough(age));

    return 0;
}

char* isOldEnough(int ageToCheck)
{
    int ageToBuy = 18;
    int canBuy = 0;

    if (ageToCheck >= ageToBuy) {
        canBuy = 1;
    }

    if (canBuy) {
        return "Old enough to buy alcohol!";
    } else {
        return "Too young to buy alcohol!";
    }
}