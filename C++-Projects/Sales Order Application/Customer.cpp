#include "Customer.h"

Customer::Customer(){
    id = -1;
    phone = "";
}

Customer::~Customer(){

}

void Customer::add_customer(){

    cout<<"ID  : "; 
    cin>>id;

    cout<<"Phone : ";
    cin>>phone;
}

void Customer::print(){

    cout<<"ID        : "<<id<<"\t phone : "<<phone<<endl;

}

