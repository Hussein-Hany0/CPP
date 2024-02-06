#ifndef CHECK_H
#define CHECK_H
#include "Payment.h"

#pragma once

class Check : public Payment
{
public:
    Check();
    ~Check();

private:

    string name;
    string Bank_id;
};

#endif