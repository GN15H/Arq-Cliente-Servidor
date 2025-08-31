#pragma once

#include <iostream>
#include <string>

class Shipping{
public:
    bool checkShipping(const std::string& userId, const std::string& productId) const {
        std::cout<<"Checking shipping for "<<productId<<" in user "<<userId<<std::endl;
        return true;
    }
};