#pragma once

#include <iostream>
#include "../Vehicle.hpp"

class Truck: public Vehicle{
public:
    Truck(): Vehicle() {}
    virtual void start() override {
        std::cout<<"--> Run truck!"<<std::endl;
    }
    virtual void stop() override {
        std::cout<<"--> Stop truck!"<<std::endl;
    }
};