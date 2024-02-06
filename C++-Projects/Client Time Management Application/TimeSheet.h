#ifndef TIMESHEET_H
#define TIMESHEET_H
#include <iostream>
#include "time.cpp"

using namespace std;

#pragma once

class TimeSheet
{
public:
    TimeSheet();
    ~TimeSheet();

    void set_startTime(time);
    void set_endTime(time);

    void read();

    time calculate_Duration();

private:

    time startTime;
    time endTime;
};

#endif