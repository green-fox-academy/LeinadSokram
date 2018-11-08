#include <iostream>

void swappingFunction(int *pointerA, int *pointerB);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;

    int *pointerA = &a;
    int *pointerB = &b;

    swappingFunction(*pointerA, *pointerB);

    std::cout << pointerA << std::endl;

    std::cout << "Now a is " << a << ", and b is " << b << std::endl;

    return 0;
}

void swappingFunction(int *pointerA, int *pointerB){

   pointerA.swap(pointerB);

}