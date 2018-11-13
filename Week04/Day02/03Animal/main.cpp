#include <iostream>
#include "Animal.h"

int main() {

    Animal elephant;
    elephant.eat(5);
    elephant.drink(3);
    elephant.play(10);

    std::cout << elephant.getHunger() << std::endl;
    std::cout << elephant.getThirst() << std::endl;

    return 0;
}