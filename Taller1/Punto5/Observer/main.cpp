#include "Subject.hpp"
#include "Observer.hpp"

int main(){
    WeatherStation station;
    TemperatureDisplay display(0);
    TemperatureDisplay display2(1);

    station.registerObserver(display);
    station.registerObserver(display2);
    station.setTemperature(20);
    station.setTemperature(30);
    station.setTemperature(40);

    return 0;
}