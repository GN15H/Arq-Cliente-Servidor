#pragma once
#include <string>

class Product{
protected:
    std::string productName;
    double price;
    Product(const std::string& n, double p) : productName(n), price(p) {};
public:
    const std::string& getProductName() const { return productName; }
    const double getPrice() const { return price; }
    virtual ~Product() = default; 
};