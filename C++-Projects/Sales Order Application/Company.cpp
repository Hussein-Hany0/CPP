#include "Company.h"

Company::Company(){

    location = company_name = "";
}

Company::~Company(){

}

void Company::add_customer(){

    cout<<"Company Name : ";
    cin>>company_name;

    cout<<"Location : ";
    cin>>location;

    Customer::add_customer();
}

void Company::print(){

    cout<<"Company Name : "<<company_name
        <<"\t Location     : "<<location<<endl;

    Customer::print();
}