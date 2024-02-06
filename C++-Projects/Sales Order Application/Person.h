#ifndef PERSON_H
#define PERSON_H

#include "Customer.h"

#pragma once

class Person : public Customer
{
public:

    Person();
    ~Person();

    void add_customer();
    void print();

private:

    string billing_address;

    string full_name;
};

#endif