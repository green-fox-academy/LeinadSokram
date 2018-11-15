#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int powerN(int b, int pwr);

int main() {

    int base;
    int n;

    std::cout << "Enter a base number:" << std::endl;
    std::cin >> base;
    std::cout << "Enter an n number:" << std::endl;
    std::cin >> n;

    std::cout << powerN(base, n) << std::endl;

    return 0;
}

int powerN(int b, int pwr){

    if (b == 1 || pwr == 1){
        return b;
    }else{
        return b*(powerN(b, pwr-1));
    }
}