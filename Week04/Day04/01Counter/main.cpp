#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

void countdown(int count);

int main() {

    int n;
    std::cout << "Enter a parameter: " << std::endl;
    std::cin >> n;
    countdown(n);

    return 0;
}

void countdown(int count){

    if (count <= 0){
        count = 0;
        std::cout << count << std::endl;
    }else{
        std::cout << count << std::endl;
        countdown(count-1);
    }

}