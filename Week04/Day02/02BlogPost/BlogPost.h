#ifndef INC_02BLOGPOST_BLOGPOST_H
#define INC_02BLOGPOST_BLOGPOST_H
#include <string>

class BlogPost {

    public:
        BlogPost();

        void setAuthorName(std::string x);
        std::string getAuthorName();

        void setTitle(std::string x);
        std::string getTitle();

        void setText(std::string x);
        std::string getText();

        void setPublicationDate(std::string x);
        std::string getPublicationDate();

    private:
        std::string _authorName;
        std::string _title;
        std::string _text;
        std::string _publicationDate;

};

#endif