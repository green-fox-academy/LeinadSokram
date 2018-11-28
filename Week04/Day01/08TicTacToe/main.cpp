#include <iostream>
#include <fstream>
#include <string>

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

    std::string row1;
    std::string row2;
    std::string row3;
    std::string gameArray[3][3];

    while (game >> row1 >> row2 >> row3)  {
        std::string gameArray[3][3] = {row1, row2, row3, row1, row2, row3, row1, row2, row3};
    }

    if (gameArray[0][0] == "X" && gameArray[0][1] == "X" && gameArray[0][2] == "X") //...etc


    for ( int i = 0; i < 3; i++ )
    for ( int j = 0; j < 3; j++ ) {
        if ()
        std::cout << gameArray[i][j]<< std::endl;
    }

}