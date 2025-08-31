#pragma once
#include <string>
#include "Card.hpp"

class CreditCard: public Card{
private:
    double m_interest;
public:
    CreditCard(const std::string& n, const std::string& b, double i): Card(n,b), m_interest(i){}

    const double getInterest() const { return m_interest; }

    ~CreditCard() = default;
};