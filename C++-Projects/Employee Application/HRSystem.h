#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include "SalariedEmployee.h"
#include "Employee.h"
#include "CommissionEmployee.h"
#include "ManagerEmployee.h"
#include "Benefit.h"
#include "HourlyEmployee.h"
#include <iostream>


using namespace std;

class HRSystem
{
    public:
        void add_employee();
        void print_employee();
        void edit_employee();
        void calcualate_payroll();
        void delete_employee();
        void search_employee();

        void take_department(Department*);

        HRSystem();
        virtual ~HRSystem();

    protected:

    private:
        Employee* employee[5];
        static int counter;


};

#endif // HRSYSTEM_H
