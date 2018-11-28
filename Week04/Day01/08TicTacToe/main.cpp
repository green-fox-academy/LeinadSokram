#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::string ticTacResult (std::string fileName);

int main() {
    // Write a function that takes a filename as string,
    // open and read it. The file data represents a tic-tac-toe
    // game result. Return 'X'/'O'/'draw' based on which player
    // has winning situation.

    std::cout << ticTacResult("win-o.txt");
    // should print O

    std::cout << ticTacResult("win-x.txt");
    // should print X

    std::cout << ticTacResult("draw.txt");
    // should print draw

    return 0;
}

std::string ticTacResult (std::string fileName) {

    std::ifstream game(fileName);

    if (!game.is_open()) {
        std::cout << "Something went wrong!" << std::endl;
    }

    std::string row;
    std::vector<std::string> gameArray;

    while (game >> row) {
        gameArray.push_back(row);
    }

    for (int i = 0; i < 3; i++) {
        if (gameArray[i] == "OOO") {
            return "O ";
        } else if (gameArray[i] == "XXX") {
            return "X ";
        } else {
            return "draw ";
        }
    }

}