#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int areTheSame(char *word1, char *word2);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char firstString[20];
    printf("Enter a word:\n");
    scanf("%s", firstString);

    char secondString[20];
    printf("Enter another word:\n");
    scanf("%s", secondString);

    printf("%d", areTheSame(firstString, secondString));

    return 0;
}

int areTheSame(char *word1, char *word2)
{
    for (int i = 0; 20 > i; ++i) {
        if (word1[i] != word2[i]) {
            return 0;
        } else {
            return 1;
        }
    }
}