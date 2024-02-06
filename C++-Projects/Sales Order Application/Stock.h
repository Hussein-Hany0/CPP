#ifndef STOCK_H
#define STOCK_H
#include <Product.h>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

#pragma once

class Stock
{
public:
    Stock();
    ~Stock();

    void add_stock();
    void update_stock();
    void delete_stock();
    int get_quantity();


private:

    vector<pair<Product,int>> products_list;  // المنتج + الكمية 
};

#endif