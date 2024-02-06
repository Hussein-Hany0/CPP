#include "CommissionEmployee.h"


CommissionEmployee::CommissionEmployee()
{

}

CommissionEmployee::~CommissionEmployee()
{
    //dtor
}
void CommissionEmployee::input()
{
    Employee::input();
    cout<<"Target : "; cin>>target;
    cout<<"Rate : "; cin>>rate;
    add_benefit();
}

void CommissionEmployee::display_details()
{
   Employee::display_details();
   cout<<"Target = "<<target;
   cout<<"Rate = "<<rate;
}

double CommissionEmployee::calculate_pay()
{
  double total = Employee::calculate_benefit();

 return (rate * target) + total ;
}


