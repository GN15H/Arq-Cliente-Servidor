#pragma once

#include <string>
#include "Product.hpp"

class Tool: public Product{
public:
    Tool(const std::string& name): Product(name) {}
    ~Tool() = default;
};