#ifndef INC_04SHARPIE_SHARPIE_H
#define INC_04SHARPIE_SHARPIE_H
#include <string>

class Sharpie {

    public:

        Sharpie(std::string color, float width) {
            _inkAmount = 100;
            _color = color;
            _width = width;
        }

        void use(float a);
        float getAmount();

private:

        std::string _color;
        float _width;
        float _inkAmount;

};

#endif