#include "SalariedEmployee.h"


SalariedEmployee::SalariedEmployee():Employee()
{

}

SalariedEmployee::~SalariedEmployee()
{
    //dtor
}

void SalariedEmployee::input()
{
    Employee::input();
    cout<<"Salary of Employee : "; cin>>salary;
    add_benefit();
}

void SalariedEmployee::display_details()
{
   Employee::display_details();
   cout<<"\t\tSalary of Employee = "<<salary<<endl<<endl;
}

double SalariedEmployee::calculate_pay(){

    double total = Employee::calculate_benefit();

    return salary + total;
}


