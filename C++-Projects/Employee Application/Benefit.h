#ifndef BENEFIT_H
#define BENEFIT_H
#include <iostream>
using namespace std;

class Benefit
{
    public:
        virtual void input();
        virtual void display_details();

        virtual double calculate_Benefit() = 0;

        Benefit();
        virtual ~Benefit();

    protected:

        string planType;
        double amount;

    private:
};

#endif // BENEFIT_H
