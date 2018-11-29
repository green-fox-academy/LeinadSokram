#ifndef INC_02GARDENAPPLICATION_TREE_H
#define INC_02GARDENAPPLICATION_TREE_H

#include "Garden.h"

class Tree
{
public:
    Tree(const std::string &treeName, float waterLevel);

private:
    std::string _treeName;
    float _waterLevel;
};


#endif //INC_02GARDENAPPLICATION_TREE_H
