#pragma once

#include <string>
#include "Product.hpp"

class Music: public Product{
private:
    std::string m_author;
    int m_duration;
public: 
    Music(double price, const std::string& name, const std::string& author, int duration): Product(name, price), 
    m_author(author), m_duration(duration) {}

    const std::string& getAuthor() const { return m_author; }
    const int getDuration() const { return m_duration; }

    ~Music() = default;
};