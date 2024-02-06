#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
using namespace std;

#pragma once

class Department
{
    public:

        void add_department();
        void print();
        int get_id();



        Department();
        virtual ~Department();

    protected:

    private:
        int id;
        string name;
};

#endif // DEPARTMENT_H
