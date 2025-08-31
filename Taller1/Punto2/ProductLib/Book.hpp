#pragma once

#include <string>
#include "Product.hpp"

class Book: public Product{
private:
    std::string m_author;
    int m_pages;
public: 
    Book(double price, const std::string& name, const std::string& author, int pages): Product(name,price), 
    m_author(author), m_pages(pages) {}

    const std::string& getAuthor() const { return m_author; }
    const int getPages() const { return m_pages; }

    ~Book() = default;
};