#include "Sponsor.h"

Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company, int hiredStudents)
        : Person(name, age, gender), _company(company), _hiredStudents(hiredStudents) {}

void Sponsor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGender() << " who represents " <<
    _company << " and hired " << _hiredStudents << " students so far." << std::endl;
}

int Sponsor::hire() {
    _hiredStudents++;
    return _hiredStudents;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}