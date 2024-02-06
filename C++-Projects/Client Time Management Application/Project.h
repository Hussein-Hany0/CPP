#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>

using namespace std;

#pragma once

class Project
{
public:
    Project();
    ~Project();

    void set_name(string);
    void set_deadline(string);
    void set_description(string);

    string get_name();
    string get_deadline();
    string get_description();

private:

    string name;

    string deadline;

    string description;

};

#endif