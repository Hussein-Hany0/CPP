#include "time.h"

time::time() : hours(0) , minutes(0) , seconds(0){}

time::~time(){}

void time::set_hours(int hours){

    this->hours = hours;
}

void time::set_minutes(int minutes) {

    this->minutes = minutes;
}

void time::set_seconds(int seconds) {

    this->seconds = seconds;
}

int time::get_hours() { return hours;}

int time::get_minutes() { return minutes;}

int time::get_seconds() { return seconds;}

void time::read() {

    int input;

    cout<<"Hours : ";
    cin>>input;
    set_hours(input);

    cout<<"Minutes : ";
    cin>>input;
    set_minutes(input);

    cout<<"Seconds : ";
    cin>>input;
    set_seconds(input);
}

void time::print() {

    cout<<hours<<" : "<<minutes<<" : "<<seconds<<"\n"; 
}