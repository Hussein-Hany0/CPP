#ifndef CASH_H
#define CASH_H
#include "Payment.h"

#pragma once

class Cash : public Payment
{
public:
    Cash();
    ~Cash();

public:
    double cashValue;

};

#endif