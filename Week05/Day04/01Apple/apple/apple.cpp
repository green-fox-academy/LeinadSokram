#include "apple.h"

std::string getApple()
{
    return "apple";
}

int getSum(std::vector<int> numbers) {
    int sumOfVectorNumbers = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sumOfVectorNumbers += numbers[i];
    }
    return sumOfVectorNumbers;
}