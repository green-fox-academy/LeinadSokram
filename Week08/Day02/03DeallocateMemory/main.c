#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free

int main()
{
    int* pointer = NULL;
    int size = 10;

    pointer = (int *) malloc(size * sizeof(int));
    int counter = 2;

    for (int i = 0; i < size; ++i) {
        pointer[i] = counter;
        counter += 2;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d\n", pointer[i]);
    }

    realloc(pointer, 0 * sizeof(int));

    return 0;
}