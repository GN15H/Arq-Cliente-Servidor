#pragma once
#include <cassert>

static const int S_ALGS_SIZE = 3;

enum StockAlgorithms{
    s_algA = 0,
    s_algB = 1,
    s_algC = 2
};

StockAlgorithms getSfromInt(int option){
    assert(option >= 0 && option < S_ALGS_SIZE);
    switch(option){
        case 0:
            return StockAlgorithms::s_algA;
        case 1:
            return StockAlgorithms::s_algB;
        case 2: 
            return StockAlgorithms::s_algC;
        default:
            return StockAlgorithms::s_algA;
    }
}

static const int W_ALGS_SIZE = 3;

enum WarehouseAlgorithms{
    w_algA = 0,
    w_algC = 1
};

WarehouseAlgorithms getWfromInt(int option){
    assert(option >= 0 && option < W_ALGS_SIZE);
    switch(option){
        case 0:
            return WarehouseAlgorithms::w_algA;
        case 1: 
            return WarehouseAlgorithms::w_algC;
        default:
            return WarehouseAlgorithms::w_algA;
    }
}