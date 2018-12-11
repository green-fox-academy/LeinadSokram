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

    even = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; ++i) {
        even[i] = even_count;
        even_count += 2;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d\n", even[i]);
    }

    odd = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; ++i) {
        odd[i] = odd_count;
        odd_count += 2;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d\n", odd[i]);
    }

    return 0;
}