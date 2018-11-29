#ifndef INC_02GARDENAPPLICATION_FLOWER_H
#define INC_02GARDENAPPLICATION_FLOWER_H

#include "Garden.h"

class Flower
{

public:
    Flower(const std::string &flowerName, float waterLevel);

private:
    std::string _flowerName;
    float _waterLevel;
};


#endif //INC_02GARDENAPPLICATION_FLOWER_H
