#pragma once

#include <string>

class Product {
protected:
    std::string m_name;

    Product(const std::string& name): m_name(name) {}

public:
    const std::string& getName() const { return m_name; }
    ~Product() = default;
};