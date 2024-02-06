#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include "Course.h"
#include <vector>
#include <string>

struct Student {

    std::string student_name;

    std::string student_user_name;
    std::string student_password;

    std::string student_email;

    std::vector<Course*> student_courses;

//--------------------------------------------

    void sign_up_student();

    void add_course(Course*);
};

#endif // STUDENT_H_INCLUDED
