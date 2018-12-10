#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthReturner(char *word);

int lengthReturnerWithoutStringH(char *wordWithoutStringH);

int main()
{
    // Create a program which asks for the name of the user and stores it
    // Create a function which takes a string as a parameter and returns the length of it
    // Solve this exercise with and without using string.h functions

    char userName[20];
    printf("Enter a username:\n");
    scanf("%s", userName);

    printf("The name is %d characters long (with string.h).\n", lengthReturner(userName));
    printf("The name is %d characters long (without string.h).", lengthReturnerWithoutStringH(userName));

    return 0;
}

int lengthReturner(char *word)
{
    return strlen(word);
}

int lengthReturnerWithoutStringH(char *wordWithoutStringH)
{
    int wordLength = 0;
    for (int i = 0; i < strlen(wordWithoutStringH); ++i) {
        wordLength++;
    }

    return wordLength;
}