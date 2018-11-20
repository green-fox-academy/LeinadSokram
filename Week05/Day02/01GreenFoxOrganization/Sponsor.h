#ifndef INC_01GREENFOXORGANIZATION_SPONSOR_H
#define INC_01GREENFOXORGANIZATION_SPONSOR_H

#include "Person.h"

class Sponsor: protected Person{

public:
    Sponsor(const std::string &name, int age, Gender gender, const std::string &company, int hiredStudents);

    void introduce() override;
    int hire();
    void getGoal() override;

private:
    std::string _company;
    int _hiredStudents;

};


#endif