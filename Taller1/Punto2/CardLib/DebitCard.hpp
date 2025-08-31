#pragma once
#include <string>
#include "Card.hpp"

class DebitCard: public Card{
public:
    DebitCard(const std::string& n, const std::string& b): Card(n,b){}
    ~DebitCard() = default;
};