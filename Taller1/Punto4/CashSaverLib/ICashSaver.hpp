#pragma once

#include <iostream>
#include <string>

class ICashSaver {
public:
    virtual const void deposit(double amount) const = 0;
    virtual const void withdraw(double amount) const = 0;
    virtual const double getBalance() const = 0;
};