#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`

    int ai[] = {3, 4, 5, 6, 7};
    int initialNumber = 0;

    for (int i = 0; i < sizeof(ai) / sizeof(ai[0]); i++) {
        initialNumber += ai[i];
    }

    std::cout << "The sum of elements is: " << initialNumber << std::endl;

    return 0;
}