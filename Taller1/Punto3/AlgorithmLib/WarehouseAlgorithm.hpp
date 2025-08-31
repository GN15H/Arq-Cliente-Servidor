#pragma once

#include "Algorithm.hpp"
#include "../WareLib/Warehouse.hpp"

class WarehouseAlgorithm: public Algorithm{
public:
    virtual void execute(const Warehouse& p) = 0;
};
