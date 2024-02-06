#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include <iostream>
#include "Benefit.h"

#pragma once

using namespace std;

class HealthBenefit : public Benefit
{
    public:
        double calculate_Benefit();
        void input();
        void display_details();

        HealthBenefit();
        virtual ~HealthBenefit();

    protected:

    private:
        string info;
        string coverage;

};

#endif // HEALTHBENEFIT_H
