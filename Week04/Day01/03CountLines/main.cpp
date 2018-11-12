#include <iostream>
#include <fstream>
#include <string>

int lineCounterFunction (std::string myFile);

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string myFile = "C:/Private/greenfox/leinadsokram/Week04/my-file.txt";
    std::cout << lineCounterFunction(myFile) << std::endl;

    return 0;
}

int lineCounterFunction (std::string myFile){

    std::ifstream file(myFile);
    if(file.is_open()){

        std::string linesInFile;
        int lineCounter = 0;

        while(getline(file, linesInFile)){
            ++lineCounter;
        }

        return lineCounter;

    }else{
        return 0;
    }

}