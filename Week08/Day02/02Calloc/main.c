#include <stdio.h>
#include <stdlib.h>

// with calloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits
// what's the difference between this and the previous exercise?

int main()
{
    int* pointer = NULL;
    int size = 10;

    pointer = (int *) calloc(size, sizeof(int));
    int counter = 0;

    for (int i = 0; i < 5; ++i) {
        pointer[i] = counter;
        counter++;
    }

    for (int i = 0; i < size; ++i) {
        printf("%d\n", pointer[i]);
    }

    //Calloc nulls memory addresses instead of leaving memory junk there. Hence it returns zeros.

    free(pointer);

    return 0;
}