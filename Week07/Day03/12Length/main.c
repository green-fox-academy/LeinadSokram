#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthReturner(char *word);

int lengthReturnerWithoutStringH(char *wordWithoutStringH);

main()
{
    // Create a program which asks for the name of the user and stores it
    // Create a function which takes a string as a parameter and returns the length of it
    // Solve this exercise with and without using string.h functions

    char *userName;
    printf("Enter a username:\n");
    scanf("%s", &userName);

    printf(lengthReturner(userName));

    return 0;
}

int lengthReturner(char *word)
{

}