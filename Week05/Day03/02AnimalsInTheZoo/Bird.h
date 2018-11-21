#ifndef INC_02ANIMALSINTHEZOO_BIRD_H
#define INC_02ANIMALSINTHEZOO_BIRD_H

#include "Animal.h"


class Bird : public Animal {

public:
    Bird(const std::string &name);

    std::string breed() override;
};


#endif //INC_02ANIMALSINTHEZOO_BIRD_H
