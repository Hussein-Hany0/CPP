#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"


class HourlyEmployee : public Employee
{
    public:
      void input();
      void display_details();
      double calculate_pay();


        HourlyEmployee();
        virtual ~HourlyEmployee();

    protected:

    private:
        double hoursWorked;
        double rate;

};

#endif // HOURLYEMPLOYEE_H
