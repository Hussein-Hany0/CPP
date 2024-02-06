#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include "Customer.h"
#include "Company.h"
#include "Person.h"

#pragma once

class Customers
{
public:
    Customers();
    ~Customers();

    void add_customers();
    void edit_customers();
    void delete_customers();
    void print_all_cutomers();  

private:

    Customer** customer_list;
    static int cnt;

};

#endif