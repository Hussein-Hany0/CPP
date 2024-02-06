

                //my small projects after these basics
                        //small employee app
#include <iostream>

using namespace std;

int main(){

    string name[50] {""};
    int age[50] {0};
    double salary [50] {0.0};
    char gender[50] {""};

    int cnt {0};

    int choice = -1;

    while(choice != 0){

        system("cls");

        cout<<"  Enter Your Choice:\n\n";
        cout<<"  1) Add new employee\n";
        cout<<"  2) Print all employees\n";
        cout<<"  3) Delete by age\n";
        cout<<"  4) Update salary by name\n";

        cout<<"\n  Choice : "; cin>>choice;

        if(choice == 1){

            system("cls");

            cout<<"  Enter Name : ";    cin>>name[cnt];
            cout<<"  Enter age : ";     cin>>age[cnt];
            cout<<"  Enter Salary : ";  cin>>salary[cnt];
            cout<<"  Enter gender (M/F) : ";  cin>>gender[cnt];

            cnt++;

            system("cls");
        }

        else if(choice == 2){

            system("cls");

            for(int i = 0 ; i <= cnt ; i++){

            if(name[i] == "")
                continue;

                cout<<"  "
                    <<name[i]<<" --- "
                    <<age[i]<<" --- "
                    <<salary[i]<<" --- "<<
                    gender[i]<<"\n";
            }
        }
        else if(choice == 3){
            int start, end;
            cout<<"  Start age : "; cin>>start;
            cout<<"  End age : ";   cin>>end;

            for(int i = 0  ; i<= cnt ; i ++)
                if(age[i] >= start && age[i] <= end)
                    name[i] = "";


        }
        else if(choice == 4){

            string input;

            cout<<"  Enter Name : "; cin>>input;

            for(int i = 0 ; i < cnt ; i++){
                if(input == name[i]){
                    cout<<"  New salary : ";
                    cin>>salary[i];
                }
            }
        }
        cout<<"\n  Anything else ? 0/1 : ";   cin>>choice;
    }

    return 0;
}
