#pragma once

#include <array>

#include "ICashSaver.hpp"
#include "../RestrictionLib/DepositRestriction.hpp"
#include "../RestrictionLib/WithdrawalRestriction.hpp"
#include "../RestrictionLib/Restrictions/WithdrawalAmount.hpp"
#include "../RestrictionLib/Restrictions/WithdrawalTimes.hpp"
#include "../RestrictionLib/Restrictions/DepositAmount.hpp"

class CashSaverGuard {
private:
    std::array<const WithdrawalRestriction*, 2> m_wRestrictions;
    std::array<const DepositRestriction*, 1> m_dRestrictions;

public:

    CashSaverGuard(){
        const WithdrawalAmount* wAmount = new WithdrawalAmount();
        const WithdrawalTimes* wTimes = new WithdrawalTimes();
        m_wRestrictions = std::array<const WithdrawalRestriction*, 2>{wAmount, wTimes};
        const DepositAmount* dAmount = new DepositAmount();
        m_dRestrictions= std::array<const DepositRestriction*, 1>{dAmount};
    }

    void deposit(const Deposit& d, const ICashSaver& cashSaver){
        if(!check(d)){
            std::cout<<"Depósito fallido"<<std::endl;
            return;
        }
        cashSaver.deposit(d.getAmount());
    }

    void withdraw(const Withdrawal& w, const ICashSaver& cashSaver){
        if(!check(w)){
            std::cout<<"Retiro fallido"<<std::endl;
            return;
        }
        cashSaver.withdraw(w.getAmount());
    }

private:
    bool check(const Withdrawal& w){
        bool validity = true;
        bool cond = true;
        for(const WithdrawalRestriction* r: m_wRestrictions){
            cond = r->check(w);
            validity = validity && cond;
        }
        return validity;
    }

    bool check(const Deposit& d){
        bool validity = true;
        bool cond = true;
        for(const DepositRestriction* r: m_dRestrictions){
            cond = r->check(d);
            validity = validity && cond;
        }
        return validity;
    }
public:
    ~CashSaverGuard(){
        for(const WithdrawalRestriction* restriction: m_wRestrictions){
            delete restriction;
        }
        for(const DepositRestriction* restriction: m_dRestrictions){
            delete restriction;
        }
    }
};