#include "vowels.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//This function will count the vowels in the file,
//then write them into a file.
//We have to give it the filename.

int count_vowels(char *file_name)
{
    FILE *file_pointer; //In order to access the file, we create a pointer
    file_pointer = fopen(file_name, "r"); //This opens and reads the file

    //If the file cannot be opened, it will be handled by this:
    if (file_pointer == NULL) {
        return 0;
    }

    char text[255]; //We allocate a char array so this code can read and print the file 'into' it
    int vowel_number = 0; //This is s counter for the number of vowels
    static const char all_vowels[] = "aeiouAEIOU"; //We'll have to compare each vowel with the letters of the text.

    //We need an array to put the vowels into, so we can write it to a file later.
    //We don't know yet how much space it will take, so we allocate a large memory portion for it at first.
    char *just_vowels = malloc(255 * sizeof(char));

    //Now we go through the text. We give the text array, an int and the file pointer as parameters,
    //and ensure it doesn't do anything if it is NULL.
    //The int shows how many char long do we read the line (it's a large number, just in case).
    //If the chars are vowels:
    // - they will be pushed into the vowel array,
    // - the vowel counter increases.

    while (fgets(text, 255, file_pointer) != NULL) {
        for (int i = 0; i < strlen(text); ++i) {
            for (int j = 0; j < strlen(all_vowels); ++j) {
                if (text[i] == all_vowels[j]) {
                    just_vowels[vowel_number] = text[i];
                    vowel_number++;
                }
            }
        }
    }

    //Now we know how much char do we have, so we can optimize the allocated memory size.
    just_vowels = (char *) realloc(just_vowels, (vowel_number + 1) * sizeof(char));

    printf("%d", vowel_number); //This just prints out the # of vowels

    just_vowels[vowel_number] = '\0'; //This adds a null pointer at the end of the array

    fclose(file_pointer); //We close the file since we're not using it anymore

    FILE *new_pointer; //Now we create a new file pointer...
    new_pointer = fopen("just_some_vowels.txt", "w"); //..and make a new file with write prompt
    fprintf(new_pointer, "%s", just_vowels); //We print the vowel array into the file...
    fclose(new_pointer); //..then close it

    free(just_vowels); //Since we're not using this array anymore, we free up memory space to prevent memory leak

    return vowel_number; //Done!
}
