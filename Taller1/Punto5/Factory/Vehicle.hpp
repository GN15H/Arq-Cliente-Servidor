#pragma once

class Vehicle{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    ~Vehicle() {
        std::cout<<"destruido?"<<std::endl;
    };
};