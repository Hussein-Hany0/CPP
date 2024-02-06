#include "Person.h"

Person::Person(){

    billing_address = full_name = "";
}

Person::~Person(){

}

void Person::add_customer(){

    cout<<"Full Name : ";
    cin>>full_name;

    cout<<"Billing address : ";
    cin>>billing_address;

    Customer::add_customer();
}

void Person::print(){

    cout<<"Full Name : "<<full_name
        <<"\t billing address     : "<<billing_address<<endl;

    Customer::print();
}