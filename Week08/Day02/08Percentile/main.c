#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

void percentile(int percent, int elements[], int number);

int main()
{
    int row;
    int col;

    printf("Enter the number of rows:\n");
    scanf("%d", &row);

    printf("Enter the number of columns:\n");
    scanf("%d", &col);

    int element_num = row * col;

    int *matrix = (int *) malloc(element_num * sizeof(int));

    srand(time(NULL));

    printf("The numbers in the matrix:\n");

    for (int i = 0; i < element_num; ++i) {
        matrix[i] = rand();
        printf("%d\n", matrix[i]);
    }

    printf("---\n");

    int perc;

    printf("Which percentile do you want?\n");
    scanf("%d", &perc);

    percentile(perc, matrix, element_num);

    return 0;
}

void percentile(int percent, int elements[], int number)
{
    int temp;

    for (int i = 0; i < number; ++i)
        for (int j = i + 1; j < number; ++j) {
            if (elements[i] > elements[j]) {
                temp = elements[i];
                elements[i] = elements[j];
                elements[j] = temp;
            }
        }

    printf("---\nThe numbers in order:\n");

    for (int k = 0; k < number; ++k) {
        printf("%d\n", elements[k]);
    }

    float multiplier = (float) number / 100 * (float) percent;

    printf("---\nThe %dth percentile is %d", percent, elements[(int) multiplier - 1]);
}