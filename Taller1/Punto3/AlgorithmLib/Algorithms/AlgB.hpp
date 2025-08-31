#pragma once

#include <iostream>
#include "../../StockLib/Product.hpp"
#include "../../WareLib/Warehouse.hpp"

class AlgB: public StockAlgorithm{
public:
    void execute(const Product& p) override {
        std::cout<<"Ejecutando algoritmo B sobre "<<p.getName()<<std::endl;
    }
};