#pragma once

#include <string>
#include "Product.hpp"

class Electronic: public Product{
public: 
    Electronic(double price, std::string& name): Product(name,price) {}

    ~Electronic() = default;
};