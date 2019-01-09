#include <stdio.h>
#include <stdlib.h>
#include "vowels.h"

/*
 * Vowels:
 *
 * Create a function that can count the vowels in the text.txt.
 *
 * text.txt example:
 * Lorem ipsum dolor sit etc.
 *
 * In the same function write the vowels into another text file (just_some_vowels.txt).
 *
 * just_some_vowels.txt example solution:
 * oeiuooi etc.
 *
 * The function should return with a number of the vowels. (101)
 */

int main()
{
    count_vowels("../text.txt");

    return 0;
}