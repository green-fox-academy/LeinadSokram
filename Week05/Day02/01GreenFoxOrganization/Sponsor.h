#ifndef INC_01GREENFOXORGANIZATION_SPONSOR_H
#define INC_01GREENFOXORGANIZATION_SPONSOR_H

#include "Person.h"

class Sponsor: protected Person{};

class Sponsor {
public:
    introduce();
    hire();
    getGoal();
private:
    std::string _company;
    int _hiredStudents;
};


#endif