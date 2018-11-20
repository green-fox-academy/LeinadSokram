#ifndef INC_01GREENFOXORGANIZATION_MENTOR_H
#define INC_01GREENFOXORGANIZATION_MENTOR_H

#include "Person.h"

enum class Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor: public Person {
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);

    void getGoal() override;
    void introduce() override;
    std::string getLevel();

private:
    Level _level;

};

#endif