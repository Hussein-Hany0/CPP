#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "Book.cpp"
#include <iostream>
#include <vector>

using namespace std;

#pragma once

class Department
{
public:
    Department();
    ~Department();

    void set_department_name(string);

    void add_book();

    void list_all_books();

    string get_department_name();

private:

    string department_name;

    vector<Book> books;

};

#endif