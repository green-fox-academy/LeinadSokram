#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int numberadder(int parameter);

int main() {

    int n;
    std::cout << "Please add a parameter greater than zero:" << std::endl;
    std::cin >> n;
    std::cout << numberadder(n) << std::endl;

    return 0;
}

int numberadder(int parameter){

    if(parameter < 1){
        return 0;
    }else if(parameter == 1){
        return 1;
    }else{
        return parameter + numberadder(parameter-1);
    }
}