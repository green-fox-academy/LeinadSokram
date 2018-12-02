#include <iostream>
#include <string>

int swap (int &swapA, int &swapB);

int main(int argc, char* args[])
{
    // Create two integer variables: a=15, b=23
    // Create a function named swap that gets the 2 integers as parameters and swaps its values.
    // Print the values before and after the function call and make sure the values are printed in reversed order.

    int a = 15;
    int b = 23;
    std::cout << "Before the function call, a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After the function call, a = " << a << ", b = " << b << std::endl;

    return 0;
}

int swap (int &swapA, int &swapB)
{
    int tempValue = swapA;
    swapA = swapB;
    swapB = tempValue;

    return swapA, swapB;
}