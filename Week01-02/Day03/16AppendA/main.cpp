#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

    std::string animals[3] = {"koal", "pand", "zebr"};
    std::string appendA = "a";

    for (int i = 0; i < 3; i++){
        animals[i].push_back(appendA);
        std::cout << animals[i] << std::endl;
    }


    return 0;
}