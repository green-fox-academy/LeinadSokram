#include <iostream>

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

int bunnyEars(int bunnies);

int main() {

    int bunnyNumber;
    std::cout << "How many bunnies do we have?" << std::endl;
    std::cin >> bunnyNumber;
    std::cout << "We have " << bunnyEars(bunnyNumber) << " big floppy ears!" << std::endl;

    return 0;
}

int bunnyEars(int bunnies){

    if (bunnies <= 0){
        return 0;
    }else if(bunnies%2 == 0) {
        return 2 + bunnyEars(bunnies-1);
    }else if(bunnies%2 != 0) {
        return 3 + bunnyEars(bunnies - 1);
    }
}