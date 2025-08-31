#pragma once

#include <iostream>

#include "../DepositRestriction.hpp"
#include "../../Deposit.hpp"

#define DEPOSIT_MAX_AMOUNT 5

class DepositAmount: public DepositRestriction{
public:
    virtual bool check(const Deposit& d) const override {
        const bool valid = d.getAmount() <= DEPOSIT_MAX_AMOUNT;
        if(!valid)
            std::cout<<"Comunicando a control de lavado"<<std::endl;
        return valid;
    }
};