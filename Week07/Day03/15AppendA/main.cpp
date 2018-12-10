#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char appendA(char word);

int main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string

    char string[20];
    printf("Enter a word:\n");
    scanf("%s", string);

    printf("%s", appendA(string));

    return 0;
}

char appendA(char word)
{
    char character[] = "a";
    word += character;
    return word;
}