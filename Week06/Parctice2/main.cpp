#include <iostream>
#include <vector>

std::vector<std::vector<int >> matrixReturner(std::vector<std::vector<int >> oldMatrix1,
                                              std::vector<std::vector<int >> oldMatrix2);

int main()
{
    std::vector<std::vector<int>> matrix1 = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    std::vector<std::vector<int>> matrix2 = {
            {1,  1,  2},
            {3,  5,  8},
            {13, 21, 34}
    };

    std::vector<std::vector<int >> printThisMatrix = matrixReturner(matrix1, matrix2);

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << printThisMatrix[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}

std::vector<std::vector<int >> matrixReturner(std::vector<std::vector<int >> oldMatrix1,
                                              std::vector<std::vector<int >> oldMatrix2)
{

    std::vector<std::vector<int>> newMatrix;


    for (int i = 0; i < 2; ++i) {
        std::vector<int> column;
        for (int j = 0; j < 2; ++j) {
            column.push_back(oldMatrix1[i][j] + oldMatrix2[i][j]);
        }
        newMatrix.push_back(column);
    }

    return newMatrix;
}