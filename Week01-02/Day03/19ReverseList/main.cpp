#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj[] = {3, 4, 5, 6, 7};
    int swapper[(sizeof(aj) / sizeof(aj[0]))];

    for (int i = 0; i <= sizeof(aj) / sizeof(aj[0]) - 1; i++) {
        swapper[i] = aj[i];
    }

    for (int j = sizeof(aj) / sizeof(aj[0]) - 1; j >= 0; --j) {
        aj[j] = swapper[j];
        std::cout << aj[j] << std::endl;
    }

    return 0;
}