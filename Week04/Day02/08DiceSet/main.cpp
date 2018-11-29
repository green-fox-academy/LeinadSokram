#include <iostream>

#include "DiceSet.h"

int main(int argc, char* args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;
    diceSet.roll();

    while (diceSet.getCurrent(1) != 6) {
            diceSet.roll(1);
            std::cout << diceSet.getCurrent(1) << std::endl;
    }

    return 0;
}