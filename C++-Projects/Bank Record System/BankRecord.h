#ifndef BANKRECORD_H
#define BANKRECORD_H
#include <iostream>

using namespace std;


#pragma once

class BankRecord
{
public:
    BankRecord();
    ~BankRecord();

    void read_record();

    void show_record();

    string get_account_number();

private:

    string account_number;

    string first_name;

    string last_name;

    double balance;

};

#endif