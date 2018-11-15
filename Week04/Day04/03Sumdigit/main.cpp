#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int sumdigit(int number);

int main() {

    int n;
    std::cout << "Enter a non-negative number:" << std::endl;
    std::cin >> n;
    std::cout << "The sum of the number's digits is " << sumdigit(n) << std::endl;

    return 0;
}

int sumdigit(int number){

    if (number == 0){
        return number;
    }else{
        return number%10 + sumdigit(number/10);
    }
}