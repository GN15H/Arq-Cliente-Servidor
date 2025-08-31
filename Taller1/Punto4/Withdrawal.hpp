#pragma once

#include <string>

#include "CashSaverLib/ICashSaver.hpp"

class Withdrawal{
private:
    std::string m_personId;
    double m_amount;
public:
    Withdrawal(const std::string& withdrawal, double amount): m_personId(withdrawal), m_amount(amount) {}

    const std::string& getPersonId() const { return m_personId; }
    const double getAmount() const { return m_amount; }
    ~Withdrawal() = default;
};