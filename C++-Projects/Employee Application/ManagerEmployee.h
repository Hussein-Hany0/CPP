#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include "SalariedEmployee.h"

#pragma once

class ManagerEmployee : public SalariedEmployee
{
    public:
      void input();
      void display_details();
      double calculate_pay();


        ManagerEmployee();
        virtual ~ManagerEmployee();

    protected:

    private:
        double bouns;
};

#endif // MANAGEREMPLOYEE_H
