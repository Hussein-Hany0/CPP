#ifndef DOCTOR_H_INCLUDED
#define DOCTOR_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>

struct Course;

struct Doctor {

    std::string doctor_name;

    std::string doctor_user_name;
    std::string doctor_password;

    std::string doctor_email;

    Course* doctor_teaching_course;


//----------------------------------
    void sign_up_doctor();
    void add_course(Course*);
};

#endif // DOCTOR_H_INCLUDED
