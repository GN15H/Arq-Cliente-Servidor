#pragma once

#include <string>

class Warehouse {
protected:
    std::string m_name;

    Warehouse(const std::string& name): m_name(name) {}

public:
    const std::string& getName() const { return m_name; }
    ~Warehouse() = default;
};