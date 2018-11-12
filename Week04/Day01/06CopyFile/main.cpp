#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the file names as parameters
// It should return a boolean that shows if the copy was successful

bool fileCopier (std::string originalFile, std::string newFile);

int main() {

    std::string original = "C:/Private/greenfox/leinadsokram/Week04/my-file.txt";
    std::string copy;

    std::cout << "Enter filename:" << std::endl;
    std::cin >> copy;

    std::cout << fileCopier(original, copy) << std::endl;

    return 0;
}

bool fileCopier (std::string originalFile, std::string copyFile){

    std::ifstream oldFile(originalFile);
    std::ofstream newFile(copyFile);
    std::string lines;

    if (oldFile.is_open() && newFile.is_open()){

        while (getline(oldFile, lines)){

            newFile << lines << std::endl;

        }
    }

    oldFile.close();
    newFile.close();

    return true;

}