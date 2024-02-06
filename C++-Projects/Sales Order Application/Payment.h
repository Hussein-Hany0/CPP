#ifndef PAYMENT_H
#define PAYMENT_H

#include "date.h"

using namespace std;

#pragma once

class Payment
{
public:

    double pay();
    string update();

    Payment();
    ~Payment();

private:
    date paid_date;
    double amount;

};

#endif