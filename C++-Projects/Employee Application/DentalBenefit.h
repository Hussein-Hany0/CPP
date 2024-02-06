#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include<iostream>
#include"Benefit.h"

using namespace std;

#pragma once

class DentalBenefit : public Benefit
{
    public:

        double calculate_Benefit();
        void input();
        void display_details();

        DentalBenefit();
        virtual ~DentalBenefit();

    protected:

    private:
        string info;
};

#endif // DENTALBENEFIT_H
