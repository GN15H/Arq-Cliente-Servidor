#pragma once

#include <iostream>
#include "../Vehicle.hpp"

class Car: public Vehicle{
public:
    Car(): Vehicle() {}
    virtual void start() override {
        std::cout<<"--> Run car!"<<std::endl;
    }
    virtual void stop() override {
        std::cout<<"--> Stop car!"<<std::endl;
    }
};