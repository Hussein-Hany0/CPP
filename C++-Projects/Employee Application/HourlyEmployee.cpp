#include "HourlyEmployee.h"
#include "Employee.h"


HourlyEmployee::HourlyEmployee()
{
    //ctor
}

HourlyEmployee::~HourlyEmployee()
{
    //dtor
}
void HourlyEmployee::input()
{
    Employee::input();
    cout<<"Hours Worked : "; cin>>hoursWorked;
    cout<<"Rate : "; cin>>rate;
    add_benefit();
}

void HourlyEmployee::display_details()
{
   Employee::display_details();
   cout<<"Hours Worked : "<<hoursWorked<<endl;
    cout<<"Rate : "<<rate<<endl;
}

double HourlyEmployee::calculate_pay()
{
   double total = Employee::calculate_benefit();

    return (rate * hoursWorked) + total ;
}



