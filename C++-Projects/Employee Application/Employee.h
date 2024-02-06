#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Department.h"
#include "Benefit.h"
#include "DentalBenefit.h"
#include "HealthBenefit.h"

using namespace std;

class Employee
{
    public:

       virtual void input();
       virtual void display_details();
       virtual double calculate_pay() = 0;

       void set_dept_to_employee(Department*);

       void add_benefit();
       void print_benefit();
       double calculate_benefit();

       void set_id(int);
       int get_id();


        Employee();
        virtual ~Employee();

    protected:

        Department* department;

        int id;
        string name;
        string phone;
        string email;
        string job_titel;

        Benefit* benefit[5];
        int benefit_cnt = 0;

};

#endif // EMPLOYEE_H
