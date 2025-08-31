#pragma once

#include <string>

#include "CashSaverLib/ICashSaver.hpp"

class Deposit{
private:
    std::string m_personId;
    double m_amount;
public:
    Deposit(const std::string& personId, double amount): m_personId(personId), m_amount(amount) {}

    const std::string& getPersonId() const { return m_personId; }
    const double getAmount() const { return m_amount; }

    ~Deposit() = default;
};
