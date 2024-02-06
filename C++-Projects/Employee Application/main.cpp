#include "Department.h"
#include "HRSystem.h"
#include "Employee.h"
#include <iostream>

using namespace std;

Department depart[25];
int dept_cnt = 0;

HRSystem s;


int main()
{

int choice = 1;

char anas;

int all;

while(choice != -1){

    men :

    system("cls");

    cout<<"1 - Department\n"
        <<"2 - Employee\n"
        <<"3 - Exit this App\n\n"

        <<"choice : "; cin>>choice;  cout<<endl;

    switch(choice){

    case 1 ://department

            dep:

           system("cls");

            cout<<"1 - add department\n";
            cout<<"2 - print all departments\n\n";

            cout<<"choice : "; cin>>choice;   cout<<endl;

            switch(choice){

            case 1 :
                depart[dept_cnt++].add_department();

                cout<<"\n\n\n";
                cout<<"You want return to menu ( Y / N ) : "; cin>>anas;

                 if(anas == 'n' || anas == 'N') return 0;
                 else
                   goto men;

            case 2 :
                for(int i = 0 ; i < dept_cnt ; i++)
                    depart[i].print();

                 cout<<"\n\n\n";
                 cout<<"You want return to menu ( Y / N ) : "; cin>>anas;

                 if(anas == 'n' || anas == 'N') return 0;
                 else
                   goto men;

            default :
                goto dep;

                }


     case 2 ://Employee

              emp:

              system("cls");

               cout<<"1 - add employee\n"
                   <<"2 - print Amployee\n"
                   <<"3 - calculate payroll\n"
                   <<"4 - Edit Employee\n"
                   <<"5 - Delete Employee\n"
                   <<"6 - Assign Department to Employee\n"
                   <<"7 - Find Employee\n"
                   <<"8 - Return to Menu\n\n"

                   <<"choice : ";     cin>>choice;    cout<<endl;

     switch(choice){

          system("cls");

            case 1 :
            s.add_employee();

                 ret :

                 cout<<"\n\n\n";
                 cout<<"You want return to menu ( Y / N ) : "; cin>>anas;

                 if(anas == 'n' || anas == 'N') return 0;
                 else
                   goto men;

            case 2 :
                system("cls");
                 s.print_employee();
                 goto ret;

            case 3 :
                system("cls");
                s.calcualate_payroll();
                goto ret;

            case 4 :
                system("cls");
                 s.edit_employee();
                 goto ret;

            case 5 :
                system("cls");
                s.delete_employee();
                goto ret;

            case 6:{
                system("cls");

                cout<<"Enter Department id : ";
                cin>>all;

                for(int i = 0 ; i < dept_cnt ; i++){

                    if(depart[i].get_id() == all){
                        s.take_department(&depart[i]);
                        break;
                    }

                    if(i == dept_cnt -1 )
                        cout<<"Wrong department id"<<endl;
                }
            }
                 goto ret;

            case 7 :
                system("cls");
                s.search_employee();
                goto ret;


            case 8 :
                goto men;


            default :
                goto emp;

}

            case 3 :
                return 0;

    }
    }

    return 0;
}
