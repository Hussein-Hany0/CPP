#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>

using namespace std;

#pragma once

class Product
{
public:
    Product();
    ~Product();

    void update();
    void add_product();
    void print_product();

    int get_id();

private:

    int id;
    string number;
    string name;
    double price;
    int type;
};

#endif