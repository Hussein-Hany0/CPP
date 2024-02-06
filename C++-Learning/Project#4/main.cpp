#include <iostream>
#include "Faculty.h"

Faculty faculty;

void start_menu();
void user_menu();
void sign_up();



int main()
{
    start_menu();
    return 0;
}

void start_menu(){

    int c;

    std::cout<<"\n  Please make a choice :\n\n";
    std::cout<<"\t1 - Login\n";
    std::cout<<"\t2 - Sign up\n";
    std::cout<<"\t3 - Shutdown system\n";

    std::cout<<"\n\tEnter choice : "; std::cin>>c;

    if(c >= 1 && c <= 3){
        if(c == 1)
            user_menu();

        else if(c == 2)
            sign_up();
        else
            return;
    }
    else{
        std::cout<<"\n  Invalid choice\n";
        start_menu();
    }
}

void user_menu(){

    std::string user_name;
    std::string pass_word;

    std::cout<<"\n  Please enter user name and password:\n";

    std::cout<<"  User name : "; std::cin>>user_name;

    std::cout<<"  Password  : ";  std::cin>>pass_word;

    faculty.is_enrolled(user_name,pass_word);

    start_menu();

}

void sign_up(){
    int c;

    std::cout<<"\n  1 - Sign as Doctor\n";
    std::cout<<"  2 - Sign as Student\n\n";

    std::cout<<"  Choice : ";    std::cin>>c;

    if(c >=1 && c <=2){
        if(c == 1){
            faculty.enroll_doctor();
            start_menu();
        }
        else{
            faculty.enroll_student();
            start_menu();
        }
    }
    else{
        std::cout<<"  Invalid choice\n";
        sign_up();
    }

}
