#ifndef INC_01POST_IT_POSTIT_H
#define INC_01POST_IT_POSTIT_H
#include <string>

class PostIt {

    public:
        PostIt();

        void setBackgroundColor(std::string x);
        std::string getBackgroundColor();

        void setText(std::string x);
        std::string getText();

        void setTextColor(std::string x);
        std::string getTextColor();

    private:
        std::string _backgroundColor;
        std::string _text;
        std::string _textColor;

};

#endif