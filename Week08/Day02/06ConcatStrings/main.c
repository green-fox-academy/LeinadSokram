#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char *concatenater(char *first, char *second);

int main()
{
    char first_word;
    char second_word;

    printf("Enter a word:\n");
    scanf("%s", first_word),

    printf("Enter another word:\n");
    scanf("%s", second_word),

    printf(concatenater(first_word, second_word));

    //getchar()

    return 0;
}

char *concatenater(char *first, char *second)
{
    char *new_word;

    new_word = first;
    strcat(new_word, second); //ez is legyen megfelelo meretu

    return new_word;
}