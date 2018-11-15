#include <iostream>

// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a '*'.

std::string asterix(std::string mashUp, int x);

int main() {

    std::string word;
    std::cout << "Enter a word:" << std::endl;
    std::cin >> word;
    std::cout << asterix(word, 0) << std::endl;

    return 0;
}

std::string asterix(std::string mashUp, int x){

    if(x > mashUp.length()-1) {
        return mashUp;
    }else if(x <= 0){
        return asterix(mashUp, x+1);
    }else{
        mashUp.insert(x, "*");
        return asterix(mashUp, x + 2);
    }
}