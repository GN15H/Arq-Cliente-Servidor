#pragma once

#include "Algorithm.hpp"
#include "../StockLib/Product.hpp"

class StockAlgorithm: public Algorithm{
public:
    virtual void execute(const Product& p) = 0;
};
