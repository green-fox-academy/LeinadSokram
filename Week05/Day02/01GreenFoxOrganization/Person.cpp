#include "Person.h"

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender) {}

std::string Person::introduce() {
    return "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << ".";
}

std::string Person::getGoal() {
    return "My goal is: Live for the moment!";
}