#pragma once

#include <iostream>

#include "../WithdrawalRestriction.hpp"
#include "../../Withdrawal.hpp"

#define WITHDRAWAL_MAX_AMOUNT 10

class WithdrawalAmount: public WithdrawalRestriction{
public:
    virtual bool check(const Withdrawal& w) const override {
        const bool valid = w.getAmount() <= WITHDRAWAL_MAX_AMOUNT;
        if(!valid)
            std::cout<<"Retiro requiere autorización"<<std::endl;
        return valid;
    }
};