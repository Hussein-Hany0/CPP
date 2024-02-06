#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>

using namespace std;

#pragma once

class Client
{
public:
    Client();
    ~Client();

    

private:

    int id;

    string name;

    string phone;

    string email;

    string note;

    string addedDate;

};

#endif