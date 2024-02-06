#include "BankRecord.h"

BankRecord::BankRecord() : balance (0.0){

}

BankRecord::~BankRecord(){

}

void BankRecord::read_record() {

    cout<<"First Name : ";
    cin>>first_name;

    cout<<"Last Name : ";
    cin>>last_name;

    cout<<"Account Number : ";
    cin>>account_number;

    cout<<"Balance : ";
    cin>>balance;

    cout<<"Data is added successfully \n";
}

void BankRecord::show_record(){

    cout<<"\nFull Name      : "<<first_name<<" "<<last_name<<"\n"
        <<"Accound Number : "<<account_number<<"\n"
        <<"Balance        : "<<balance<<"\n";
}

string BankRecord::get_account_number(){

    return account_number;
}

