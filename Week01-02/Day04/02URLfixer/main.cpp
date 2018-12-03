#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    std::string wrong1 = "bots";
    int wrongStart1 = url.find(wrong1);
    url.replace(wrongStart1, wrong1.length(), "odds");

    std::string wrong2 = "//";
    int wrongStart2 = url.find(wrong2);
    url.replace(wrongStart2, wrong2.length(), "://");

    std::cout << url << std::endl;

    return 0;
}