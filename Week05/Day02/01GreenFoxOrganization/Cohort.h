#ifndef INC_01GREENFOXORGANIZATION_COHORT_H
#define INC_01GREENFOXORGANIZATION_COHORT_H

#include <string>
#include <vector>
#include "Student.h"
#include "Mentor.h"

class Cohort {

public:
    addStudent(Student*);
    addMentor(Mentor*);
    void info();
private:
    std::string _name;
    std::vector<Students> _students;
    std::vector<Mentors> _mentors;

};


#endif