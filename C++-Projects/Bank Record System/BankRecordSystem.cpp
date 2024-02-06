#include "BankRecordSystem.h"

BankRecordSystem::BankRecordSystem() {

}

BankRecordSystem::~BankRecordSystem(){

}

void BankRecordSystem::read_record(){

    BankRecord B;

    B.read_record();

    Records.push_back(B);

    cout<<"Record is added successfully \n";
}

void BankRecordSystem::show_records(){

    if(Records.size() == 0)
        return;

    for(int i = 0 ; i < (int) Records.size() ; ++i)
        Records[i].show_record();
}

int BankRecordSystem::is_enrolled() {

    if(Records.size() == 0)
        return -1;

    string account_number;

    cout<<"Enter the account number : ";
    cin>>account_number;

    for(int i = 0 ; i < (int) Records.size() ; ++i)
        if(Records[i].get_account_number() == account_number)
            return i;

    return -1;
}

void BankRecordSystem::update_record() {

    if(Records.size() == 0)
        return;

    int idx = is_enrolled();

    if(idx == -1)
        cout<<"Not Found \n";

    else{
        
        cout<<"This Record has the following data : \n";

        Records[idx].show_record();

        cout<<"Enter new data to modify : \n";

        Records[idx].read_record();

        cout<<"Data is modified successfully \n";
    }
}

void BankRecordSystem::delete_record() {

    if(Records.size() == 0)
        return;

    int idx = is_enrolled();

    if(idx == -1)
        cout<<"Not Found \n";
                                      
    else {

        Records.erase(Records.begin() + idx);

        cout<<"Record is deleted successfully \n";
    }
}

void BankRecordSystem::run() {

    cout<<"*** Acount Information System *** \n"
        <<"Select one option below : \n"
        <<"\t 1 - Add record \n"
        <<"\t 2 - Show record \n"
        <<"\t 3 - Search for record \n"
        <<"\t 4 - Update record \n"
        <<"\t 5 - Delete record \n"
        <<"\t 6 - Exit \n\n";

    int option;
    cout<<"Enter your option : ";
    cin>>option;

    if(option == 1)
        read_record();

    else if(option == 2)
        show_records();

    else if(option == 3)
        is_enrolled();

    else if(option == 4)
        update_record();

    else if(option == 5)
        delete_record();

    else if(option == 6)
        return;

    run();
}