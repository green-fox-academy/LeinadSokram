#include <iostream>
#include <string>

int sum(int s);

int main(int argc, char* args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer

    int parameter;
    std::cout << "Please enter a parameter: " << std::endl;
    std::cin >> parameter;

    std::cout << "The sum of all numbers until the given parameter is: " << sum(parameter) << std::endl;

    return 0;
}

int sum(int s){

    int a = 0;
    int total = 0;
    while (a <= s){
        total = total + a;
        a += 1;
    }

    return total;

}