#include <iostream>

int main(int argc, char* args[]) {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    int codingHoursPerDay = 6;
    int weeksPerSemester = 17;
    int workdaysPerWeek = 5;
    int allCodingHours = codingHoursPerDay * workdaysPerWeek * weeksPerSemester;

    std::cout << "Hours spent with coding in a semester by an attendee: " << allCodingHours << std::endl;

    int workHoursPerWeek = 52;
    int allWorkHours = weeksPerSemester * workHoursPerWeek;

    std::cout << "Percentage of the coding hours in the semester: " <<
    (float)allCodingHours / allWorkHours * 100 << "%" << std::endl;

    return 0;
}