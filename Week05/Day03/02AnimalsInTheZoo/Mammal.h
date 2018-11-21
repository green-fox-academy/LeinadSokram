#ifndef INC_02ANIMALSINTHEZOO_MAMMAL_H
#define INC_02ANIMALSINTHEZOO_MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {

public:
    Mammal(const std::string &name);

    std::string breed() override;

};

#endif