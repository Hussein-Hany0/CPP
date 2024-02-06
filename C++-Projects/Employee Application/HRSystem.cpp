#include "HRSystem.h"

int HRSystem::counter = 0 ;

HRSystem::HRSystem(){
    //ctor
}


HRSystem::~HRSystem(){
    //dtor
}


void HRSystem::search_employee(){

    if(counter == 0){
        cout<<"No found Employee\n";
        return;
    }


    int id;
    cout<<"Enter id : ";  cin>>id;

    for(int i=0 ; i<counter ; i++)
    {
     if(employee[i]->get_id() == id){
           cout<<"\n\tEmployee is found\n\n";

            employee[i]->display_details();

           break;
    }
    else if(i == counter - 1){
           cout<<"\n\tEmployee is Not found\n";
           break;
    }

}
    return;
}


void HRSystem::add_employee(){

    int choice;

    system("cls");

    cout<<"1 - Salaried Employee\n"
        <<"2 - Hourly Employee\n"
        <<"3 - Commission Employee\n"
        <<"4 - Manger Employee\n\n"

        <<"Choice : ";  cin>>choice; cout<<endl;

    switch(choice)
    {
    case 1 :
        employee[counter] = new SalariedEmployee;
        employee[counter++]->input();
        break;

    case 2:
        employee[counter] = new HourlyEmployee;
        employee[counter++]->input();
        break;

    case 3:
        employee[counter] = new CommissionEmployee;
        employee[counter++]->input();
        break;

    case 4:
        employee[counter] = new ManagerEmployee;
        employee[counter++]->input();
        break;

    }
}


void HRSystem::print_employee(){

if(counter == 0) {
    cout<<"No found Employee\n";
    return;
}

    for(int i=0; i<counter; i++){

        if(employee[i] == nullptr)
            continue;

        employee[i]->display_details();
    }
}


void HRSystem::calcualate_payroll(){

    double total = 0 ;

    for(int i = 0 ; i < counter ; i++){

      total += employee[i]->calculate_pay();
    }


    cout<<"Total = "<<total<<endl;
}



void HRSystem::edit_employee(){
    if(counter==0)
    {
        cout<<"No Employee Inserted\n";
        return;
    }

    else
    {
        cout<<"Enter the id : ";
        int id;
        cin>>id;

        int i ;
        for ( i = 0 ; i < counter ; i++)
            if(employee[i]->get_id() == id)
                employee[i]->input();

        if (i == counter)
            cout<<"Wrong id"<<endl;
    }
}


void HRSystem::delete_employee(){

    if( counter == 0){
        cout<<"No user inserted"<<endl;
        return;
    }

    cout<<"All Id founding : ( ";
    for(int i=0 ; i<counter ; i++){

     if(employee[i]->get_id() == -1) continue;
     else
       cout<<employee[i]->get_id()<<"  -  ";
    }
    cout<<")"<<endl;

    cout<<endl;
    int id;
    cout<<"Enter Id To delete : ";
    cin>>id;

    for(int i = 0 ; i < counter ; i++){

        if(employee[i]->get_id() == id){


            employee[i] = nullptr;

            cout<<"Deleted successfully"<<endl;
        }

        else if( i == counter -1){

            cout<<"Wrong id"<<endl;
        }
    }
}


void HRSystem::take_department(Department* ptr){

    int id;
    cout<<"Enter employee id : ";
    cin>>id;

    for( int i = 0 ; i < counter ; i++){

        if(employee[i]->get_id() == id){

            employee[i]->set_dept_to_employee(ptr);

            cout<<"Added successfully"<<endl;

            break;
        }

        if(i == counter -1 )
            cout<<"Wrong employee id"<<endl;
    }
}
