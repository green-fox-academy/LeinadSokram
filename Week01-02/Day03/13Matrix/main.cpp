#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int m1;
    int m2;
    std::cout << "Enter the first number of the matrix:" << std::endl;
    std::cin >> m1;
    std::cout << "Enter the second number of the matrix:" << std::endl;
    std::cin >> m2;

    int matrix[m1][m2] = {1,0};

    std::cout << matrix << std::endl;

    return 0;
}