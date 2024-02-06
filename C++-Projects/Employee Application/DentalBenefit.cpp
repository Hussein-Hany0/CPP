#include "DentalBenefit.h"

DentalBenefit::DentalBenefit()
{
    //ctor
}

DentalBenefit::~DentalBenefit()
{
    //dtor
}
void DentalBenefit::input()
{
    Benefit::input();
    cout<<"Info : "; cin>>info;
}

void DentalBenefit::display_details()
{
    Benefit::display_details();
    cout<<"\t\tInfo : "<<info;
}

double DentalBenefit::calculate_Benefit()
{
    return (.1 * amount);
}
