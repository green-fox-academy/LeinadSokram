#include "BlogPost.h"

BlogPost::BlogPost() {

}

void BlogPost::setAuthorName(std::string x) {
    _authorName = x;
}

std::string BlogPost::getAuthorName() {
    return _authorName;
}

void BlogPost::setTitle(std::string x) {
    _title = x;
}

std::string BlogPost::getTitle() {
    return _title;
}

void BlogPost::setText(std::string x) {
    _text = x;
}

std::string BlogPost::getText() {
    return _text;
}

void BlogPost::setPublicationDate(std::string x) {
    _publicationDate = x;
}

std::string BlogPost::getPublicationDate() {
    return _publicationDate;
}

