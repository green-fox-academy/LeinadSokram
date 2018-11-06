#include <iostream>

int guessingFunction(int arrayPointer[], int sizeOfArray, int givenNumber);

int main()
{
    // Create a function which takes an array (and it's length) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    int array[9] ={11,22,33,44,55,66,77,88,99};
    int lengthOfArray = sizeof(array) / sizeof(array[0]);
    int guessTheNumber;

    std::cout << "Please enter a number: " << std::endl;
    std::cin >> guessTheNumber;

    int indexNumber = guessingFunction(array, lengthOfArray, guessTheNumber);

    std::cout << "The index of the guessed number is: " << indexNumber << std::endl;

    return 0;
}

int guessingFunction(int arrayPointer[], int sizeOfArray, int givenNumber) {

    for(int i = 0; i <= sizeOfArray; i++) {
        if (arrayPointer[i] == givenNumber) {
            return i;
        }
    }
    return 0;

}