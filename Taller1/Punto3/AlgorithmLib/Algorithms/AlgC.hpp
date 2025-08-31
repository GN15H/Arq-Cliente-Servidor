#pragma once

#include <iostream>
#include "../../StockLib/Product.hpp"
#include "../../WareLib/Warehouse.hpp"
#include "../StockAlgorithm.hpp"
#include "../WarehouseAlgorithm.hpp"

class AlgC: public StockAlgorithm, public WarehouseAlgorithm{
public:
    void execute(const Product& p) override {
        std::cout<<"Ejecutando algoritmo C sobre producto "<<p.getName()<<std::endl;
    }

    void execute(const Warehouse& w) override{
        std::cout<<"Ejecutando algoritmo C sobre almacén "<<w.getName()<<std::endl;
    }
};

