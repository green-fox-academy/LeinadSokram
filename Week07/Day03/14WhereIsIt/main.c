#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int whereIsIt(char *checkWord, char checkCharacter);

int main()
{
    // Create a program which asks for a string and a character and stores them
    // Create a function which takes a string and a character as a parameter and
    // if the given character is in the string, it should return the index of the
    // first appearance (in the given string) otherwise the function should return -1
    //
    // Example:
    //
    // Case 1:
    //
    // given_string = "embedded"
    // given_char = 'd'
    //
    // the function should return: 4, because this is the index of the first appearance of char 'd'
    //
    //
    // Case 2:
    //
    // given_string = "embedded"
    // given_char = 'a'
    //
    // the function should return: -1, because there is no 'a' in the word "embedded"
    //

    char word[20];
    printf("Enter a word:\n");
    scanf("%s", word);

    char character[1];
    printf("Enter a single character:\n");
    scanf("%s", character);

    printf("%d", whereIsIt(word, character));

    return 0;
}

int whereIsIt(char *checkWord, char checkCharacter)
{
    for (int i = 0; i < 20; ++i) {
        if (checkWord[i] == checkCharacter) {
            return i;
        }
        return -1;
    }
}