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

    int sizeOfMatrix;
    std::cout << "Enter the size of the matrix:" << std::endl;
    std::cin >> sizeOfMatrix;

    int matrix[sizeOfMatrix][sizeOfMatrix] = {{1,0},{0,1}};


    for(int i = 0; i < sizeOfMatrix; i++)
        for(int j = 0; j < sizeOfMatrix; j++){
            std::cout << matrix[i][j] << " " << matrix[i][j+1] << std::endl;
        }



    return 0;
}