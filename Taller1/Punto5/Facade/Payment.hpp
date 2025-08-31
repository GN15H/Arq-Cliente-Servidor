#pragma once

#include <iostream>
#include <string>

class Payment{
public:
    bool processPayment(const std::string& userId, double amount) const {
        std::cout<<"User "<<userId<<" paid: "<<amount<<std::endl;
        return true;
    }
};