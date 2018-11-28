#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP addresses.
// Write a function that returns the GET / POST request ratio.

std::vector<std::string> ipReturnerFunction (std::string logFile);
float ratioReturnerFunction (std::string logFile);

int main() {

    std::string logFile = "../log.txt";

    std::cout << "The unique IP addresses are: " << std::endl;

    for (int i = 0; i < ipReturnerFunction(logFile).size(); i++) {
        std::cout << ipReturnerFunction(logFile)[i] << std::endl;
    }

    std::cout << "The GET / POST request ratio is " << ratioReturnerFunction(logFile) << std::endl;

    return 0;
}

std::vector<std::string> ipReturnerFunction (std::string logFile) {

    std::ifstream checkIp(logFile);

    std::string weekDay;
    std::string month;
    int monthDay;
    std::string time;
    int year;
    std::string ipAddress;
    std::string getPost;
    std::string slash;

    std::vector<std::string> uniqueIp;

    while (checkIp >> weekDay >> month >> monthDay >> time >> year >> ipAddress >> getPost >> slash) {
        if (std::find(uniqueIp.begin(), uniqueIp.end(), ipAddress) == uniqueIp.end()) {
            uniqueIp.push_back(ipAddress);
        }
    }

    return uniqueIp;
}

float ratioReturnerFunction (std::string logFile) {

    std::ifstream checkRatio(logFile);

    std::string weekDay;
    std::string month;
    int monthDay;
    std::string time;
    int year;
    std::string ipAddress;
    std::string ratioGetPost;
    std::string slash;

    int numberOfGets = 0;
    int numberOfPosts = 0;

    while (checkRatio >> weekDay >> month >> monthDay >> time >> year >> ipAddress >> ratioGetPost >> slash) {
        if (ratioGetPost == "GET") {
            numberOfGets++;
        } else if (ratioGetPost == "POST") {
            numberOfPosts++;
        }
    }

    return (float)numberOfGets / numberOfPosts;
}