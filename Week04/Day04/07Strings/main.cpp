#include <iostream>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

std::string xChanger(std::string y, int length);

int main() {

    std::string words;
    std::cout << "Enter a word wit lots of Xs:" << std::endl;
    std::cin >> words;
    std::cout << "The word with Ys is " << xChanger(words, words.length()) << std::endl;

    return 0;
}

std::string xChanger(std::string y, int length){

    if (length <= -1){
        return y;
    }else if (y[length] == 'x'){
        y[length] = 'y';
        return xChanger(y, length-1);
    }else{
        return xChanger(y, length-1);
    }
}