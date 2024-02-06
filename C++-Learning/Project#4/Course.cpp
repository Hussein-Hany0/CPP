#include "Course.h"

Course::Course(){
    assignment = new Assignment;
}

Course::~Course(){
    delete assignment;
}

void Course::read_course(){

    std::cout<<"Course ID   : ";   std::cin>>course_id;
    std::cout<<"Course Name : ";   std::cin>>course_name;
}

void Course::print_course(){
    std::cout<<"  Course "<<course_name<<" - "<<"Code "<<course_id<<"\n";
}

void Course::add_doctor(Doctor* d){
    dr_taught_course = d;
}
