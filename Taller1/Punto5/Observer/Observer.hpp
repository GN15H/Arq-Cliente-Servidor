#pragma once

#include <iostream>

class TemperatureDisplay{
private:
    long long unsigned int m_id;
public:
    TemperatureDisplay(long long unsigned int id): m_id(id) {}

    void update(double temp) const {
        std::cout<<"("<<m_id<<") Current temperature: "<<temp<<" °C"<<std::endl;
    }

    long long unsigned int getId() const { return m_id; }
};