#include "Benefit.h"

Benefit::Benefit(){
    amount=0.0;
    planType="";
}


Benefit::~Benefit(){
    //dtor
}

void Benefit::input(){

    cout<<"Enter the Plan Type ( Base , Gold , Platinum ) : "; cin>>planType;
    cout<<"Amount of Benefit : "; cin>>amount;

}

void Benefit::display_details(){

    if(amount==0.0)
        return;

    cout<<"\t\tplan Type : "<<planType<<endl;
    cout<<"Amount of Benefit : "<<amount;
}
