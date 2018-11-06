#include <iostream>
#include <string>

int sum(int numberFromMain);

int main(int argc, char* args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer

    int givenParameter;
    std::cout << "Please enter a parameter: " << std::endl;
    std::cin >> givenParameter;

    std::cout << "The sum of all numbers until the given parameter is: " << sum(givenParameter) << std::endl;

    return 0;
}

int sum(int numberFromMain){

    int totalSum = 0;

    for(int i = 0; i <= numberFromMain; i++){
        totalSum += + i;
    }

    return totalSum;

}