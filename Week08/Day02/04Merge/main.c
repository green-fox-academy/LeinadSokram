#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int *pointer = NULL;

    int *even;
    int *odd;
    int even_count = 2;
    int odd_count = 1;
    int size = 10;

    even = (int *) malloc(size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        even[i] = even_count;
        even_count += 2;
    }

    for (int i = 0; i < size; ++i) {
        printf("%d\n", even[i]);
    }

    odd = (int *) malloc(size * sizeof(int));

    for (int j = 0; j < size; ++j) {
        odd[j] = odd_count;
        odd_count += 2;
    }

    for (int j = 0; j < size; ++j) {
        printf("%d\n", odd[j]);
    }

    printf("-------------------\n");

    int new_size = 20;

    realloc(even, new_size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        printf("%d\n", even[i]);
    }

    /*for (int k = 11; k < new_size; ++k)
        for (int l = 0; l < size; ++l) {
        even[k] = odd[l];
            printf("%d\n", even[k]);
    }
    */

    for (int k = 0; k < new_size; ++k) {
        
    }

    return 0;
}