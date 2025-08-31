#pragma once

#include <string>
#include "Warehouse.hpp"

class ToolsWarehouse: public Warehouse{
public:
    ToolsWarehouse(const std::string& name): Warehouse(name) {}
    ~ToolsWarehouse() = default;
};