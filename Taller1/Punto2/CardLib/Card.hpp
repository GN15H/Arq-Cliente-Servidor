#pragma once
#include <string>

class Card{
protected:
    std::string number;
    std::string bank;
    Card(const std::string& n, const std::string& b): number(n), bank(b) {}

public:
    const std::string& getNumber() const { return number; }
    const std::string& getBank() const { return bank; }
    ~Card() = default;
};