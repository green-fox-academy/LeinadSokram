#include <iostream>
#include <fstream>
#include <string>

// Create a function that takes 3 parameters: a path, a word and a number,
// then it should write them to a file.
// The path parameter should describe the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number parameter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, then it should write 5 lines
// to the file and each line should be "apple"

void fileMaker (std::string filePath, std::string fileWord, int fileNumber);

int main() {

    std::string path;
    std::string word;
    int number;

    std::cout << "Where do you want to create the file?" << std::endl;
    std::cin >> path;

    std::cout << "What would you like to write in it?" << std::endl;
    std::cin >> word;

    std::cout << "How many times would you like to write it?" << std::endl;
    std::cin >> number;

    fileMaker(path, word, number);

    return 0;
}

void fileMaker (std::string filePath, std::string fileWord, int wordNumber){

      std::ofstream file(filePath);

      if (file.is_open()){

          int lineNumber = 0;
          while (lineNumber <= wordNumber) {
              file << fileWord << std::endl;
              lineNumber++;
          }
          file.close();
      }
}