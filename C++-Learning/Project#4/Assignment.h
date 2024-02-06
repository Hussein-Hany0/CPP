#ifndef ASSIGNMENT_H_INCLUDED
#define ASSIGNMENT_H_INCLUDED
#include <iostream>
#include <string>

struct Assignment {

    std::string question;
    std::string answer;
    std::string solution = "";
    int grade;

//----------------------------------------------

    void create_assignment();

    void print_assignment();

    void solve_assignment();
};


#endif // ASSIGNMENT_H_INCLUDED
