#include "Cohort.h"

Cohort::Cohort(const std::string &name) : _name(name) {
    _students.clear();
    _mentors.clear();
}

void Cohort::addStudent(Student *Student) {
    _students.push_back(Student);
}

void Cohort::addMentor(Mentor *Mentor) {
    _mentors.push_back(Mentor);
}

void Cohort::info() {
    std::cout << "The " << _name << " cohort has " << _students.size() << " students and " << _mentors.size() << " mentors." << std::endl;
}




