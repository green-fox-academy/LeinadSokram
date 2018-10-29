#include <iostream>
#include <string>

std::string greet(std::string y);

int main(int argc, char* args[]) {

    // - Create a string variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`

    std::string al = "Greenfox";

    std::cout << "Greetings dear, " << greet(al) << std::endl;

    return 0;
}

std::string greet(std::string y){

    return y;

};