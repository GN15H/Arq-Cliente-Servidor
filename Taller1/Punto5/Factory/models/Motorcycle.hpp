#pragma once

#include <iostream>
#include "../Vehicle.hpp"

class Motorcycle: public Vehicle{
public:
    Motorcycle(): Vehicle() {}
    virtual void start() override {
        std::cout<<"--> Run motorcycle!"<<std::endl;
    }
    virtual void stop() override {
        std::cout<<"--> Stop motorcycle!"<<std::endl;
    }
};