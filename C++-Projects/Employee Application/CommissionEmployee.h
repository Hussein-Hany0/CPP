#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"

#pragma once

class CommissionEmployee : public Employee
{
    public:
      void input();
      void display_details();
      double calculate_pay();


        CommissionEmployee();
        virtual ~CommissionEmployee();

    protected:

    private:
        double target;
        double rate;

};

#endif // COMMISSIONEMPLOYEE_H
