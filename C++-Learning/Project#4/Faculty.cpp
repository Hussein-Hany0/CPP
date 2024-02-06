#include "Faculty.h"

void Faculty::enroll_student(){
    Student s;
    s.sign_up_student();
    student.push_back(s);
}

void Faculty::enroll_doctor(){
    Doctor d;
    d.sign_up_doctor();
    doctor.push_back(d);
}

void Faculty::is_enrolled(std::string user, std::string pass){
    is_admin_enrolled(user,pass);
    is_doctor_enrolled(user,pass);
    is_student_enrolled(user,pass);
}

void Faculty::is_admin_enrolled(std::string user, std::string pass){

    if(user == "admin" && pass == "admin"){

        int c = admin_options();

        if(c == 1){
            while(1){

                Course a;
                char key;

                std::cout<<"  Course Name : ";      std::cin>>a.course_name;
                std::cout<<"  Course ID : ";            std::cin>>a.course_id;
                course.push_back(a);

                std::cout<<"  Another Course ? y/n : ";  std::cin>>key;

                if(key == 'y' || key == 'Y')
                    continue;
                else
                    return;
            }
        }
        else if(c == 2){

            std::string input1;
            std::string input2;

            std::cout<<"  Course name : ";      std::cin>>input1;
            std::cout<<"  Doctor name : ";      std::cin>>input2;


            for(int i = 0 ; i < course.size() ; i++){
                if(course[i].course_name == input1){
                    for(int i = 0 ; i < doctor.size() ; i++){
                        if(doctor[i].doctor_name == input2){
                            doctor[i].add_course(&course[i]);
                            course[i].add_doctor(&doctor[i]);
                            std::cout<<"\n  Successfully added\n";
                        }
                    }
                }
            }
        }
        else
            return;
    }
}

void Faculty::is_doctor_enrolled(std::string user, std::string pass){
    for(auto &d : doctor){
        if(d.doctor_user_name ==  user && d.doctor_password == pass){

            std::cout<<"\n  Welcome "<<d.doctor_name<<". You are logged in.\n";

            int c = doctor_options();

                if(c == 1){
                    std::cout<<"  Assignment 1 : its question : "<<d.doctor_teaching_course->assignment->question
                                    <<" : its answer : "<<d.doctor_teaching_course->assignment->answer<<"\n";
                }
                else if(c == 2){
                    d.doctor_teaching_course->assignment->create_assignment();
                }
                else if(c == 3){

                }
                else
                    break;
        }
    }
}

void Faculty::is_student_enrolled(std::string user, std::string pass){
    for(auto &s : student){
        if(s.student_user_name == user && s.student_password == pass){
            while(1){

                std::cout<<"\n  Welcome "<<s.student_name<<". You are logged in.\n";

                int c = student_options();

                if(c == 1){
                    std::string input;

                    for(auto &c : course)
                        c.print_course();


                    std::cout<<"  Enter course id : ";  std::cin>>input;

                    for(auto &c : course){
                        if(c.course_id == input){
                            s.add_course(&c);
                            std::cout<<"\n  Successfully added\n";
                        }

                    }
                }
                else if(c == 2){
                    for(int i = 0 ; i < s.student_courses.size(); i++ ){
                        std::cout<<"  "<<i+1<<") Course "<<s.student_courses[i]->course_name
                                      <<" - Code "<<s.student_courses[i]->course_id<<"\n";
                    }
                }
                else if(c == 3){

                    for(int i = 0 ; i < s.student_courses.size(); i++ ){
                        std::cout<<"  "<<i+1<<") Course "<<s.student_courses[i]->course_name
                                      <<" - Code "<<s.student_courses[i]->course_id<<"\n";
                    }

                    int select;

                    std::cout<<"\n  Which ith [1 - "<<s.student_courses.size()<<"] courses to view ? "; std::cin>>select;

                    int choice = view_student_courses(*s.student_courses.at(select-1),select);

                    if(choice == 1)
                        s.student_courses.at(select-1) = nullptr;

                    else if(choice == 2){
                        s.student_courses.at(select-1)->solve_assignment();
                    }


                }
                else if(c == 4){

                }
                else
                    return;
            }
        }
    }
}

int Faculty::admin_options(){
    int c;

    std::cout<<"\n  Please make a choice :\n ";
    std::cout<<"\t1 - Add course\n";
    std::cout<<"\t2 - Add course to existing doctor\n\n";

    std::cout<<"  Choice : ";    std::cin>>c;

    if(c >= 1 && c <= 2)
        return c;

    admin_options();
}

int Faculty::doctor_options(){

    int c;

    std::cout<<"\n  Please make a choice:\n\n";
    std::cout<<"\t1 - List assignments\n";
    std::cout<<"\t2 - Create assignments\n";
    std::cout<<"\t3 - View assignment\n";
    std::cout<<"\t4 - Logout\n\n";

    std::cout<<"\tChoice : ";   std::cin>>c;

    if(c >= 1 && c <= 4)
        return c;

    doctor_options();
}

int Faculty::student_options(){
      int c;

    std::cout<<"\n  Please make a choice:\n\n";
    std::cout<<"\t1 - Register in Course\n";
    std::cout<<"\t2 - List my courses\n";
    std::cout<<"\t3 - View Course\n";
    std::cout<<"\t4 - Grades report\n";
    std::cout<<"\t5 - Log out\n";

    std::cout<<"\n\tEnter choice : "; std::cin>>c;

    if(c >= 1 && c <=  5)
        return c;

    student_options();

}

int Faculty::view_student_courses(Course& c, int select){

    std::cout<<"\n  Course "<<c.course_name
             <<" With Code "<<c.course_id
             <<" - taught by "<<c.dr_taught_course->doctor_name<<"\n"
             <<"  Course has one assignments\n";

    std::cout<<"  Assignment "<<select;

    if(c.assignment->solution != "")
        std::cout<<" Submited";
    else
        std::cout<<" Not submited";

    int choice;

    std::cout<<"  Please make a choice : \n";
    std::cout<<"\t1 - Unregister from Course\n";
    std::cout<<"\t2 - Submit solution\n";
    std::cout<<"\t3 - Back\n\n";
    std::cout<<"Choice : ";  std::cin>>choice;

    if(choice == 1)
        return 1;
    else if(choice == 2)
        return 2;
    else if(choice == 3)
        return 3;

    return 0;
}
