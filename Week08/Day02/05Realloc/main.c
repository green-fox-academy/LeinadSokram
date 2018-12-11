#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    int *pointer = NULL;

    int num_x;
    printf("Enter a number. You will have to type in that many numbers.\n");
    scanf("%d", &num_x);

    int *array = (int *) malloc((num_x) * sizeof(int));

    int num_y = 0;

    for (int i = 0; i < num_x; ++i) {
        printf("Now enter the next number:\n");
        scanf("%d", &array[i]);
        num_y += array[i];
    }

    num_x += 1;

    array = (int *) realloc(array, num_x * sizeof(int));

    array[num_x - 1] = num_y;

    for (int j = 0; j < num_x; ++j) {
        printf("%d\n", array[j]);
    }

    free(array);

    return 0;
}