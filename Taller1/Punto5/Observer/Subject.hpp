#pragma once

#include <unordered_map>

#include "Observer.hpp"

class WeatherStation{
private:
    std::unordered_map<int, const TemperatureDisplay&> m_observers;
    double m_temp;

    void notifyObserver() const {
        for(auto it = m_observers.begin(); it != m_observers.end(); it++){
            it->second.update(m_temp);
        }
    }
    
public:
    WeatherStation(): m_observers({}), m_temp(0) {}

    void registerObserver(const TemperatureDisplay& observer) {
        m_observers.insert({observer.getId(), observer});
    }
    void removeObserver(const TemperatureDisplay& observer) {
        m_observers.erase(observer.getId());
    }
    void setTemperature(double temp){
        m_temp = temp;
        notifyObserver();
    }
};