#ifndef BANKRECORDSYSTEM_H
#define BANKRECORDSYSTEM_H
#include "BankRecord.cpp"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#pragma once

class BankRecordSystem
{
public:
    BankRecordSystem();
    ~BankRecordSystem();

    void read_record(); 

    void show_records();

    int is_enrolled(); // return idx;

    void update_record();

    void delete_record();

    void run();  // interface 

private:

    vector<BankRecord> Records;

};

#endif
