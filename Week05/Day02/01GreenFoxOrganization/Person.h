#ifndef INC_01GREENFOXORGANIZATION_PERSON_H
#define INC_01GREENFOXORGANIZATION_PERSON_H

#include <iostream>
#include <string>

enum class Gender {
    FEMALE,
    MALE,
};

class Person {

public:
    Person(const std::string &name, int age, Gender gender);
    Person();

    virtual void introduce();
    virtual void getGoal();
    std::string getGender();

protected:
    std::string _name;
    int _age;
    Gender _gender;

};

#endif