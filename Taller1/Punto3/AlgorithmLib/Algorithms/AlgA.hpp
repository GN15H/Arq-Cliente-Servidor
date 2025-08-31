#pragma once

#include <iostream>
#include "../../StockLib/Product.hpp"
#include "../../WareLib/Warehouse.hpp"
#include "../StockAlgorithm.hpp"
#include "../WarehouseAlgorithm.hpp"

class AlgA: public StockAlgorithm, public WarehouseAlgorithm{
public:
    void execute(const Product& p) override {
        std::cout<<"Ejecutando algoritmo A sobre producto "<<p.getName()<<std::endl;
    }

    void execute(const Warehouse& w) override{
        std::cout<<"Ejecutando algoritmo A sobre almacen "<<w.getName()<<std::endl;
    }
};