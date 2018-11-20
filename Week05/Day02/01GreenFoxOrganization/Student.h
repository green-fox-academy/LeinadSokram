#ifndef INC_01GREENFOXORGANIZATION_STUDENT_H
#define INC_01GREENFOXORGANIZATION_STUDENT_H

#include "Person.h"

class Student: protected Person{};

class Student {
public:
    getgoal();
    introduce();
    skipDays(numberOfDays);
protected:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif