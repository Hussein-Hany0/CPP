#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED
#include "Assignment.h"
#include <iostream>
#include "Doctor.h"
#include <vector>
#include <string>
struct Course {

    std::string course_id;
    std::string course_name;

    Doctor* dr_taught_course;

    Assignment* assignment;

//-------------------------------------

    Course();
    ~Course();

    void read_course();
    void print_course();

    void add_doctor(Doctor*);
};

#endif // COURSE_H_INCLUDED
