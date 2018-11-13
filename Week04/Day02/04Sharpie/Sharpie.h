#ifndef INC_04SHARPIE_SHARPIE_H
#define INC_04SHARPIE_SHARPIE_H
#include <string>

class Sharpie {

    public:

        Sharpie() {
            _inkAmount = 100;
        }

    Sharpie(const std::string &_color, float _width, float _inkAmount) : _color(_color), _width(_width),
                                                                         _inkAmount(_inkAmount) {}


private:

        std::string _color;
        float _width{};
        float _inkAmount;

};

#endif