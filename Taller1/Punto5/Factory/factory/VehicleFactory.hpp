#pragma once

#include <vector>
#include <cassert>

#include "../VehicleType.hpp"
#include "../models/Airplane.hpp"
#include "../models/Car.hpp"
#include "../models/Motorcycle.hpp"
#include "../models/Truck.hpp"
#include <memory>

class VehicleFactory{
public:
    VehicleFactory(){}

    std::unique_ptr<Vehicle> createVehicle(VehicleType type){
        switch(type){
            case VehicleType::airplane:
                return std::make_unique<Airplane>();
            case VehicleType::car:
                return std::make_unique<Car>();
            case VehicleType::motorcycle:
                return std::make_unique<Motorcycle>();
            case VehicleType::truck:
                return std::make_unique<Truck>();
            default:
                return nullptr;
        }
    }

};