#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

using namespace std;

#pragma once

class Customer
{
public:
    Customer();
    ~Customer();

    virtual void add_customer();
    virtual void print();

   

private:
    int id;
    string phone;

};

#endif