#include "Student.h"

void Student::sign_up_student(){
    std::string input;

    std::cout<<"  First Name   : ";  std::cin>>student_name;

    std::cout<<"  Email        : ";  std::cin>>student_email;

    std::cout<<"  User Name  : ";  std::cin>>student_user_name;
    std::cout<<"  PassWord   : ";  std::cin>>student_password;
}

void Student::add_course(Course* c){
    student_courses.push_back(c);
}
