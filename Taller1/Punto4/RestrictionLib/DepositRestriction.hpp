#pragma once

#include "Restriction.hpp"
#include "../Deposit.hpp"

class DepositRestriction: public Restriction{
public:
    virtual bool check(const Deposit& d) const = 0;
};