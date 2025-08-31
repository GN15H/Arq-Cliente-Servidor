#pragma once

#include <string>

#include "ICashSaver.hpp"

class CashSaver: public ICashSaver{
public:
    virtual const void deposit(double amount) const{
        std::cout<<"Depositando "<<amount<<std::endl;
    }
    virtual const void withdraw(double amount) const {
        std::cout<<"Retirando "<<amount<<std::endl;
    };
    virtual const double getBalance() const {
        return rand() % 1000;
    };
};