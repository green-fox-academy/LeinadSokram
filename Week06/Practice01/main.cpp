#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Car.h"

int main()
{
    std::ifstream carFile;
    carFile.open("../cars.txt");

    if (!carFile.is_open())
    {
        std::cout << "Error! Could not open file!" << std::endl;
        return -1;
    }

    std::vector<Car> carVector;
    std::string line;

    while (std::getline(carFile, line))
    {
        std::istringstream stream(line);

        std::string speedString;
        std::getline(stream, speedString, ';');
        int speed = std::stoi(speedString, nullptr, 10);

        std::string color;
        std::getline(stream, color, ';');

        std::string weightString;
        std::getline(stream, weightString, ';');
        int weight = std::stoi(weightString, nullptr, 10);

        Car carObject(speed, color, weight);
        carVector.push_back(carObject);
    }

    carFile.close();

    //The above would look waaay better in a function, but I was lazy to rewrite it :)

    for (int i = 0; i < carVector.size(); ++i)
    {
        std::cout << carVector[i].getSpeed() << std::endl;
    }

    return 0;
}