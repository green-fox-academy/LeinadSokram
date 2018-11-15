#include <iostream>

// Create a recursive function called `refactorio`
// that returns it's input's factorial

long long refactorio(int f);

int main() {

    int input;
    std::cout << "Enter a non-negative number:" << std::endl;
    std::cin >> input;
    std::cout << "The factorial of " << input << " is " << refactorio(input) << std::endl;

    return 0;
}

long long refactorio(int f){

    if (f <= 1){
        return 1;
    }else{
        return f * refactorio(f - 1);
    }
}