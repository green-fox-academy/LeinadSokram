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

    odd = (int *) malloc(size * sizeof(int));

    for (int j = 0; j < size; ++j) {
        odd[j] = odd_count;
        odd_count += 2;
    }

    int new_size = 20;

    even = realloc(even, new_size * sizeof(int));

    for (int k = 0; k < size; ++k) {
        even[k+10] = odd[k];
    }

    for (int l = new_size - 1; l >= 0; --l) {
        printf("%d\n", even[l]);
    }

    free(even);
    free(odd);

    return 0;
}