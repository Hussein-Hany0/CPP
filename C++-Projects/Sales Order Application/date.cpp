#include "date.h"

date::date(){

    d = m = y = 0;
}

date::~date(){

}

void date::read(){

    cout<<"Day / Month / Year : "; cin>>d>>m>>y;
}

void date::print(){

    cout<<d<<" / "<<m<<" / "<<y<<endl;
}