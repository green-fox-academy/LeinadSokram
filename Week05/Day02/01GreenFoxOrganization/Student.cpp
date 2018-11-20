#include "Student.h"

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization) :
Person(name, age, gender), _previousOrganization(previousOrganization), _skippedDays(0) {}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

void Student::introduce() {
    std::cout << "Hi, I'm " << _name << " a " << _age << " year old " << getGender() << " from " << _previousOrganization << " who skipped " << _skippedDays << " days from the course already." << std::endl;
}

void Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}