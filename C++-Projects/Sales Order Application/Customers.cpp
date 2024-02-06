#include "Customers.h"

int Customers::cnt = 0;

Customers::Customers(){

    customer_list = new Customer* [20];
}

Customers::~Customers(){

    for (int i = 0 ; i < cnt ; i++)
        delete customer_list [i];
    
    delete customer_list;
}

void Customers::add_customers(){

    int c;

    cout<<"which type : \n"
        <<"1. Company\n"
        <<"2. person\n"
        <<"choice : ";

    cin>>c;

    if (c == 1)
        customer_list [cnt] = new Company;

    else if( c == 2)
        customer_list [cnt] = new Person;
    
    else 
        cout<<"Wrond Choice !";
    
    customer_list [cnt++]->add_customer();
}

void Customers::print_all_cutomers(){

    if( cnt == 0 ){
        cout<<"No Clients";
        return;
    }

    for( int i = 0  ; i < cnt ; i++)
        customer_list [i] ->print();
}

