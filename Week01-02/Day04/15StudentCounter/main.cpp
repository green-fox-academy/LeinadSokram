#include <iostream>
#include <string>
#include <vector>
#include <utility> //for std::pair
#include <map>

std::vector<std::string>
getChildrenWithMoreThanFourCandies(const std::vector<std::pair<std::string, std::map<std::string, int>>> &students)
{
    std::vector<std::string> sweetChildren;

    for (int i = 0; i < students.size(); ++i) {
        if (students[i] > 4) //this should check if a child has more than 4 candy. But how do you delve into that?
        {
            sweetChildren.push_back(students[i]) //Then this should put said children to the new vector.
        }
    }

    return sweetChildren;
}

int sumOfAgeWithLessThanFiveCandies(const std::vector<std::pair<std::string, std::map<std::string, int>>> &students)
{
    int ageSum;

    for (int i = 0; i < students.size(); ++i) {
        if (students[i] < 5) //this should check if a child has less than 4 candy. But how do you delve into that?
        {
            ageSum += students[i] //Then this should add said children's age to the new intiger. Again, how do you delve into it?.
        }
    }

    return ageSum;
}

int main(int argc, char *args[])
{
    std::vector<std::pair<std::string, std::map<std::string, int>>> students;
    //This is a vector called "students" which pairs
    // - A string...
    // - with a map, which in turn consists of
    //      - Key strings paired to numbers

    std::map<std::string, int> TheodorData;
    TheodorData.insert(std::make_pair("age", 9));
    TheodorData.insert(std::make_pair("candies", 2));
    students.push_back(std::make_pair("Theodor", TheodorData));

    std::map<std::string, int> PaulData;
    PaulData.insert(std::make_pair("age", 10));
    PaulData.insert(std::make_pair("candies", 1));
    students.push_back(std::make_pair("Paul", PaulData));

    std::map<std::string, int> MarkData;
    MarkData.insert(std::make_pair("age", 7));
    MarkData.insert(std::make_pair("candies", 3));
    students.push_back(std::make_pair("Mark", MarkData));

    std::map<std::string, int> PeterData;
    PeterData.insert(std::make_pair("age", 12));
    PeterData.insert(std::make_pair("candies", 5));
    students.push_back(std::make_pair("Peter", PeterData));

    std::map<std::string, int> OlafData;
    OlafData.insert(std::make_pair("age", 12));
    OlafData.insert(std::make_pair("candies", 7));
    students.push_back(std::make_pair("Olaf", OlafData));

    std::map<std::string, int> GeorgeData;
    GeorgeData.insert(std::make_pair("age", 3));
    GeorgeData.insert(std::make_pair("candies", 2));
    students.push_back(std::make_pair("George", GeorgeData));

    // Display the following things:
    //  - Who has got more than 4 candies
    //  - Sum the age of children who have less than 5 candies

    std::cout << "Children with more than 4 candies: ";
    for (const auto &child : getChildrenWithMoreThanFourCandies(students)) {
        std::cout << child << " ";
    }

    std::cout << "\n";
    std::cout << "Sum of those who have less than 5 candies: " << sumOfAgeWithLessThanFiveCandies(students)
              << std::endl;

    return 0;
}