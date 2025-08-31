#pragma once

#include <iostream>
#include "../Vehicle.hpp"

class Airplane: public Vehicle{
public:
    Airplane(): Vehicle() {}
    virtual void start() override {
        std::cout<<"--> Run airplane!"<<std::endl;
    }
    virtual void stop() override {
        std::cout<<"--> Stop airplane!"<<std::endl;
    }
    void fly(){
        std::cout<<"--> Take off the plane!"<<std::endl;
    }
};