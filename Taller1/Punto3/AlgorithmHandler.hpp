#pragma once

#include <iostream>

#include "StockLib/Product.hpp"
#include "AlgorithmLib/AlgorithmsEnum.hpp"
#include "AlgorithmLib/Algorithms/AlgA.hpp"
#include "AlgorithmLib/Algorithms/AlgB.hpp"
#include "AlgorithmLib/Algorithms/AlgC.hpp"

class AlgorithmHandler {
private:
    AlgA m_algA;
    AlgB m_algB;
    AlgC m_algC;

public:
    AlgorithmHandler(){
        m_algA = AlgA();
        m_algB = AlgB();
        m_algC = AlgC();
    }

    void execute(const Product& p, StockAlgorithms a){
        switch(a){
            case StockAlgorithms::s_algA:
                m_algA.execute(p);
                break;
            case StockAlgorithms::s_algB:
                m_algB.execute(p);
                break;
            case StockAlgorithms::s_algC:
                m_algC.execute(p);
                break;
            default:
                std::cout<<"No existe tal algoritmo"<<std::endl;
                break;
        }
    }

    void execute(const Warehouse& w, WarehouseAlgorithms a){
        switch(a){
            case WarehouseAlgorithms::w_algA:
                m_algA.execute(w);
                break;
            case WarehouseAlgorithms::w_algC:
                m_algC.execute(w);
                break;
            default:
                std::cout<<"No existe tal algoritmo"<<std::endl;
                break;
        }
    }
};