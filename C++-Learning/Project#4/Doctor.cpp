#include "Doctor.h"
#include "Course.h"
void Doctor::sign_up_doctor(){

    std::cout<<"  First Name   : ";  std::cin>>doctor_name;

    std::cout<<"  Email        : ";  std::cin>>doctor_email;

    std::cout<<"  User Name  : ";  std::cin>>doctor_user_name;
    std::cout<<"  PassWord   : ";  std::cin>>doctor_password;
}

void Doctor::add_course(Course* c){
    doctor_teaching_course = c;
}
