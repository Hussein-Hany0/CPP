#include "Department.h"

Department::Department()
{
   id=-1;
   name="";
}

Department::~Department()
{
    //dtor
}

void Department::add_department()
{
 cout<<"Department Id : ";cin>>id;
 cout<<"Depatrment Name : ";cin>>name;
}

void Department::print()
{
 cout<<"\t\tDepartment Id = "<<id<<endl;
 cout<<"Department Name = "<<name<<endl;
}

int Department::get_id()
{
    return id;
}
