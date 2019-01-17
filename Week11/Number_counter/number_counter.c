#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "number_counter.h"


int read_file(char* file_name)
{
    FILE * file_pointer;
    file_pointer = fopen(file_name, "r");

    if (file_pointer == NULL){
       return 1;
    }

    char text[255];
    int counter = 0;
    static const char all_numbers[] = "0123456789";
    char* numbers = malloc(255 * sizeof(char));

    while (fgets(text, 255, file_pointer) != NULL) {
        for (int i = 0; i < strlen(text); ++i) {
            for (int j = 0; j < strlen(all_numbers); ++j) {
                if (text[i] == all_numbers[j]) {
                    numbers[counter] = text[i];
                    counter++;
                }
            }
        }
    }

    numbers = (char *) realloc(numbers, (counter + 1) * sizeof(char));
    numbers[counter] = '\0';

    printf("%d", counter);

    fclose(file_pointer);

    return 2;
}