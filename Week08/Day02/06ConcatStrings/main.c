#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char concatenater(char first, char second, int length);

int main()
{
    char first_word[100];
    char second_word[100];

    printf("Enter a word:\n");
    scanf("%s", first_word);

    printf("Enter another word:\n");
    scanf("%s", second_word);

    int word_length = (sizeof(first_word) / sizeof(first_word[0])) + (sizeof(second_word) / sizeof(second_word[0]));

    printf("%s", concatenater(first_word, second_word, word_length));

    return 0;
}

char concatenater(char first, char second, int length)
{

    char *new_word;
    new_word = (int*)malloc(length*sizeof(int));

    new_word = first;
    strcat(new_word, second);

    return new_word;
}