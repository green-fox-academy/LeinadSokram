#ifndef INC_01GREENFOXORGANIZATION_COHORT_H
#define INC_01GREENFOXORGANIZATION_COHORT_H

#include <string>
#include <vector>
#include "Student.h"
#include "Mentor.h"

class Cohort {

public:
    Cohort(const std::string &name);

    void addStudent(Student* student);
    void addMentor(Mentor* mentor);
    void info();

private:
    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;

};


#endif