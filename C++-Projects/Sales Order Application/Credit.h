#ifndef CREDIT_H
#define CREDIT_H
#include <Payment.h>
#include "date.h"


#pragma once

class Credit : public Payment
{
public:
    Credit();
    ~Credit();

private:

    string number;
    date expireDate;
    string type;
};

#endif