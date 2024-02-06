#ifndef FACULTY_H_INCLUDED
#define FACULTY_H_INCLUDED
#include "Assignment.h"
#include "Student.h"
#include "Doctor.h"
#include "Course.h"
#include <vector>

struct Faculty {

    std::vector<Doctor>  doctor;
    std::vector<Student> student;
    std::vector<Course>  course;

//-------------------------------

    void enroll_student();

    void enroll_doctor();

    void is_enrolled(std::string, std::string);

    int admin_options();
    int student_options();
    int doctor_options();

    void is_admin_enrolled(std::string,std::string);
    void is_doctor_enrolled(std::string,std::string);
    void is_student_enrolled(std::string,std::string);

    int view_student_courses(Course&,int);

};


#endif // FACULTY_H_INCLUDED
