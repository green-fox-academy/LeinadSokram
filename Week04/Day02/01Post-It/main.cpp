#include <iostream>
#include <string>
#include "PostIt.h"

int main() {

    PostIt objectPostIT;
    objectPostIT.setBackgroundColor("orange");
    objectPostIT.setText("Idea1");
    objectPostIT.setTextColor("blue");

    PostIt objectPostIT2;
    objectPostIT2.setBackgroundColor("pink");
    objectPostIT2.setText("Awesome");
    objectPostIT2.setTextColor("black");

    PostIt objectPostIT3;
    objectPostIT3.setBackgroundColor("yellow");
    objectPostIT3.setText("Superb!");
    objectPostIT3.setTextColor("green");

    std::cout << "The background color of the first post-it is " << objectPostIT.getBackgroundColor() << ", and it's written " << objectPostIT.getText() << " on it in " << objectPostIT.getTextColor() << std::endl;
    std::cout << "The background color of the second post-it is " << objectPostIT2.getBackgroundColor() << ", and it's written " << objectPostIT2.getText() << " on it in " << objectPostIT2.getTextColor() << std::endl;
    std::cout << "The background color of the third post-it is " << objectPostIT3.getBackgroundColor() << ", and it's written " << objectPostIT3.getText() << " on it in " << objectPostIT3.getTextColor() << std::endl;

    return 0;
}