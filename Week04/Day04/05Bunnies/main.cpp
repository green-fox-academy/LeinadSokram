#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

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
    }else if (bunnies == 1){
        return 2;
    }else{
        return 2 + bunnyEars(bunnies-1);
    }

}