#include "factory/VehicleFactory.hpp"
#include "VehicleType.hpp"
#include "models/Car.hpp"

int main(){
    VehicleFactory vehicleFactory;

    auto car = vehicleFactory.createVehicle(VehicleType::car);
    car->start();
    car->stop();

    auto airplane = vehicleFactory.createVehicle(VehicleType::airplane);
    airplane->start();
    dynamic_cast<Airplane*>(airplane.get())->fly();

    auto moto = vehicleFactory.createVehicle(VehicleType::motorcycle);
    moto->start();
    moto->stop();

    auto truck = vehicleFactory.createVehicle(VehicleType::truck);
    truck->start();
    truck->stop();

    return 0;
}
