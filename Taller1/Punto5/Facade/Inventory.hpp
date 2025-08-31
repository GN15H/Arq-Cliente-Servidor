#pragma once

#include <iostream>
#include <string>

class Inventory{
public:
    bool checkInventory(const std::string& productId) const {
        std::cout<<"Checking "<<productId<<" in inventory"<<std::endl;
        return true;
    }
};