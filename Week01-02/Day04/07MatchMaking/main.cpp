#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys)
{
    std::vector<std::string> newGirls = girls;
    std::vector<std::string> newBoys = boys;
    std::vector<std::string> pairs;

    for(int g = 0; g < newGirls.size(); ++g){
        pairs.insert(pairs.begin(0), newGirls[g]);
        pairs.insert(pairs.begin(1), newBoys[b])
        }


}

int main(int argc, char* args[])
{
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};

    // Write a method that joins the two lists by matching one girl with one boy into a new list
    // Expected output: "Eve", "Joe", "Ashley", "Fred"...

    for(const auto& pairs : makingMatches(girls, boys))
    {
        std::cout << pairs << " ";
    }

    return 0;
}