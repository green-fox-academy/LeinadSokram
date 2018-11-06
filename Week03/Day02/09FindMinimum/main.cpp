#include <iostream>

int *awesomeFunction(int arrayNumbers[], int arraySize);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int arrayLength = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << awesomeFunction(numbers, arrayLength) << std::endl;

    return 0;
}

int *awesomeFunction (int arrayNumbers[], int arraySize){

    int minimumNumber = arrayNumbers[0];
    int *miniMemory = &arrayNumbers[0];

    for (int i = 0; i < arraySize; i++){
        if (arrayNumbers[i] < minimumNumber){
            minimumNumber = arrayNumbers[i];
            miniMemory = &arrayNumbers[i];
        }
    }

    return miniMemory;

}