#include "PostIt.h"
#include <string>
#include <ostream>

PostIt::PostIt(){}

void PostIt::setBackgroundColor(std::string x){
    _backgroundColor = x;
}
std::string PostIt::getBackgroundColor(){
    return _backgroundColor;
}

void PostIt::setText(std::string x){
    _text = x;
}
std::string PostIt::getText(){
    return _text;
}

void PostIt::setTextColor(std::string x){
    _textColor = x;
}
std::string PostIt::getTextColor(){
    return _textColor;
}