#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char stringRepeater(char word, int multiplier);

int main()
{
    char input[100];
    int parameter;

    printf("Enter a word:\n");
    scanf("%s", input);

    printf("Enter a number:\n");
    scanf("%d", &parameter);

    printf(stringRepeater(input, parameter));

    return 0;
}

char stringRepeater(char word, int multiplier)
{
    char *rep_word;


    for (int i = 0; i < multiplier; ++i) {
        strcat(rep_word, word);
    }

    return rep_word;
}