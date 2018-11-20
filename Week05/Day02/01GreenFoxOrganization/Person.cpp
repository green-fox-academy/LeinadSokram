#include "Person.h"

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender) {}

void Person::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGender() << "." << std::endl;
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

std::string Person::getGender() {
    if (_gender == Gender::FEMALE) {
        return "female";
    } else {
        return "male";
    }
}