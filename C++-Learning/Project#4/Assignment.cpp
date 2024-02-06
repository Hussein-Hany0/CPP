#include "Assignment.h"

void Assignment::create_assignment(){

    std::cout<<"  Enter the question : "; std::cin>>question;

    std::cout<<"  Enter the answer : ";    std::cin>>answer;
}

void Assignment::solve_assignment(){
    std::cout<<"  Enter solution : "; std::cin>>solution;
    if(solution == answer)
        grade += 25;
}

