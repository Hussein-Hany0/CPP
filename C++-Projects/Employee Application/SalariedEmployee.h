#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"

using namespace std;

class SalariedEmployee : public Employee
{
    public:

      void input();
      void display_details();
      double calculate_pay();

        SalariedEmployee();
        virtual ~SalariedEmployee();

    protected:
        double salary;

    private:

};

#endif // SALARIEDEMPLOYEE_H
