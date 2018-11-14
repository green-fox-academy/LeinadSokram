#include "Sharpie.h"

void Sharpie::use(float a) {
    _inkAmount -= a;
}

float Sharpie::getAmount(){
    return _inkAmount;
}