#include <iostream>

// Given a string, compute recursively a new string where all the 'x' chars have been removed.

std::string xRemover(std::string noX, int length);

int main() {

    std::string words;
    std::cout << "Enter a word wit lots of Xs:" << std::endl;
    std::cin >> words;
    std::cout << "The word without Xs is " << xRemover(words, words.length()) << std::endl;

    return 0;
}

std::string xRemover(std::string noX, int length){

    if (length <= -1){
        return noX;
    }else if (noX[length] == 'x'){
        noX.erase(length, 1);
        return xRemover(noX, length-1);
    }else{
        return xRemover(noX, length-1);
    }
}