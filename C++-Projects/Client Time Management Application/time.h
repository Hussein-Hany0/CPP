#ifndef TIME_H
#define TIME_H
#include <iostream>

using namespace std;

#pragma once

class time
{
public:
    time();
    ~time();

    void set_hours(int);
    void set_minutes(int);
    void set_seconds(int);

    int get_hours();
    int get_minutes();
    int get_seconds();

    void read();

    void print();

private:

    short int hours;

    short int minutes;

    short int seconds;
};

#endif