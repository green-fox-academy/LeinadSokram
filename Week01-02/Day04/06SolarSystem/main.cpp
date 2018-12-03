#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> putSaturn(const std::vector<std::string> &planets)
{
    //Write a function that returns all planets to the main program
    //Keep in mind that these are in a constant vector ie. you can't modify it!

    std::vector<std::string> planet = planets;
    planet.insert(planet.begin(5), "Saturn");

    return planet;
}

int main(int argc, char *args[])
{
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Uranus Neptune Saturn

    for (const auto &planet : putSaturn(planets))
    {
        std::cout << planet << " ";
    }

    return 0;
}