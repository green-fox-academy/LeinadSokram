#ifndef INC_01GREENFOXORGANIZATION_PERSON_H
#define INC_01GREENFOXORGANIZATION_PERSON_H

#include <string>

enum class Gender {
    FEMALE,
    MALE,
    OTHER
};

class Person {
public:
    Person(const std::string &name, int age, Gender gender);

    std::string introduce();
    std::string getGoal();
protected:
    std::string _name;
    int _age;
    Gender _gender;

};


#endif