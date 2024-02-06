#include "TimeSheet.h"

TimeSheet::TimeSheet(){

}

TimeSheet::~TimeSheet(){

}

void TimeSheet::set_startTime(time startTime){

    this -> startTime = startTime;
}

void TimeSheet::set_endTime(time endTime){

    this -> endTime = endTime;
}

void TimeSheet::read() {

    time t;
    cout<<"Enter start time : \n";
    t.read();
    set_startTime(t);

    cout<<"Enter end time : \n";
    t.read();
    set_endTime(t);
    
}

time TimeSheet::calculate_Duration() {

    time duration;

    duration.set_hours(startTime.get_hours() - endTime.get_hours());
    duration.set_minutes(startTime.get_minutes() - endTime.get_minutes());
    duration.set_seconds(startTime.get_seconds() - endTime.get_seconds());

    return duration;
}