#ifndef INC_02ANIMALSINTHEZOO_ANIMAL_H
#define INC_02ANIMALSINTHEZOO_ANIMAL_H

#include <iostream>

class Animal {

public:
    Animal(const std::string &name);

    std::string getName();
    virtual std::string breed() = 0;
    std::string gender();

private:
    std::string _name;
    int _age;
    std::string _gender;

};

#endif