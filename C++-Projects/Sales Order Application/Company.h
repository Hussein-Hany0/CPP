#ifndef COMPANY_H
#define COMPANY_H

#include "Customer.h"

#pragma once

class Company : public Customer
{
public:
    Company();
    ~Company();

    void add_customer();
    void print();

private:
    string company_name;
    string location;

};

#endif