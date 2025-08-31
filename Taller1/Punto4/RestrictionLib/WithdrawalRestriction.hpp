#pragma once

#include "Restriction.hpp"
#include "../Withdrawal.hpp"

class WithdrawalRestriction: public Restriction{
public:
    virtual bool check(const Withdrawal& w) const = 0;
};