#include "HealthBenefit.h"

HealthBenefit::HealthBenefit()
{
    //ctor
}

HealthBenefit::~HealthBenefit()
{
    //dtor
}
void HealthBenefit::input()
{
    Benefit::input();
    cout<<"Info : "; cin>>info;
    cout<<"coverage : "; cin>>coverage;
}

void HealthBenefit::display_details()
{
    Benefit::display_details();
    cout<<"\t\tInfo : "<<info;
    cout<<"\t\tcoverage : "<<coverage;
}

double HealthBenefit::calculate_Benefit()
{
    return (.2 * amount);
}
