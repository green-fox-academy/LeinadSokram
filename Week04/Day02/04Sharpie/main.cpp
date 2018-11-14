#include <iostream>
#include "Sharpie.h"

int main() {

    Sharpie firstSharpie("yellow", 1.1);

    firstSharpie.use(10);


    std::cout << firstSharpie.getAmount() << std::endl;

    return 0;
}