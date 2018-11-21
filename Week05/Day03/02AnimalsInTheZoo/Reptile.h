#ifndef INC_02ANIMALSINTHEZOO_REPTILE_H
#define INC_02ANIMALSINTHEZOO_REPTILE_H

#include "Animal.h"
#include <string>

class Reptile : public Animal {

public:
    Reptile(const std::string &name);

    std::string breed() override;

};

#endif