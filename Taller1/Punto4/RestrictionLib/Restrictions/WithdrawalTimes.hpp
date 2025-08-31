#pragma once

#include <iostream>

#include "../WithdrawalRestriction.hpp"
#include "../../Withdrawal.hpp"

#define WITHDRAWAL_MAX_TIMES 2

class WithdrawalTimes: public WithdrawalRestriction{
public:
    virtual bool check(const Withdrawal& w) const override {
        srand(time(NULL));
        const int amounts = rand() % 5;
        const bool valid = amounts < WITHDRAWAL_MAX_TIMES;
        if(!valid)
            std::cout<<"Lleva más de dos retiros esta semana"<<std::endl;
        return valid;
    }
};